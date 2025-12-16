; Auto-generated. Do not edit!


(cl:in-package lslidar_ls_driver-srv)


;//! \htmlinclude invalid_data-request.msg.html

(cl:defclass <invalid_data-request> (roslisp-msg-protocol:ros-message)
  ((invalid_data
    :reader invalid_data
    :initarg :invalid_data
    :type cl:integer
    :initform 0))
)

(cl:defclass invalid_data-request (<invalid_data-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <invalid_data-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'invalid_data-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<invalid_data-request> is deprecated: use lslidar_ls_driver-srv:invalid_data-request instead.")))

(cl:ensure-generic-function 'invalid_data-val :lambda-list '(m))
(cl:defmethod invalid_data-val ((m <invalid_data-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:invalid_data-val is deprecated.  Use lslidar_ls_driver-srv:invalid_data instead.")
  (invalid_data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <invalid_data-request>) ostream)
  "Serializes a message object of type '<invalid_data-request>"
  (cl:let* ((signed (cl:slot-value msg 'invalid_data)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <invalid_data-request>) istream)
  "Deserializes a message object of type '<invalid_data-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'invalid_data) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<invalid_data-request>)))
  "Returns string type for a service object of type '<invalid_data-request>"
  "lslidar_ls_driver/invalid_dataRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'invalid_data-request)))
  "Returns string type for a service object of type 'invalid_data-request"
  "lslidar_ls_driver/invalid_dataRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<invalid_data-request>)))
  "Returns md5sum for a message object of type '<invalid_data-request>"
  "97f23ad7e27228b8c5d15cd432f4a379")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'invalid_data-request)))
  "Returns md5sum for a message object of type 'invalid_data-request"
  "97f23ad7e27228b8c5d15cd432f4a379")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<invalid_data-request>)))
  "Returns full string definition for message of type '<invalid_data-request>"
  (cl:format cl:nil "int32 invalid_data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'invalid_data-request)))
  "Returns full string definition for message of type 'invalid_data-request"
  (cl:format cl:nil "int32 invalid_data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <invalid_data-request>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <invalid_data-request>))
  "Converts a ROS message object to a list"
  (cl:list 'invalid_data-request
    (cl:cons ':invalid_data (invalid_data msg))
))
;//! \htmlinclude invalid_data-response.msg.html

(cl:defclass <invalid_data-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass invalid_data-response (<invalid_data-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <invalid_data-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'invalid_data-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<invalid_data-response> is deprecated: use lslidar_ls_driver-srv:invalid_data-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <invalid_data-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:result-val is deprecated.  Use lslidar_ls_driver-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <invalid_data-response>) ostream)
  "Serializes a message object of type '<invalid_data-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <invalid_data-response>) istream)
  "Deserializes a message object of type '<invalid_data-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<invalid_data-response>)))
  "Returns string type for a service object of type '<invalid_data-response>"
  "lslidar_ls_driver/invalid_dataResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'invalid_data-response)))
  "Returns string type for a service object of type 'invalid_data-response"
  "lslidar_ls_driver/invalid_dataResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<invalid_data-response>)))
  "Returns md5sum for a message object of type '<invalid_data-response>"
  "97f23ad7e27228b8c5d15cd432f4a379")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'invalid_data-response)))
  "Returns md5sum for a message object of type 'invalid_data-response"
  "97f23ad7e27228b8c5d15cd432f4a379")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<invalid_data-response>)))
  "Returns full string definition for message of type '<invalid_data-response>"
  (cl:format cl:nil "bool result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'invalid_data-response)))
  "Returns full string definition for message of type 'invalid_data-response"
  (cl:format cl:nil "bool result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <invalid_data-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <invalid_data-response>))
  "Converts a ROS message object to a list"
  (cl:list 'invalid_data-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'invalid_data)))
  'invalid_data-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'invalid_data)))
  'invalid_data-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'invalid_data)))
  "Returns string type for a service object of type '<invalid_data>"
  "lslidar_ls_driver/invalid_data")