;; Auto-generated. Do not edit!


(when (boundp 'lslidar_ls_driver::invalid_data)
  (if (not (find-package "LSLIDAR_LS_DRIVER"))
    (make-package "LSLIDAR_LS_DRIVER"))
  (shadow 'invalid_data (find-package "LSLIDAR_LS_DRIVER")))
(unless (find-package "LSLIDAR_LS_DRIVER::INVALID_DATA")
  (make-package "LSLIDAR_LS_DRIVER::INVALID_DATA"))
(unless (find-package "LSLIDAR_LS_DRIVER::INVALID_DATAREQUEST")
  (make-package "LSLIDAR_LS_DRIVER::INVALID_DATAREQUEST"))
(unless (find-package "LSLIDAR_LS_DRIVER::INVALID_DATARESPONSE")
  (make-package "LSLIDAR_LS_DRIVER::INVALID_DATARESPONSE"))

(in-package "ROS")





(defclass lslidar_ls_driver::invalid_dataRequest
  :super ros::object
  :slots (_invalid_data ))

(defmethod lslidar_ls_driver::invalid_dataRequest
  (:init
   (&key
    ((:invalid_data __invalid_data) 0)
    )
   (send-super :init)
   (setq _invalid_data (round __invalid_data))
   self)
  (:invalid_data
   (&optional __invalid_data)
   (if __invalid_data (setq _invalid_data __invalid_data)) _invalid_data)
  (:serialization-length
   ()
   (+
    ;; int32 _invalid_data
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _invalid_data
       (write-long _invalid_data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _invalid_data
     (setq _invalid_data (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass lslidar_ls_driver::invalid_dataResponse
  :super ros::object
  :slots (_result ))

(defmethod lslidar_ls_driver::invalid_dataResponse
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

(defclass lslidar_ls_driver::invalid_data
  :super ros::object
  :slots ())

(setf (get lslidar_ls_driver::invalid_data :md5sum-) "97f23ad7e27228b8c5d15cd432f4a379")
(setf (get lslidar_ls_driver::invalid_data :datatype-) "lslidar_ls_driver/invalid_data")
(setf (get lslidar_ls_driver::invalid_data :request) lslidar_ls_driver::invalid_dataRequest)
(setf (get lslidar_ls_driver::invalid_data :response) lslidar_ls_driver::invalid_dataResponse)

(defmethod lslidar_ls_driver::invalid_dataRequest
  (:response () (instance lslidar_ls_driver::invalid_dataResponse :init)))

(setf (get lslidar_ls_driver::invalid_dataRequest :md5sum-) "97f23ad7e27228b8c5d15cd432f4a379")
(setf (get lslidar_ls_driver::invalid_dataRequest :datatype-) "lslidar_ls_driver/invalid_dataRequest")
(setf (get lslidar_ls_driver::invalid_dataRequest :definition-)
      "int32 invalid_data
---
bool result
")

(setf (get lslidar_ls_driver::invalid_dataResponse :md5sum-) "97f23ad7e27228b8c5d15cd432f4a379")
(setf (get lslidar_ls_driver::invalid_dataResponse :datatype-) "lslidar_ls_driver/invalid_dataResponse")
(setf (get lslidar_ls_driver::invalid_dataResponse :definition-)
      "int32 invalid_data
---
bool result
")



(provide :lslidar_ls_driver/invalid_data "97f23ad7e27228b8c5d15cd432f4a379")


