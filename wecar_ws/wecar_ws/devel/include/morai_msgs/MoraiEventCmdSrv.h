// Generated by gencpp from file morai_msgs/MoraiEventCmdSrv.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_MORAIEVENTCMDSRV_H
#define MORAI_MSGS_MESSAGE_MORAIEVENTCMDSRV_H

#include <ros/service_traits.h>


#include <morai_msgs/MoraiEventCmdSrvRequest.h>
#include <morai_msgs/MoraiEventCmdSrvResponse.h>


namespace morai_msgs
{

struct MoraiEventCmdSrv
{

typedef MoraiEventCmdSrvRequest Request;
typedef MoraiEventCmdSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoraiEventCmdSrv
} // namespace morai_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::morai_msgs::MoraiEventCmdSrv > {
  static const char* value()
  {
    return "dcadae445bbe9542afe1ed2c96290a81";
  }

  static const char* value(const ::morai_msgs::MoraiEventCmdSrv&) { return value(); }
};

template<>
struct DataType< ::morai_msgs::MoraiEventCmdSrv > {
  static const char* value()
  {
    return "morai_msgs/MoraiEventCmdSrv";
  }

  static const char* value(const ::morai_msgs::MoraiEventCmdSrv&) { return value(); }
};


// service_traits::MD5Sum< ::morai_msgs::MoraiEventCmdSrvRequest> should match
// service_traits::MD5Sum< ::morai_msgs::MoraiEventCmdSrv >
template<>
struct MD5Sum< ::morai_msgs::MoraiEventCmdSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::morai_msgs::MoraiEventCmdSrv >::value();
  }
  static const char* value(const ::morai_msgs::MoraiEventCmdSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::morai_msgs::MoraiEventCmdSrvRequest> should match
// service_traits::DataType< ::morai_msgs::MoraiEventCmdSrv >
template<>
struct DataType< ::morai_msgs::MoraiEventCmdSrvRequest>
{
  static const char* value()
  {
    return DataType< ::morai_msgs::MoraiEventCmdSrv >::value();
  }
  static const char* value(const ::morai_msgs::MoraiEventCmdSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::morai_msgs::MoraiEventCmdSrvResponse> should match
// service_traits::MD5Sum< ::morai_msgs::MoraiEventCmdSrv >
template<>
struct MD5Sum< ::morai_msgs::MoraiEventCmdSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::morai_msgs::MoraiEventCmdSrv >::value();
  }
  static const char* value(const ::morai_msgs::MoraiEventCmdSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::morai_msgs::MoraiEventCmdSrvResponse> should match
// service_traits::DataType< ::morai_msgs::MoraiEventCmdSrv >
template<>
struct DataType< ::morai_msgs::MoraiEventCmdSrvResponse>
{
  static const char* value()
  {
    return DataType< ::morai_msgs::MoraiEventCmdSrv >::value();
  }
  static const char* value(const ::morai_msgs::MoraiEventCmdSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_MORAIEVENTCMDSRV_H