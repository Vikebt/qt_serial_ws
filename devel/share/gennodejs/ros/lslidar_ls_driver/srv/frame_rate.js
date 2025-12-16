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

class frame_rateRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.frame_rate = null;
    }
    else {
      if (initObj.hasOwnProperty('frame_rate')) {
        this.frame_rate = initObj.frame_rate
      }
      else {
        this.frame_rate = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type frame_rateRequest
    // Serialize message field [frame_rate]
    bufferOffset = _serializer.int32(obj.frame_rate, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type frame_rateRequest
    let len;
    let data = new frame_rateRequest(null);
    // Deserialize message field [frame_rate]
    data.frame_rate = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/frame_rateRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '30e64d124f7d123c35b09bb3ee7f7eaf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 frame_rate
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new frame_rateRequest(null);
    if (msg.frame_rate !== undefined) {
      resolved.frame_rate = msg.frame_rate;
    }
    else {
      resolved.frame_rate = 0
    }

    return resolved;
    }
};

class frame_rateResponse {
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
    // Serializes a message object of type frame_rateResponse
    // Serialize message field [result]
    bufferOffset = _serializer.bool(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type frame_rateResponse
    let len;
    let data = new frame_rateResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/frame_rateResponse';
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
    const resolved = new frame_rateResponse(null);
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
  Request: frame_rateRequest,
  Response: frame_rateResponse,
  md5sum() { return '82b83e3f6f39bd297516edd9c8b8083a'; },
  datatype() { return 'lslidar_ls_driver/frame_rate'; }
};
