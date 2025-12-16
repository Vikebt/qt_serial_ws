;; Auto-generated. Do not edit!


(when (boundp 'serial_msgs::air_pressure)
  (if (not (find-package "SERIAL_MSGS"))
    (make-package "SERIAL_MSGS"))
  (shadow 'air_pressure (find-package "SERIAL_MSGS")))
(unless (find-package "SERIAL_MSGS::AIR_PRESSURE")
  (make-package "SERIAL_MSGS::AIR_PRESSURE"))

(in-package "ROS")
;;//! \htmlinclude air_pressure.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass serial_msgs::air_pressure
  :super ros::object
  :slots (_header _pressure _altitude_false _altitude_true _velocity ))

(defmethod serial_msgs::air_pressure
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:pressure __pressure) 0.0)
    ((:altitude_false __altitude_false) 0.0)
    ((:altitude_true __altitude_true) 0.0)
    ((:velocity __velocity) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _pressure (float __pressure))
   (setq _altitude_false (float __altitude_false))
   (setq _altitude_true (float __altitude_true))
   (setq _velocity (float __velocity))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:pressure
   (&optional __pressure)
   (if __pressure (setq _pressure __pressure)) _pressure)
  (:altitude_false
   (&optional __altitude_false)
   (if __altitude_false (setq _altitude_false __altitude_false)) _altitude_false)
  (:altitude_true
   (&optional __altitude_true)
   (if __altitude_true (setq _altitude_true __altitude_true)) _altitude_true)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _pressure
    4
    ;; float32 _altitude_false
    4
    ;; float32 _altitude_true
    4
    ;; float32 _velocity
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _pressure
       (sys::poke _pressure (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _altitude_false
       (sys::poke _altitude_false (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _altitude_true
       (sys::poke _altitude_true (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _velocity
       (sys::poke _velocity (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _pressure
     (setq _pressure (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _altitude_false
     (setq _altitude_false (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _altitude_true
     (setq _altitude_true (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _velocity
     (setq _velocity (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get serial_msgs::air_pressure :md5sum-) "bd17d505d4d8356e7134f196e7c31915")
(setf (get serial_msgs::air_pressure :datatype-) "serial_msgs/air_pressure")
(setf (get serial_msgs::air_pressure :definition-)
      "Header header
float32 pressure
float32 altitude_false
float32 altitude_true
float32 velocity
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :serial_msgs/air_pressure "bd17d505d4d8356e7134f196e7c31915")


