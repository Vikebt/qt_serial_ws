; Auto-generated. Do not edit!


(cl:in-package lslidar_ls_driver-srv)


;//! \htmlinclude standby_mode-request.msg.html

(cl:defclass <standby_mode-request> (roslisp-msg-protocol:ros-message)
  ((standby_mode
    :reader standby_mode
    :initarg :standby_mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass standby_mode-request (<standby_mode-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <standby_mode-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'standby_mode-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<standby_mode-request> is deprecated: use lslidar_ls_driver-srv:standby_mode-request instead.")))

(cl:ensure-generic-function 'standby_mode-val :lambda-list '(m))
(cl:defmethod standby_mode-val ((m <standby_mode-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:standby_mode-val is deprecated.  Use lslidar_ls_driver-srv:standby_mode instead.")
  (standby_mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <standby_mode-request>) ostream)
  "Serializes a message object of type '<standby_mode-request>"
  (cl:let* ((signed (cl:slot-value msg 'standby_mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <standby_mode-request>) istream)
  "Deserializes a message object of type '<standby_mode-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'standby_mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<standby_mode-request>)))
  "Returns string type for a service object of type '<standby_mode-request>"
  "lslidar_ls_driver/standby_modeRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'standby_mode-request)))
  "Returns string type for a service object of type 'standby_mode-request"
  "lslidar_ls_driver/standby_modeRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<standby_mode-request>)))
  "Returns md5sum for a message object of type '<standby_mode-request>"
  "1624e82515d941105debf01f9e74621c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'standby_mode-request)))
  "Returns md5sum for a message object of type 'standby_mode-request"
  "1624e82515d941105debf01f9e74621c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<standby_mode-request>)))
  "Returns full string definition for message of type '<standby_mode-request>"
  (cl:format cl:nil "int8 standby_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'standby_mode-request)))
  "Returns full string definition for message of type 'standby_mode-request"
  (cl:format cl:nil "int8 standby_mode~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <standby_mode-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <standby_mode-request>))
  "Converts a ROS message object to a list"
  (cl:list 'standby_mode-request
    (cl:cons ':standby_mode (standby_mode msg))
))
;//! \htmlinclude standby_mode-response.msg.html

(cl:defclass <standby_mode-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass standby_mode-response (<standby_mode-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <standby_mode-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'standby_mode-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<standby_mode-response> is deprecated: use lslidar_ls_driver-srv:standby_mode-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <standby_mode-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:result-val is deprecated.  Use lslidar_ls_driver-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <standby_mode-response>) ostream)
  "Serializes a message object of type '<standby_mode-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <standby_mode-response>) istream)
  "Deserializes a message object of type '<standby_mode-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<standby_mode-response>)))
  "Returns string type for a service object of type '<standby_mode-response>"
  "lslidar_ls_driver/standby_modeResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'standby_mode-response)))
  "Returns string type for a service object of type 'standby_mode-response"
  "lslidar_ls_driver/standby_modeResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<standby_mode-response>)))
  "Returns md5sum for a message object of type '<standby_mode-response>"
  "1624e82515d941105debf01f9e74621c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'standby_mode-response)))
  "Returns md5sum for a message object of type 'standby_mode-response"
  "1624e82515d941105debf01f9e74621c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<standby_mode-response>)))
  "Returns full string definition for message of type '<standby_mode-response>"
  (cl:format cl:nil "bool result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'standby_mode-response)))
  "Returns full string definition for message of type 'standby_mode-response"
  (cl:format cl:nil "bool result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <standby_mode-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <standby_mode-response>))
  "Converts a ROS message object to a list"
  (cl:list 'standby_mode-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'standby_mode)))
  'standby_mode-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'standby_mode)))
  'standby_mode-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'standby_mode)))
  "Returns string type for a service object of type '<standby_mode>"
  "lslidar_ls_driver/standby_mode")