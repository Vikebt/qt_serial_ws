#include "../include/radio_altitude.h"
#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>
#include "radio_altitude.h"

SensorDataReceiver::SensorDataReceiver(const std::string &port, uint32_t baud_rate)
: port_(port), baud_rate_(baud_rate), capture_thread_flag(true)
{
    // 初始化缓冲区
    m_buffer.clear();
    m_buffer.reserve(32);
}

SensorDataReceiver::~SensorDataReceiver()
{
    closeSerial();
}

void SensorDataReceiver::record_radio_altitude()
{
    Radio_result temp_result;
    temp_result.altitude = -1;
    
    // 读取并解码数据
    float decodedHeight = readAndDecodeData();
    temp_result.gps_time = gps_time_str;
    
    // 如果解码后的数据有效，更新结果
    if (decodedHeight != 0.0f)
    {
        temp_result.altitude = decodedHeight;
    }
    else
    {
        //std::cerr << "No valid data to write to file" << std::endl;
    }
   
    result = temp_result;
}

void SensorDataReceiver::closeSerial()
{
    if (ser.isOpen())
    {
        ser.close();
        std::cout << "Serial port closed." << std::endl;
    }
}

bool SensorDataReceiver::initializeSerial()
{
    try
    {
        ser.setPort(port_);
        ser.setBaudrate(baud_rate_);
        
        // 关键：设置偶校验（根据传感器要求）
        ser.setParity(serial::parity_even);  // 启用偶校验
        ser.setBytesize(serial::eightbits);   // 8位数据位
        ser.setStopbits(serial::stopbits_one); // 1位停止位
        
        std::cout << "串口配置：启用偶校验，8位数据位，1位停止位" << std::endl;
        
        serial::Timeout to = serial::Timeout::simpleTimeout(1000);
        ser.setTimeout(to);
        ser.open();
        
        if (ser.isOpen())
        {
            std::cout << "Succeed to open radio_alititude_port: " << port_ << std::endl;
            return true;
        }
    }
    catch (serial::IOException &e)
    {
        std::cerr << "Unable to open radio_alititude_port: " << e.what() << std::endl;
    }
    catch (serial::SerialException &e)
    {
        std::cerr << "串口设置异常: " << e.what() << std::endl;
    }
    return false;
}

// 计算校验和（所有字节的和，取低8位）
uint8_t SensorDataReceiver::calculateChecksum(const uint8_t* frame_data, size_t length)
{
    uint16_t sum = 0;  // 使用16位防止溢出
    
    for (size_t i = 0; i < length; i++) {
        sum += frame_data[i];
    }
    
    // 取低8位作为校验和
    return static_cast<uint8_t>(sum & 0xFF);
}

float SensorDataReceiver::readAndDecodeData()
{
    // 帧头定义
    const uint8_t FRAME_HEADER[] = {0x7E, 0x7E};
    const size_t FRAME_LENGTH = 6;
    
    try
    {
        // 直接读取并处理，不使用大缓冲区
        unsigned char buffer[32];  // 足够存放几帧数据
        size_t bytes_read = 0;
        
        // 尝试读取一帧数据
        while (true)
        {
            size_t available = ser.available();
            if (available >= FRAME_LENGTH)
            {
                // 读取足够的数据
                bytes_read = ser.read(buffer, 
                    std::min(sizeof(buffer), available));
                break;
            }
            else if (available > 0)
            {
                // 读取可用数据，等待更多数据
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }
            else
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
                return 0.0f;
            }
        }
        
        // 在读取的数据中查找帧
        for (size_t i = 0; i + FRAME_LENGTH <= bytes_read; i++)
        {
            if (buffer[i] == FRAME_HEADER[0] && buffer[i + 1] == FRAME_HEADER[1])
            {
                // 提取帧数据
                uint8_t data_high = buffer[i + 2];
                uint8_t data_low = buffer[i + 3];
                uint8_t valid_flag = buffer[i + 4];
                uint8_t received_checksum = buffer[i + 5];
                
                // 计算校验和
                uint16_t sum = buffer[i] + buffer[i+1] + buffer[i+2] + 
                              buffer[i+3] + buffer[i+4];
                uint8_t calculated_checksum = static_cast<uint8_t>(sum & 0xFF);
                
                if (valid_flag == 0x80 && received_checksum == calculated_checksum)
                {
                    uint16_t raw_value = (static_cast<uint16_t>(data_high) << 8) | data_low;
                    float height = (static_cast<float>(raw_value) / 10.0f - 300.0f);
                    //std::cout << "高度=" << height << " m" << std::endl;
                    static int frame_count = 0;
                    frame_count++;
                    
                    if (frame_count % 100 == 0)
                    {
                        std::cout << "处理帧 #" << frame_count 
                                  << ": 高度=" << height << " m" << std::endl;
                    }
                    
                    return height;
                }
            }
        }
        
        return 0.0f;
    }
    catch (std::exception& e) 
    {
        std::cerr << "读取或解析串口数据时发生异常：" << e.what() << std::endl;
    }
    
    return 0.0f;
}
void SensorDataReceiver::capture_serial_thread()
{
    while(capture_thread_flag)
    {
        record_radio_altitude();
    }
    std::cout<<"radio串口线程停止"<<std::endl;
}

void SensorDataReceiver::start_thread()
{
    if (!capture_thread) {
        capture_thread = std::make_unique<std::thread>(&SensorDataReceiver::capture_serial_thread, this);
    }
}

void SensorDataReceiver::stop_thread()
{
    capture_thread_flag = false;
    if (capture_thread && capture_thread->joinable()) 
    {
        capture_thread->join();
    }
}