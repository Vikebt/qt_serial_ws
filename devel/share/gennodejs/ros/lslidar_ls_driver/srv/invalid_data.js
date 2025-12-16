// Auto-generated. Do not edit!

// (in-package lslidar_ls_driver.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class invalid_dataRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.invalid_data = null;
    }
    else {
      if (initObj.hasOwnProperty('invalid_data')) {
        this.invalid_data = initObj.invalid_data
      }
      else {
        this.invalid_data = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type invalid_dataRequest
    // Serialize message field [invalid_data]
    bufferOffset = _serializer.int32(obj.invalid_data, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type invalid_dataRequest
    let len;
    let data = new invalid_dataRequest(null);
    // Deserialize message field [invalid_data]
    data.invalid_data = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/invalid_dataRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7a405c4044adc7385617ed79e4984b74';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 invalid_data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new invalid_dataRequest(null);
    if (msg.invalid_data !== undefined) {
      resolved.invalid_data = msg.invalid_data;
    }
    else {
      resolved.invalid_data = 0
    }

    return resolved;
    }
};

class invalid_dataResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type invalid_dataResponse
    // Serialize message field [result]
    bufferOffset = _serializer.bool(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type invalid_dataResponse
    let len;
    let data = new invalid_dataResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/invalid_dataResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'eb13ac1f1354ccecb7941ee8fa2192e8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool result
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new invalid_dataResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = false
    }

    return resolved;
    }
};

module.exports = {
  Request: invalid_dataRequest,
  Response: invalid_dataResponse,
  md5sum() { return '97f23ad7e27228b8c5d15cd432f4a379'; },
  datatype() { return 'lslidar_ls_driver/invalid_data'; }
};
