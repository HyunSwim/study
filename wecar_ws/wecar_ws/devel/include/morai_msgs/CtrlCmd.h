// Generated by gencpp from file morai_msgs/CtrlCmd.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_CTRLCMD_H
#define MORAI_MSGS_MESSAGE_CTRLCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace morai_msgs
{
template <class ContainerAllocator>
struct CtrlCmd_
{
  typedef CtrlCmd_<ContainerAllocator> Type;

  CtrlCmd_()
    : longlCmdType(0)
    , accel(0.0)
    , brake(0.0)
    , steering(0.0)
    , velocity(0.0)
    , acceleration(0.0)  {
    }
  CtrlCmd_(const ContainerAllocator& _alloc)
    : longlCmdType(0)
    , accel(0.0)
    , brake(0.0)
    , steering(0.0)
    , velocity(0.0)
    , acceleration(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _longlCmdType_type;
  _longlCmdType_type longlCmdType;

   typedef double _accel_type;
  _accel_type accel;

   typedef double _brake_type;
  _brake_type brake;

   typedef double _steering_type;
  _steering_type steering;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef double _acceleration_type;
  _acceleration_type acceleration;





  typedef boost::shared_ptr< ::morai_msgs::CtrlCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::CtrlCmd_<ContainerAllocator> const> ConstPtr;

}; // struct CtrlCmd_

typedef ::morai_msgs::CtrlCmd_<std::allocator<void> > CtrlCmd;

typedef boost::shared_ptr< ::morai_msgs::CtrlCmd > CtrlCmdPtr;
typedef boost::shared_ptr< ::morai_msgs::CtrlCmd const> CtrlCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::CtrlCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::CtrlCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::CtrlCmd_<ContainerAllocator1> & lhs, const ::morai_msgs::CtrlCmd_<ContainerAllocator2> & rhs)
{
  return lhs.longlCmdType == rhs.longlCmdType &&
    lhs.accel == rhs.accel &&
    lhs.brake == rhs.brake &&
    lhs.steering == rhs.steering &&
    lhs.velocity == rhs.velocity &&
    lhs.acceleration == rhs.acceleration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::CtrlCmd_<ContainerAllocator1> & lhs, const ::morai_msgs::CtrlCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::CtrlCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::CtrlCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::CtrlCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "718f1a493f1a335da59a19f673d82bb4";
  }

  static const char* value(const ::morai_msgs::CtrlCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x718f1a493f1a335dULL;
  static const uint64_t static_value2 = 0xa59a19f673d82bb4ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/CtrlCmd";
  }

  static const char* value(const ::morai_msgs::CtrlCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 longlCmdType\n"
"\n"
"float64 accel\n"
"float64 brake\n"
"float64 steering\n"
"\n"
"float64 velocity\n"
"float64 acceleration\n"
"\n"
;
  }

  static const char* value(const ::morai_msgs::CtrlCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.longlCmdType);
      stream.next(m.accel);
      stream.next(m.brake);
      stream.next(m.steering);
      stream.next(m.velocity);
      stream.next(m.acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CtrlCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::CtrlCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::CtrlCmd_<ContainerAllocator>& v)
  {
    s << indent << "longlCmdType: ";
    Printer<int32_t>::stream(s, indent + "  ", v.longlCmdType);
    s << indent << "accel: ";
    Printer<double>::stream(s, indent + "  ", v.accel);
    s << indent << "brake: ";
    Printer<double>::stream(s, indent + "  ", v.brake);
    s << indent << "steering: ";
    Printer<double>::stream(s, indent + "  ", v.steering);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_CTRLCMD_H