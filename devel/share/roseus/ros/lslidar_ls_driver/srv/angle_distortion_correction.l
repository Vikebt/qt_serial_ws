;; Auto-generated. Do not edit!


(when (boundp 'lslidar_ls_driver::angle_distortion_correction)
  (if (not (find-package "LSLIDAR_LS_DRIVER"))
    (make-package "LSLIDAR_LS_DRIVER"))
  (shadow 'angle_distortion_correction (find-package "LSLIDAR_LS_DRIVER")))
(unless (find-package "LSLIDAR_LS_DRIVER::ANGLE_DISTORTION_CORRECTION")
  (make-package "LSLIDAR_LS_DRIVER::ANGLE_DISTORTION_CORRECTION"))
(unless (find-package "LSLIDAR_LS_DRIVER::ANGLE_DISTORTION_CORRECTIONREQUEST")
  (make-package "LSLIDAR_LS_DRIVER::ANGLE_DISTORTION_CORRECTIONREQUEST"))
(unless (find-package "LSLIDAR_LS_DRIVER::ANGLE_DISTORTION_CORRECTIONRESPONSE")
  (make-package "LSLIDAR_LS_DRIVER::ANGLE_DISTORTION_CORRECTIONRESPONSE"))

(in-package "ROS")





(defclass lslidar_ls_driver::angle_distortion_correctionRequest
  :super ros::object
  :slots (_angle_distortion_correction ))

(defmethod lslidar_ls_driver::angle_distortion_correctionRequest
  (:init
   (&key
    ((:angle_distortion_correction __angle_distortion_correction) 0)
    )
   (send-super :init)
   (setq _angle_distortion_correction (round __angle_distortion_correction))
   self)
  (:angle_distortion_correction
   (&optional __angle_distortion_correction)
   (if __angle_distortion_correction (setq _angle_distortion_correction __angle_distortion_correction)) _angle_distortion_correction)
  (:serialization-length
   ()
   (+
    ;; int8 _angle_distortion_correction
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _angle_distortion_correction
       (write-byte _angle_distortion_correction s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _angle_distortion_correction
     (setq _angle_distortion_correction (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _angle_distortion_correction 127) (setq _angle_distortion_correction (- _angle_distortion_correction 256)))
   ;;
   self)
  )

(defclass lslidar_ls_driver::angle_distortion_correctionResponse
  :super ros::object
  :slots (_result ))

(defmethod lslidar_ls_driver::angle_distortion_correctionResponse
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

(defclass lslidar_ls_driver::angle_distortion_correction
  :super ros::object
  :slots ())

(setf (get lslidar_ls_driver::angle_distortion_correction :md5sum-) "d983ffb854a179224eceb9c4385f0696")
(setf (get lslidar_ls_driver::angle_distortion_correction :datatype-) "lslidar_ls_driver/angle_distortion_correction")
(setf (get lslidar_ls_driver::angle_distortion_correction :request) lslidar_ls_driver::angle_distortion_correctionRequest)
(setf (get lslidar_ls_driver::angle_distortion_correction :response) lslidar_ls_driver::angle_distortion_correctionResponse)

(defmethod lslidar_ls_driver::angle_distortion_correctionRequest
  (:response () (instance lslidar_ls_driver::angle_distortion_correctionResponse :init)))

(setf (get lslidar_ls_driver::angle_distortion_correctionRequest :md5sum-) "d983ffb854a179224eceb9c4385f0696")
(setf (get lslidar_ls_driver::angle_distortion_correctionRequest :datatype-) "lslidar_ls_driver/angle_distortion_correctionRequest")
(setf (get lslidar_ls_driver::angle_distortion_correctionRequest :definition-)
      "int8 angle_distortion_correction
---
bool result

")

(setf (get lslidar_ls_driver::angle_distortion_correctionResponse :md5sum-) "d983ffb854a179224eceb9c4385f0696")
(setf (get lslidar_ls_driver::angle_distortion_correctionResponse :datatype-) "lslidar_ls_driver/angle_distortion_correctionResponse")
(setf (get lslidar_ls_driver::angle_distortion_correctionResponse :definition-)
      "int8 angle_distortion_correction
---
bool result

")



(provide :lslidar_ls_driver/angle_distortion_correction "d983ffb854a179224eceb9c4385f0696")


