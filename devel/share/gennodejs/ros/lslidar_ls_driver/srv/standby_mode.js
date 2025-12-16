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

class standby_modeRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.standby_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('standby_mode')) {
        this.standby_mode = initObj.standby_mode
      }
      else {
        this.standby_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type standby_modeRequest
    // Serialize message field [standby_mode]
    bufferOffset = _serializer.int8(obj.standby_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type standby_modeRequest
    let len;
    let data = new standby_modeRequest(null);
    // Deserialize message field [standby_mode]
    data.standby_mode = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/standby_modeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '422a2076f0ec4f22c47bea3a3afdb473';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 standby_mode
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new standby_modeRequest(null);
    if (msg.standby_mode !== undefined) {
      resolved.standby_mode = msg.standby_mode;
    }
    else {
      resolved.standby_mode = 0
    }

    return resolved;
    }
};

class standby_modeResponse {
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
    // Serializes a message object of type standby_modeResponse
    // Serialize message field [result]
    bufferOffset = _serializer.bool(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type standby_modeResponse
    let len;
    let data = new standby_modeResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'lslidar_ls_driver/standby_modeResponse';
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
    const resolved = new standby_modeResponse(null);
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
  Request: standby_modeRequest,
  Response: standby_modeResponse,
  md5sum() { return '1624e82515d941105debf01f9e74621c'; },
  datatype() { return 'lslidar_ls_driver/standby_mode'; }
};
