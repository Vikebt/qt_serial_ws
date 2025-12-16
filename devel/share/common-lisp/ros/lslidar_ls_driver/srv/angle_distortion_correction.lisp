; Auto-generated. Do not edit!


(cl:in-package lslidar_ls_driver-srv)


;//! \htmlinclude angle_distortion_correction-request.msg.html

(cl:defclass <angle_distortion_correction-request> (roslisp-msg-protocol:ros-message)
  ((angle_distortion_correction
    :reader angle_distortion_correction
    :initarg :angle_distortion_correction
    :type cl:fixnum
    :initform 0))
)

(cl:defclass angle_distortion_correction-request (<angle_distortion_correction-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <angle_distortion_correction-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'angle_distortion_correction-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<angle_distortion_correction-request> is deprecated: use lslidar_ls_driver-srv:angle_distortion_correction-request instead.")))

(cl:ensure-generic-function 'angle_distortion_correction-val :lambda-list '(m))
(cl:defmethod angle_distortion_correction-val ((m <angle_distortion_correction-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:angle_distortion_correction-val is deprecated.  Use lslidar_ls_driver-srv:angle_distortion_correction instead.")
  (angle_distortion_correction m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <angle_distortion_correction-request>) ostream)
  "Serializes a message object of type '<angle_distortion_correction-request>"
  (cl:let* ((signed (cl:slot-value msg 'angle_distortion_correction)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <angle_distortion_correction-request>) istream)
  "Deserializes a message object of type '<angle_distortion_correction-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'angle_distortion_correction) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<angle_distortion_correction-request>)))
  "Returns string type for a service object of type '<angle_distortion_correction-request>"
  "lslidar_ls_driver/angle_distortion_correctionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'angle_distortion_correction-request)))
  "Returns string type for a service object of type 'angle_distortion_correction-request"
  "lslidar_ls_driver/angle_distortion_correctionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<angle_distortion_correction-request>)))
  "Returns md5sum for a message object of type '<angle_distortion_correction-request>"
  "d983ffb854a179224eceb9c4385f0696")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'angle_distortion_correction-request)))
  "Returns md5sum for a message object of type 'angle_distortion_correction-request"
  "d983ffb854a179224eceb9c4385f0696")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<angle_distortion_correction-request>)))
  "Returns full string definition for message of type '<angle_distortion_correction-request>"
  (cl:format cl:nil "int8 angle_distortion_correction~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'angle_distortion_correction-request)))
  "Returns full string definition for message of type 'angle_distortion_correction-request"
  (cl:format cl:nil "int8 angle_distortion_correction~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <angle_distortion_correction-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <angle_distortion_correction-request>))
  "Converts a ROS message object to a list"
  (cl:list 'angle_distortion_correction-request
    (cl:cons ':angle_distortion_correction (angle_distortion_correction msg))
))
;//! \htmlinclude angle_distortion_correction-response.msg.html

(cl:defclass <angle_distortion_correction-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass angle_distortion_correction-response (<angle_distortion_correction-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <angle_distortion_correction-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'angle_distortion_correction-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name lslidar_ls_driver-srv:<angle_distortion_correction-response> is deprecated: use lslidar_ls_driver-srv:angle_distortion_correction-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <angle_distortion_correction-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader lslidar_ls_driver-srv:result-val is deprecated.  Use lslidar_ls_driver-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <angle_distortion_correction-response>) ostream)
  "Serializes a message object of type '<angle_distortion_correction-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <angle_distortion_correction-response>) istream)
  "Deserializes a message object of type '<angle_distortion_correction-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<angle_distortion_correction-response>)))
  "Returns string type for a service object of type '<angle_distortion_correction-response>"
  "lslidar_ls_driver/angle_distortion_correctionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'angle_distortion_correction-response)))
  "Returns string type for a service object of type 'angle_distortion_correction-response"
  "lslidar_ls_driver/angle_distortion_correctionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<angle_distortion_correction-response>)))
  "Returns md5sum for a message object of type '<angle_distortion_correction-response>"
  "d983ffb854a179224eceb9c4385f0696")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'angle_distortion_correction-response)))
  "Returns md5sum for a message object of type 'angle_distortion_correction-response"
  "d983ffb854a179224eceb9c4385f0696")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<angle_distortion_correction-response>)))
  "Returns full string definition for message of type '<angle_distortion_correction-response>"
  (cl:format cl:nil "bool result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'angle_distortion_correction-response)))
  "Returns full string definition for message of type 'angle_distortion_correction-response"
  (cl:format cl:nil "bool result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <angle_distortion_correction-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <angle_distortion_correction-response>))
  "Converts a ROS message object to a list"
  (cl:list 'angle_distortion_correction-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'angle_distortion_correction)))
  'angle_distortion_correction-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'angle_distortion_correction)))
  'angle_distortion_correction-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'angle_distortion_correction)))
  "Returns string type for a service object of type '<angle_distortion_correction>"
  "lslidar_ls_driver/angle_distortion_correction")