# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "lslidar_ls_driver: 1 messages, 9 services")

set(MSG_I_FLAGS "-Ilslidar_ls_driver:/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(lslidar_ls_driver_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv" ""
)

get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv" NAME_WE)
add_custom_target(_lslidar_ls_driver_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "lslidar_ls_driver" "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Services
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_cpp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Module File
_generate_module_cpp(lslidar_ls_driver
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(lslidar_ls_driver_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(lslidar_ls_driver_generate_messages lslidar_ls_driver_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_cpp _lslidar_ls_driver_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(lslidar_ls_driver_gencpp)
add_dependencies(lslidar_ls_driver_gencpp lslidar_ls_driver_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS lslidar_ls_driver_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Services
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_eus(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Module File
_generate_module_eus(lslidar_ls_driver
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(lslidar_ls_driver_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(lslidar_ls_driver_generate_messages lslidar_ls_driver_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_eus _lslidar_ls_driver_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(lslidar_ls_driver_geneus)
add_dependencies(lslidar_ls_driver_geneus lslidar_ls_driver_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS lslidar_ls_driver_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Services
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_lisp(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Module File
_generate_module_lisp(lslidar_ls_driver
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(lslidar_ls_driver_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(lslidar_ls_driver_generate_messages lslidar_ls_driver_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_lisp _lslidar_ls_driver_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(lslidar_ls_driver_genlisp)
add_dependencies(lslidar_ls_driver_genlisp lslidar_ls_driver_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS lslidar_ls_driver_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Services
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_nodejs(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Module File
_generate_module_nodejs(lslidar_ls_driver
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(lslidar_ls_driver_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(lslidar_ls_driver_generate_messages lslidar_ls_driver_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_nodejs _lslidar_ls_driver_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(lslidar_ls_driver_gennodejs)
add_dependencies(lslidar_ls_driver_gennodejs lslidar_ls_driver_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS lslidar_ls_driver_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Services
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)
_generate_srv_py(lslidar_ls_driver
  "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
)

### Generating Module File
_generate_module_py(lslidar_ls_driver
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(lslidar_ls_driver_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(lslidar_ls_driver_generate_messages lslidar_ls_driver_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/msg/LslidarLsPacket.msg" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/angle_distortion_correction.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/frame_rate.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/destination_ip.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/data_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/dev_port.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/invalid_data.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/standby_mode.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/qt_serial_ws_251216/src/lslidar_ls_driver/srv/time_service.srv" NAME_WE)
add_dependencies(lslidar_ls_driver_generate_messages_py _lslidar_ls_driver_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(lslidar_ls_driver_genpy)
add_dependencies(lslidar_ls_driver_genpy lslidar_ls_driver_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS lslidar_ls_driver_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/lslidar_ls_driver
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(lslidar_ls_driver_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(lslidar_ls_driver_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/lslidar_ls_driver
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(lslidar_ls_driver_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(lslidar_ls_driver_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/lslidar_ls_driver
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(lslidar_ls_driver_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(lslidar_ls_driver_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/lslidar_ls_driver
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(lslidar_ls_driver_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(lslidar_ls_driver_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/lslidar_ls_driver
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(lslidar_ls_driver_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(lslidar_ls_driver_generate_messages_py sensor_msgs_generate_messages_py)
endif()
