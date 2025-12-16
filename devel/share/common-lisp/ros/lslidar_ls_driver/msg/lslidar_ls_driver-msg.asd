
(cl:in-package :asdf)

(defsystem "lslidar_ls_driver-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "LslidarLsPacket" :depends-on ("_package_LslidarLsPacket"))
    (:file "_package_LslidarLsPacket" :depends-on ("_package"))
  ))