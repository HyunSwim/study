// Generated by gencpp from file morai_msgs/SensorPosControl.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_SENSORPOSCONTROL_H
#define MORAI_MSGS_MESSAGE_SENSORPOSCONTROL_H


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
struct SensorPosControl_
{
  typedef SensorPosControl_<ContainerAllocator> Type;

  SensorPosControl_()
    : sensor_type()
    , sensor_index()
    , pose_x()
    , pose_y()
    , pose_z()
    , roll()
    , pitch()
    , yaw()  {
    }
  SensorPosControl_(const ContainerAllocator& _alloc)
    : sensor_type(_alloc)
    , sensor_index(_alloc)
    , pose_x(_alloc)
    , pose_y(_alloc)
    , pose_z(_alloc)
    , roll(_alloc)
    , pitch(_alloc)
    , yaw(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _sensor_type_type;
  _sensor_type_type sensor_type;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _sensor_index_type;
  _sensor_index_type sensor_index;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pose_x_type;
  _pose_x_type pose_x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pose_y_type;
  _pose_y_type pose_y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pose_z_type;
  _pose_z_type pose_z;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _roll_type;
  _roll_type roll;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pitch_type;
  _pitch_type pitch;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::morai_msgs::SensorPosControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::SensorPosControl_<ContainerAllocator> const> ConstPtr;

}; // struct SensorPosControl_

typedef ::morai_msgs::SensorPosControl_<std::allocator<void> > SensorPosControl;

typedef boost::shared_ptr< ::morai_msgs::SensorPosControl > SensorPosControlPtr;
typedef boost::shared_ptr< ::morai_msgs::SensorPosControl const> SensorPosControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::SensorPosControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::SensorPosControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::SensorPosControl_<ContainerAllocator1> & lhs, const ::morai_msgs::SensorPosControl_<ContainerAllocator2> & rhs)
{
  return lhs.sensor_type == rhs.sensor_type &&
    lhs.sensor_index == rhs.sensor_index &&
    lhs.pose_x == rhs.pose_x &&
    lhs.pose_y == rhs.pose_y &&
    lhs.pose_z == rhs.pose_z &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::SensorPosControl_<ContainerAllocator1> & lhs, const ::morai_msgs::SensorPosControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SensorPosControl_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SensorPosControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SensorPosControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c0a4bb9d4997ce436b313ba4dc41d53";
  }

  static const char* value(const ::morai_msgs::SensorPosControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c0a4bb9d4997ce4ULL;
  static const uint64_t static_value2 = 0x36b313ba4dc41d53ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/SensorPosControl";
  }

  static const char* value(const ::morai_msgs::SensorPosControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] sensor_type\n"
"\n"
"int16[] sensor_index\n"
"\n"
"float32[] pose_x\n"
"float32[] pose_y\n"
"float32[] pose_z\n"
"float32[] roll\n"
"float32[] pitch\n"
"float32[] yaw\n"
"\n"
;
  }

  static const char* value(const ::morai_msgs::SensorPosControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensor_type);
      stream.next(m.sensor_index);
      stream.next(m.pose_x);
      stream.next(m.pose_y);
      stream.next(m.pose_z);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorPosControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::SensorPosControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::SensorPosControl_<ContainerAllocator>& v)
  {
    s << indent << "sensor_type[]" << std::endl;
    for (size_t i = 0; i < v.sensor_type.size(); ++i)
    {
      s << indent << "  sensor_type[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sensor_type[i]);
    }
    s << indent << "sensor_index[]" << std::endl;
    for (size_t i = 0; i < v.sensor_index.size(); ++i)
    {
      s << indent << "  sensor_index[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.sensor_index[i]);
    }
    s << indent << "pose_x[]" << std::endl;
    for (size_t i = 0; i < v.pose_x.size(); ++i)
    {
      s << indent << "  pose_x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pose_x[i]);
    }
    s << indent << "pose_y[]" << std::endl;
    for (size_t i = 0; i < v.pose_y.size(); ++i)
    {
      s << indent << "  pose_y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pose_y[i]);
    }
    s << indent << "pose_z[]" << std::endl;
    for (size_t i = 0; i < v.pose_z.size(); ++i)
    {
      s << indent << "  pose_z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pose_z[i]);
    }
    s << indent << "roll[]" << std::endl;
    for (size_t i = 0; i < v.roll.size(); ++i)
    {
      s << indent << "  roll[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.roll[i]);
    }
    s << indent << "pitch[]" << std::endl;
    for (size_t i = 0; i < v.pitch.size(); ++i)
    {
      s << indent << "  pitch[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pitch[i]);
    }
    s << indent << "yaw[]" << std::endl;
    for (size_t i = 0; i < v.yaw.size(); ++i)
    {
      s << indent << "  yaw[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.yaw[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_SENSORPOSCONTROL_H
