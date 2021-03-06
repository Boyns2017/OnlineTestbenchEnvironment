// Generated by gencpp from file table_simulator/Sensors.msg
// DO NOT EDIT!


#ifndef TABLE_SIMULATOR_MESSAGE_SENSORS_H
#define TABLE_SIMULATOR_MESSAGE_SENSORS_H


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
struct Sensors_
{
  typedef Sensors_<ContainerAllocator> Type;

  Sensors_()
    : gaze(0.0)
    , location(0.0)
    , pressure(0.0)  {
    }
  Sensors_(const ContainerAllocator& _alloc)
    : gaze(0.0)
    , location(0.0)
    , pressure(0.0)  {
  (void)_alloc;
    }



   typedef float _gaze_type;
  _gaze_type gaze;

   typedef float _location_type;
  _location_type location;

   typedef float _pressure_type;
  _pressure_type pressure;




  typedef boost::shared_ptr< ::table_simulator::Sensors_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::table_simulator::Sensors_<ContainerAllocator> const> ConstPtr;

}; // struct Sensors_

typedef ::table_simulator::Sensors_<std::allocator<void> > Sensors;

typedef boost::shared_ptr< ::table_simulator::Sensors > SensorsPtr;
typedef boost::shared_ptr< ::table_simulator::Sensors const> SensorsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::table_simulator::Sensors_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::table_simulator::Sensors_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::table_simulator::Sensors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::table_simulator::Sensors_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_simulator::Sensors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_simulator::Sensors_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_simulator::Sensors_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_simulator::Sensors_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::table_simulator::Sensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d86d90edfb309afce5a122c5fd284811";
  }

  static const char* value(const ::table_simulator::Sensors_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd86d90edfb309afcULL;
  static const uint64_t static_value2 = 0xe5a122c5fd284811ULL;
};

template<class ContainerAllocator>
struct DataType< ::table_simulator::Sensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "table_simulator/Sensors";
  }

  static const char* value(const ::table_simulator::Sensors_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::table_simulator::Sensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 gaze\n\
float32 location\n\
float32 pressure\n\
\n\
";
  }

  static const char* value(const ::table_simulator::Sensors_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::table_simulator::Sensors_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gaze);
      stream.next(m.location);
      stream.next(m.pressure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Sensors_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::table_simulator::Sensors_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::table_simulator::Sensors_<ContainerAllocator>& v)
  {
    s << indent << "gaze: ";
    Printer<float>::stream(s, indent + "  ", v.gaze);
    s << indent << "location: ";
    Printer<float>::stream(s, indent + "  ", v.location);
    s << indent << "pressure: ";
    Printer<float>::stream(s, indent + "  ", v.pressure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TABLE_SIMULATOR_MESSAGE_SENSORS_H
