; Auto-generated. Do not edit!


(cl:in-package serial_msgs-msg)


;//! \htmlinclude air_pressure.msg.html

(cl:defclass <air_pressure> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (pressure
    :reader pressure
    :initarg :pressure
    :type cl:float
    :initform 0.0)
   (altitude_false
    :reader altitude_false
    :initarg :altitude_false
    :type cl:float
    :initform 0.0)
   (altitude_true
    :reader altitude_true
    :initarg :altitude_true
    :type cl:float
    :initform 0.0)
   (velocity
    :reader velocity
    :initarg :velocity
    :type cl:float
    :initform 0.0))
)

(cl:defclass air_pressure (<air_pressure>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <air_pressure>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'air_pressure)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name serial_msgs-msg:<air_pressure> is deprecated: use serial_msgs-msg:air_pressure instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <air_pressure>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_msgs-msg:header-val is deprecated.  Use serial_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'pressure-val :lambda-list '(m))
(cl:defmethod pressure-val ((m <air_pressure>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_msgs-msg:pressure-val is deprecated.  Use serial_msgs-msg:pressure instead.")
  (pressure m))

(cl:ensure-generic-function 'altitude_false-val :lambda-list '(m))
(cl:defmethod altitude_false-val ((m <air_pressure>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_msgs-msg:altitude_false-val is deprecated.  Use serial_msgs-msg:altitude_false instead.")
  (altitude_false m))

(cl:ensure-generic-function 'altitude_true-val :lambda-list '(m))
(cl:defmethod altitude_true-val ((m <air_pressure>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_msgs-msg:altitude_true-val is deprecated.  Use serial_msgs-msg:altitude_true instead.")
  (altitude_true m))

(cl:ensure-generic-function 'velocity-val :lambda-list '(m))
(cl:defmethod velocity-val ((m <air_pressure>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_msgs-msg:velocity-val is deprecated.  Use serial_msgs-msg:velocity instead.")
  (velocity m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <air_pressure>) ostream)
  "Serializes a message object of type '<air_pressure>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pressure))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'altitude_false))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'altitude_true))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <air_pressure>) istream)
  "Deserializes a message object of type '<air_pressure>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pressure) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'altitude_false) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'altitude_true) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'velocity) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<air_pressure>)))
  "Returns string type for a message object of type '<air_pressure>"
  "serial_msgs/air_pressure")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'air_pressure)))
  "Returns string type for a message object of type 'air_pressure"
  "serial_msgs/air_pressure")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<air_pressure>)))
  "Returns md5sum for a message object of type '<air_pressure>"
  "bd17d505d4d8356e7134f196e7c31915")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'air_pressure)))
  "Returns md5sum for a message object of type 'air_pressure"
  "bd17d505d4d8356e7134f196e7c31915")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<air_pressure>)))
  "Returns full string definition for message of type '<air_pressure>"
  (cl:format cl:nil "Header header~%float32 pressure~%float32 altitude_false~%float32 altitude_true~%float32 velocity~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'air_pressure)))
  "Returns full string definition for message of type 'air_pressure"
  (cl:format cl:nil "Header header~%float32 pressure~%float32 altitude_false~%float32 altitude_true~%float32 velocity~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <air_pressure>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <air_pressure>))
  "Converts a ROS message object to a list"
  (cl:list 'air_pressure
    (cl:cons ':header (header msg))
    (cl:cons ':pressure (pressure msg))
    (cl:cons ':altitude_false (altitude_false msg))
    (cl:cons ':altitude_true (altitude_true msg))
    (cl:cons ':velocity (velocity msg))
))
