// Generated by gencpp from file path_navigation_msgs/TransformPathExecutionAction.msg
// DO NOT EDIT!


#ifndef PATH_NAVIGATION_MSGS_MESSAGE_TRANSFORMPATHEXECUTIONACTION_H
#define PATH_NAVIGATION_MSGS_MESSAGE_TRANSFORMPATHEXECUTIONACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <path_navigation_msgs/TransformPathExecutionActionGoal.h>
#include <path_navigation_msgs/TransformPathExecutionActionResult.h>
#include <path_navigation_msgs/TransformPathExecutionActionFeedback.h>

namespace path_navigation_msgs
{
template <class ContainerAllocator>
struct TransformPathExecutionAction_
{
  typedef TransformPathExecutionAction_<ContainerAllocator> Type;

  TransformPathExecutionAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  TransformPathExecutionAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::path_navigation_msgs::TransformPathExecutionActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::path_navigation_msgs::TransformPathExecutionActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::path_navigation_msgs::TransformPathExecutionActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> const> ConstPtr;

}; // struct TransformPathExecutionAction_

typedef ::path_navigation_msgs::TransformPathExecutionAction_<std::allocator<void> > TransformPathExecutionAction;

typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionAction > TransformPathExecutionActionPtr;
typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionAction const> TransformPathExecutionActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace path_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'control_msgs': ['/opt/ros/kinetic/share/control_msgs/cmake/../msg'], 'path_navigation_msgs': ['/home/xu/Desktop/github_ws/devel/share/path_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dea92258dd5f657e3f6f77aa6f0e08ea";
  }

  static const char* value(const ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdea92258dd5f657eULL;
  static const uint64_t static_value2 = 0x3f6f77aa6f0e08eaULL;
};

template<class ContainerAllocator>
struct DataType< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "path_navigation_msgs/TransformPathExecutionAction";
  }

  static const char* value(const ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
TransformPathExecutionActionGoal action_goal\n\
TransformPathExecutionActionResult action_result\n\
TransformPathExecutionActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: path_navigation_msgs/TransformPathExecutionActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
TransformPathExecutionGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: path_navigation_msgs/TransformPathExecutionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Execute a series of geometry_msgs/Transform points instead of\n\
# using a nav_msgs/Path.\n\
 \n\
Header header\n\
\n\
geometry_msgs/Transform[] transforms\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: path_navigation_msgs/TransformPathExecutionActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
TransformPathExecutionResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: path_navigation_msgs/TransformPathExecutionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
# The actual end pose when the robot has finished navigating.\n\
geometry_msgs/PoseWithCovarianceStamped finalpose\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovarianceStamped\n\
# This expresses an estimated pose with a reference coordinate frame and timestamp\n\
\n\
Header header\n\
PoseWithCovariance pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: path_navigation_msgs/TransformPathExecutionActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
TransformPathExecutionFeedback feedback\n\
\n\
================================================================================\n\
MSG: path_navigation_msgs/TransformPathExecutionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransformPathExecutionAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::path_navigation_msgs::TransformPathExecutionAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::path_navigation_msgs::TransformPathExecutionActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::path_navigation_msgs::TransformPathExecutionActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::path_navigation_msgs::TransformPathExecutionActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PATH_NAVIGATION_MSGS_MESSAGE_TRANSFORMPATHEXECUTIONACTION_H
