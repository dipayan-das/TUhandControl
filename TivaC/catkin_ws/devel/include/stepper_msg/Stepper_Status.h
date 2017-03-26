// Generated by gencpp from file stepper_msg/Stepper_Status.msg
// DO NOT EDIT!


#ifndef STEPPER_MSG_MESSAGE_STEPPER_STATUS_H
#define STEPPER_MSG_MESSAGE_STEPPER_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace stepper_msg
{
template <class ContainerAllocator>
struct Stepper_Status_
{
  typedef Stepper_Status_<ContainerAllocator> Type;

  Stepper_Status_()
    : position_steps(0)
    , speed_steps_per_second(0)
    , direction_forward(false)  {
    }
  Stepper_Status_(const ContainerAllocator& _alloc)
    : position_steps(0)
    , speed_steps_per_second(0)
    , direction_forward(false)  {
  (void)_alloc;
    }



   typedef uint32_t _position_steps_type;
  _position_steps_type position_steps;

   typedef uint32_t _speed_steps_per_second_type;
  _speed_steps_per_second_type speed_steps_per_second;

   typedef uint8_t _direction_forward_type;
  _direction_forward_type direction_forward;




  typedef boost::shared_ptr< ::stepper_msg::Stepper_Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stepper_msg::Stepper_Status_<ContainerAllocator> const> ConstPtr;

}; // struct Stepper_Status_

typedef ::stepper_msg::Stepper_Status_<std::allocator<void> > Stepper_Status;

typedef boost::shared_ptr< ::stepper_msg::Stepper_Status > Stepper_StatusPtr;
typedef boost::shared_ptr< ::stepper_msg::Stepper_Status const> Stepper_StatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stepper_msg::Stepper_Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stepper_msg::Stepper_Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stepper_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'stepper_msg': ['/home/wesley/Sources/TUhandControl/TivaC/catkin_ws/src/stepper_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stepper_msg::Stepper_Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stepper_msg::Stepper_Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stepper_msg::Stepper_Status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a08b832803b195f0f005fead32aedac";
  }

  static const char* value(const ::stepper_msg::Stepper_Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a08b832803b195fULL;
  static const uint64_t static_value2 = 0x0f005fead32aedacULL;
};

template<class ContainerAllocator>
struct DataType< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stepper_msg/Stepper_Status";
  }

  static const char* value(const ::stepper_msg::Stepper_Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 position_steps\n\
uint32 speed_steps_per_second\n\
bool direction_forward\n\
";
  }

  static const char* value(const ::stepper_msg::Stepper_Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position_steps);
      stream.next(m.speed_steps_per_second);
      stream.next(m.direction_forward);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Stepper_Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stepper_msg::Stepper_Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stepper_msg::Stepper_Status_<ContainerAllocator>& v)
  {
    s << indent << "position_steps: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.position_steps);
    s << indent << "speed_steps_per_second: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.speed_steps_per_second);
    s << indent << "direction_forward: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.direction_forward);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STEPPER_MSG_MESSAGE_STEPPER_STATUS_H
