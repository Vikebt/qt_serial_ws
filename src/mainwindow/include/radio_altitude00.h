#ifndef SENSOR_DATA_RECEIVER_H
#define SENSOR_DATA_RECEIVER_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>  // for strtol
#include <cstring>  // for memcpy
#include <cmath>
#include <serial/serial.h>
#include <thread>

struct Radio_result
{
    float altitude;
    std::string gps_time;
};

class SensorDataReceiver
{
public:
    SensorDataReceiver(const std::string &port, uint32_t baud_rate);
    ~SensorDataReceiver();

    // 将读取并解码的数据写入文本文件
    void record_radio_altitude();

    // 关闭串口
    void closeSerial();
    
    //初始化串口
    bool initializeSerial();

    //float decodedHeight;//解码数据
    Radio_result result;
    std::string gps_time_str;


    //抓取串口数据线程
    std::unique_ptr<std::thread> capture_thread;
    void capture_serial_thread();
    bool capture_thread_flag;
    //开始线程运行
    void start_thread();
    //停止线程
    void stop_thread();



private:

    std::vector<unsigned char> r_buffer;
    std::vector<unsigned char> m_buffer;  // 用于存储未处理完的数据帧
    serial::Serial ser;
    std::string port_;
    int baud_rate_;

    // 解码十六进制字符串到浮点数
    float decodeHexToFloat(const char *hexData);
    // 从串口读取数据并解码，返回解码后的高度值
    float readAndDecodeData();

    uint8_t calculateChecksum(const uint8_t* frame_data, size_t length);
    float decodeHeightFromBytes(uint8_t high_byte, uint8_t low_byte);


};

#endif  // SENSOR_DATA_RECEIVER_H