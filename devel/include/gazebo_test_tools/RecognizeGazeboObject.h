// Generated by gencpp from file gazebo_test_tools/RecognizeGazeboObject.msg
// DO NOT EDIT!


#ifndef GAZEBO_TEST_TOOLS_MESSAGE_RECOGNIZEGAZEBOOBJECT_H
#define GAZEBO_TEST_TOOLS_MESSAGE_RECOGNIZEGAZEBOOBJECT_H

#include <ros/service_traits.h>


#include <gazebo_test_tools/RecognizeGazeboObjectRequest.h>
#include <gazebo_test_tools/RecognizeGazeboObjectResponse.h>


namespace gazebo_test_tools
{

struct RecognizeGazeboObject
{

typedef RecognizeGazeboObjectRequest Request;
typedef RecognizeGazeboObjectResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RecognizeGazeboObject
} // namespace gazebo_test_tools


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gazebo_test_tools::RecognizeGazeboObject > {
  static const char* value()
  {
    return "c151db741a1313b78299ced3566a6a06";
  }

  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObject&) { return value(); }
};

template<>
struct DataType< ::gazebo_test_tools::RecognizeGazeboObject > {
  static const char* value()
  {
    return "gazebo_test_tools/RecognizeGazeboObject";
  }

  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObject&) { return value(); }
};


// service_traits::MD5Sum< ::gazebo_test_tools::RecognizeGazeboObjectRequest> should match 
// service_traits::MD5Sum< ::gazebo_test_tools::RecognizeGazeboObject > 
template<>
struct MD5Sum< ::gazebo_test_tools::RecognizeGazeboObjectRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_test_tools::RecognizeGazeboObject >::value();
  }
  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObjectRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_test_tools::RecognizeGazeboObjectRequest> should match 
// service_traits::DataType< ::gazebo_test_tools::RecognizeGazeboObject > 
template<>
struct DataType< ::gazebo_test_tools::RecognizeGazeboObjectRequest>
{
  static const char* value()
  {
    return DataType< ::gazebo_test_tools::RecognizeGazeboObject >::value();
  }
  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObjectRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gazebo_test_tools::RecognizeGazeboObjectResponse> should match 
// service_traits::MD5Sum< ::gazebo_test_tools::RecognizeGazeboObject > 
template<>
struct MD5Sum< ::gazebo_test_tools::RecognizeGazeboObjectResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_test_tools::RecognizeGazeboObject >::value();
  }
  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObjectResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_test_tools::RecognizeGazeboObjectResponse> should match 
// service_traits::DataType< ::gazebo_test_tools::RecognizeGazeboObject > 
template<>
struct DataType< ::gazebo_test_tools::RecognizeGazeboObjectResponse>
{
  static const char* value()
  {
    return DataType< ::gazebo_test_tools::RecognizeGazeboObject >::value();
  }
  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObjectResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_TEST_TOOLS_MESSAGE_RECOGNIZEGAZEBOOBJECT_H
