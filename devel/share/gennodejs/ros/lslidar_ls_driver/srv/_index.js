
"use strict";

let dev_port = require('./dev_port.js')
let angle_distortion_correction = require('./angle_distortion_correction.js')
let frame_rate = require('./frame_rate.js')
let data_ip = require('./data_ip.js')
let standby_mode = require('./standby_mode.js')
let invalid_data = require('./invalid_data.js')
let time_service = require('./time_service.js')
let destination_ip = require('./destination_ip.js')
let data_port = require('./data_port.js')

module.exports = {
  dev_port: dev_port,
  angle_distortion_correction: angle_distortion_correction,
  frame_rate: frame_rate,
  data_ip: data_ip,
  standby_mode: standby_mode,
  invalid_data: invalid_data,
  time_service: time_service,
  destination_ip: destination_ip,
  data_port: data_port,
};
