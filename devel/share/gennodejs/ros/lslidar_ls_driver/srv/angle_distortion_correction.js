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

class angle_distortion_correctionRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.angle_distortion_correction = null;
    }
    else {
      if (initObj.hasOwnProperty('angle_distortion_correction')) {
        this.angle_distortion_correction = initObj.angle_distortion_correction
      }
      else {
        this.angle_distortion_correction = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type angle_distortion_correctionRequest
    // Serialize message field [angle_distortion_correction]
    bufferOffset = _serializer.int8(obj.angle_distortion_correction, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type angle_distortion_correctionRequest
    let len;
    let data = new angle_distortion_correctionRequest(null);
    // Deserialize message field [angle_distortion_correction]
    data.angle_distortion_correction = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/angle_distortion_correctionRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '24be7ab9b990f7316f28bc9cd35f82f4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 angle_distortion_correction
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new angle_distortion_correctionRequest(null);
    if (msg.angle_distortion_correction !== undefined) {
      resolved.angle_distortion_correction = msg.angle_distortion_correction;
    }
    else {
      resolved.angle_distortion_correction = 0
    }

    return resolved;
    }
};

class angle_distortion_correctionResponse {
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
    // Serializes a message object of type angle_distortion_correctionResponse
    // Serialize message field [result]
    bufferOffset = _serializer.bool(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type angle_distortion_correctionResponse
    let len;
    let data = new angle_distortion_correctionResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/angle_distortion_correctionResponse';
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
    const resolved = new angle_distortion_correctionResponse(null);
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
  Request: angle_distortion_correctionRequest,
  Response: angle_distortion_correctionResponse,
  md5sum() { return 'd983ffb854a179224eceb9c4385f0696'; },
  datatype() { return 'lslidar_ls_driver/angle_distortion_correction'; }
};
