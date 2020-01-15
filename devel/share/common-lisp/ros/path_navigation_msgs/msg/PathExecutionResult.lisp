; Auto-generated. Do not edit!


(cl:in-package path_navigation_msgs-msg)


;//! \htmlinclude PathExecutionResult.msg.html

(cl:defclass <PathExecutionResult> (roslisp-msg-protocol:ros-message)
  ((finalpose
    :reader finalpose
    :initarg :finalpose
    :type geometry_msgs-msg:PoseWithCovarianceStamped
    :initform (cl:make-instance 'geometry_msgs-msg:PoseWithCovarianceStamped)))
)

(cl:defclass PathExecutionResult (<PathExecutionResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PathExecutionResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PathExecutionResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name path_navigation_msgs-msg:<PathExecutionResult> is deprecated: use path_navigation_msgs-msg:PathExecutionResult instead.")))

(cl:ensure-generic-function 'finalpose-val :lambda-list '(m))
(cl:defmethod finalpose-val ((m <PathExecutionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader path_navigation_msgs-msg:finalpose-val is deprecated.  Use path_navigation_msgs-msg:finalpose instead.")
  (finalpose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PathExecutionResult>) ostream)
  "Serializes a message object of type '<PathExecutionResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'finalpose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PathExecutionResult>) istream)
  "Deserializes a message object of type '<PathExecutionResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'finalpose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PathExecutionResult>)))
  "Returns string type for a message object of type '<PathExecutionResult>"
  "path_navigation_msgs/PathExecutionResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PathExecutionResult)))
  "Returns string type for a message object of type 'PathExecutionResult"
  "path_navigation_msgs/PathExecutionResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PathExecutionResult>)))
  "Returns md5sum for a message object of type '<PathExecutionResult>"
  "6de191de1f3cf450e599cc31709760e6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PathExecutionResult)))
  "Returns md5sum for a message object of type 'PathExecutionResult"
  "6de191de1f3cf450e599cc31709760e6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PathExecutionResult>)))
  "Returns full string definition for message of type '<PathExecutionResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# The actual end pose when robot has navigated.~%geometry_msgs/PoseWithCovarianceStamped finalpose~%~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PathExecutionResult)))
  "Returns full string definition for message of type 'PathExecutionResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# The actual end pose when robot has navigated.~%geometry_msgs/PoseWithCovarianceStamped finalpose~%~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PathExecutionResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'finalpose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PathExecutionResult>))
  "Converts a ROS message object to a list"
  (cl:list 'PathExecutionResult
    (cl:cons ':finalpose (finalpose msg))
))
