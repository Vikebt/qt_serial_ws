;; Auto-generated. Do not edit!


(when (boundp 'lslidar_ls_driver::frame_rate)
  (if (not (find-package "LSLIDAR_LS_DRIVER"))
    (make-package "LSLIDAR_LS_DRIVER"))
  (shadow 'frame_rate (find-package "LSLIDAR_LS_DRIVER")))
(unless (find-package "LSLIDAR_LS_DRIVER::FRAME_RATE")
  (make-package "LSLIDAR_LS_DRIVER::FRAME_RATE"))
(unless (find-package "LSLIDAR_LS_DRIVER::FRAME_RATEREQUEST")
  (make-package "LSLIDAR_LS_DRIVER::FRAME_RATEREQUEST"))
(unless (find-package "LSLIDAR_LS_DRIVER::FRAME_RATERESPONSE")
  (make-package "LSLIDAR_LS_DRIVER::FRAME_RATERESPONSE"))

(in-package "ROS")





(defclass lslidar_ls_driver::frame_rateRequest
  :super ros::object
  :slots (_frame_rate ))

(defmethod lslidar_ls_driver::frame_rateRequest
  (:init
   (&key
    ((:frame_rate __frame_rate) 0)
    )
   (send-super :init)
   (setq _frame_rate (round __frame_rate))
   self)
  (:frame_rate
   (&optional __frame_rate)
   (if __frame_rate (setq _frame_rate __frame_rate)) _frame_rate)
  (:serialization-length
   ()
   (+
    ;; int32 _frame_rate
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _frame_rate
       (write-long _frame_rate s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _frame_rate
     (setq _frame_rate (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass lslidar_ls_driver::frame_rateResponse
  :super ros::object
  :slots (_result ))

(defmethod lslidar_ls_driver::frame_rateResponse
  (:init
   (&key
    ((:result __result) nil)
    )
   (send-super :init)
   (setq _result __result)
   self)
  (:result
   (&optional (__result :null))
   (if (not (eq __result :null)) (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass lslidar_ls_driver::frame_rate
  :super ros::object
  :slots ())

(setf (get lslidar_ls_driver::frame_rate :md5sum-) "82b83e3f6f39bd297516edd9c8b8083a")
(setf (get lslidar_ls_driver::frame_rate :datatype-) "lslidar_ls_driver/frame_rate")
(setf (get lslidar_ls_driver::frame_rate :request) lslidar_ls_driver::frame_rateRequest)
(setf (get lslidar_ls_driver::frame_rate :response) lslidar_ls_driver::frame_rateResponse)

(defmethod lslidar_ls_driver::frame_rateRequest
  (:response () (instance lslidar_ls_driver::frame_rateResponse :init)))

(setf (get lslidar_ls_driver::frame_rateRequest :md5sum-) "82b83e3f6f39bd297516edd9c8b8083a")
(setf (get lslidar_ls_driver::frame_rateRequest :datatype-) "lslidar_ls_driver/frame_rateRequest")
(setf (get lslidar_ls_driver::frame_rateRequest :definition-)
      "int32 frame_rate
---
bool result
")

(setf (get lslidar_ls_driver::frame_rateResponse :md5sum-) "82b83e3f6f39bd297516edd9c8b8083a")
(setf (get lslidar_ls_driver::frame_rateResponse :datatype-) "lslidar_ls_driver/frame_rateResponse")
(setf (get lslidar_ls_driver::frame_rateResponse :definition-)
      "int32 frame_rate
---
bool result
")



(provide :lslidar_ls_driver/frame_rate "82b83e3f6f39bd297516edd9c8b8083a")


