;; Auto-generated. Do not edit!


(when (boundp 'lslidar_ls_driver::standby_mode)
  (if (not (find-package "LSLIDAR_LS_DRIVER"))
    (make-package "LSLIDAR_LS_DRIVER"))
  (shadow 'standby_mode (find-package "LSLIDAR_LS_DRIVER")))
(unless (find-package "LSLIDAR_LS_DRIVER::STANDBY_MODE")
  (make-package "LSLIDAR_LS_DRIVER::STANDBY_MODE"))
(unless (find-package "LSLIDAR_LS_DRIVER::STANDBY_MODEREQUEST")
  (make-package "LSLIDAR_LS_DRIVER::STANDBY_MODEREQUEST"))
(unless (find-package "LSLIDAR_LS_DRIVER::STANDBY_MODERESPONSE")
  (make-package "LSLIDAR_LS_DRIVER::STANDBY_MODERESPONSE"))

(in-package "ROS")





(defclass lslidar_ls_driver::standby_modeRequest
  :super ros::object
  :slots (_standby_mode ))

(defmethod lslidar_ls_driver::standby_modeRequest
  (:init
   (&key
    ((:standby_mode __standby_mode) 0)
    )
   (send-super :init)
   (setq _standby_mode (round __standby_mode))
   self)
  (:standby_mode
   (&optional __standby_mode)
   (if __standby_mode (setq _standby_mode __standby_mode)) _standby_mode)
  (:serialization-length
   ()
   (+
    ;; int8 _standby_mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _standby_mode
       (write-byte _standby_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _standby_mode
     (setq _standby_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _standby_mode 127) (setq _standby_mode (- _standby_mode 256)))
   ;;
   self)
  )

(defclass lslidar_ls_driver::standby_modeResponse
  :super ros::object
  :slots (_result ))

(defmethod lslidar_ls_driver::standby_modeResponse
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

(defclass lslidar_ls_driver::standby_mode
  :super ros::object
  :slots ())

(setf (get lslidar_ls_driver::standby_mode :md5sum-) "1624e82515d941105debf01f9e74621c")
(setf (get lslidar_ls_driver::standby_mode :datatype-) "lslidar_ls_driver/standby_mode")
(setf (get lslidar_ls_driver::standby_mode :request) lslidar_ls_driver::standby_modeRequest)
(setf (get lslidar_ls_driver::standby_mode :response) lslidar_ls_driver::standby_modeResponse)

(defmethod lslidar_ls_driver::standby_modeRequest
  (:response () (instance lslidar_ls_driver::standby_modeResponse :init)))

(setf (get lslidar_ls_driver::standby_modeRequest :md5sum-) "1624e82515d941105debf01f9e74621c")
(setf (get lslidar_ls_driver::standby_modeRequest :datatype-) "lslidar_ls_driver/standby_modeRequest")
(setf (get lslidar_ls_driver::standby_modeRequest :definition-)
      "int8 standby_mode
---
bool result
")

(setf (get lslidar_ls_driver::standby_modeResponse :md5sum-) "1624e82515d941105debf01f9e74621c")
(setf (get lslidar_ls_driver::standby_modeResponse :datatype-) "lslidar_ls_driver/standby_modeResponse")
(setf (get lslidar_ls_driver::standby_modeResponse :definition-)
      "int8 standby_mode
---
bool result
")



(provide :lslidar_ls_driver/standby_mode "1624e82515d941105debf01f9e74621c")


