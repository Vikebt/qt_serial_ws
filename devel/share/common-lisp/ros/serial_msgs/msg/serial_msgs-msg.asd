
(cl:in-package :asdf)

(defsystem "serial_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "air_pressure" :depends-on ("_package_air_pressure"))
    (:file "_package_air_pressure" :depends-on ("_package"))
  ))