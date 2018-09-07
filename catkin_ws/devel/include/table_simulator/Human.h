// Generated by gencpp from file table_simulator/Human.msg
// DO NOT EDIT!


#ifndef TABLE_SIMULATOR_MESSAGE_HUMAN_H
#define TABLE_SIMULATOR_MESSAGE_HUMAN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace table_simulator
{
template <class ContainerAllocator>
struct Human_
{
  typedef Human_<ContainerAllocator> Type;

  Human_()
    : activateRobot(0)
    , humanIsReady(0)  {
    }
  Human_(const ContainerAllocator& _alloc)
    : activateRobot(0)
    , humanIsReady(0)  {
  (void)_alloc;
    }



   typedef uint8_t _activateRobot_type;
  _activateRobot_type activateRobot;

   typedef uint8_t _humanIsReady_type;
  _humanIsReady_type humanIsReady;




  typedef boost::shared_ptr< ::table_simulator::Human_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::table_simulator::Human_<ContainerAllocator> const> ConstPtr;

}; // struct Human_

typedef ::table_simulator::Human_<std::allocator<void> > Human;

typedef boost::shared_ptr< ::table_simulator::Human > HumanPtr;
typedef boost::shared_ptr< ::table_simulator::Human const> HumanConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::table_simulator::Human_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::table_simulator::Human_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace table_simulator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'table_simulator': ['/home/harrison/catkin_ws/src/table_simulator/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::table_simulator::Human_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::table_simulator::Human_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_simulator::Human_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_simulator::Human_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_simulator::Human_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_simulator::Human_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::table_simulator::Human_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23987e0baa57fd119547d559cbd31dd5";
  }

  static const char* value(const ::table_simulator::Human_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23987e0baa57fd11ULL;
  static const uint64_t static_value2 = 0x9547d559cbd31dd5ULL;
};

template<class ContainerAllocator>
struct DataType< ::table_simulator::Human_<ContainerAllocator> >
{
  static const char* value()
  {
    return "table_simulator/Human";
  }

  static const char* value(const ::table_simulator::Human_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::table_simulator::Human_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 activateRobot\n\
uint8 humanIsReady\n\
\n\
";
  }

  static const char* value(const ::table_simulator::Human_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::table_simulator::Human_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.activateRobot);
      stream.next(m.humanIsReady);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Human_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::table_simulator::Human_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::table_simulator::Human_<ContainerAllocator>& v)
  {
    s << indent << "activateRobot: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.activateRobot);
    s << indent << "humanIsReady: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.humanIsReady);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TABLE_SIMULATOR_MESSAGE_HUMAN_H
