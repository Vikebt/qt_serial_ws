; Auto-generated. Do not edit!


(cl:in-package lslidar_ls_driver-srv)


;//! \htmlinclude frame_rate-request.msg.html

(cl:defclass <frame_rate-request> (roslisp-msg-protocol:ros-message)
  ((frame_rate
    :reader frame_rate
    :initarg :frame_rate
    :type cl:integer
    :initform 0))
)

(cl:defclass frame_rate-request (<frame_rate-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <frame_rate-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'frame_rate-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<frame_rate-request> is deprecated: use lslidar_ls_driver-srv:frame_rate-request instead.")))

(cl:ensure-generic-function 'frame_rate-val :lambda-list '(m))
(cl:defmethod frame_rate-val ((m <frame_rate-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:frame_rate-val is deprecated.  Use lslidar_ls_driver-srv:frame_rate instead.")
  (frame_rate m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <frame_rate-request>) ostream)
  "Serializes a message object of type '<frame_rate-request>"
  (cl:let* ((signed (cl:slot-value msg 'frame_rate)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <frame_rate-request>) istream)
  "Deserializes a message object of type '<frame_rate-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'frame_rate) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<frame_rate-request>)))
  "Returns string type for a service object of type '<frame_rate-request>"
  "lslidar_ls_driver/frame_rateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'frame_rate-request)))
  "Returns string type for a service object of type 'frame_rate-request"
  "lslidar_ls_driver/frame_rateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<frame_rate-request>)))
  "Returns md5sum for a message object of type '<frame_rate-request>"
  "82b83e3f6f39bd297516edd9c8b8083a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'frame_rate-request)))
  "Returns md5sum for a message object of type 'frame_rate-request"
  "82b83e3f6f39bd297516edd9c8b8083a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<frame_rate-request>)))
  "Returns full string definition for message of type '<frame_rate-request>"
  (cl:format cl:nil "int32 frame_rate~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'frame_rate-request)))
  "Returns full string definition for message of type 'frame_rate-request"
  (cl:format cl:nil "int32 frame_rate~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <frame_rate-request>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <frame_rate-request>))
  "Converts a ROS message object to a list"
  (cl:list 'frame_rate-request
    (cl:cons ':frame_rate (frame_rate msg))
))
;//! \htmlinclude frame_rate-response.msg.html

(cl:defclass <frame_rate-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass frame_rate-response (<frame_rate-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <frame_rate-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'frame_rate-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<frame_rate-response> is deprecated: use lslidar_ls_driver-srv:frame_rate-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <frame_rate-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:result-val is deprecated.  Use lslidar_ls_driver-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <frame_rate-response>) ostream)
  "Serializes a message object of type '<frame_rate-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <frame_rate-response>) istream)
  "Deserializes a message object of type '<frame_rate-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<frame_rate-response>)))
  "Returns string type for a service object of type '<frame_rate-response>"
  "lslidar_ls_driver/frame_rateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'frame_rate-response)))
  "Returns string type for a service object of type 'frame_rate-response"
  "lslidar_ls_driver/frame_rateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<frame_rate-response>)))
  "Returns md5sum for a message object of type '<frame_rate-response>"
  "82b83e3f6f39bd297516edd9c8b8083a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'frame_rate-response)))
  "Returns md5sum for a message object of type 'frame_rate-response"
  "82b83e3f6f39bd297516edd9c8b8083a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<frame_rate-response>)))
  "Returns full string definition for message of type '<frame_rate-response>"
  (cl:format cl:nil "bool result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'frame_rate-response)))
  "Returns full string definition for message of type 'frame_rate-response"
  (cl:format cl:nil "bool result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <frame_rate-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <frame_rate-response>))
  "Converts a ROS message object to a list"
  (cl:list 'frame_rate-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'frame_rate)))
  'frame_rate-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'frame_rate)))
  'frame_rate-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'frame_rate)))
  "Returns string type for a service object of type '<frame_rate>"
  "lslidar_ls_driver/frame_rate")