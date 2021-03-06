// Generated by gencpp from file table_simulator/Joints.msg
// DO NOT EDIT!


#ifndef TABLE_SIMULATOR_MESSAGE_JOINTS_H
#define TABLE_SIMULATOR_MESSAGE_JOINTS_H


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
struct Joints_
{
  typedef Joints_<ContainerAllocator> Type;

  Joints_()
    : j1(0.0)
    , j2(0.0)
    , j3(0.0)
    , j4(0.0)
    , j5(0.0)
    , j6(0.0)
    , j7(0.0)
    , j8(0.0)
    , j9(0.0)
    , j10(0.0)
    , j11(0.0)
    , j12(0.0)  {
    }
  Joints_(const ContainerAllocator& _alloc)
    : j1(0.0)
    , j2(0.0)
    , j3(0.0)
    , j4(0.0)
    , j5(0.0)
    , j6(0.0)
    , j7(0.0)
    , j8(0.0)
    , j9(0.0)
    , j10(0.0)
    , j11(0.0)
    , j12(0.0)  {
  (void)_alloc;
    }



   typedef float _j1_type;
  _j1_type j1;

   typedef float _j2_type;
  _j2_type j2;

   typedef float _j3_type;
  _j3_type j3;

   typedef float _j4_type;
  _j4_type j4;

   typedef float _j5_type;
  _j5_type j5;

   typedef float _j6_type;
  _j6_type j6;

   typedef float _j7_type;
  _j7_type j7;

   typedef float _j8_type;
  _j8_type j8;

   typedef float _j9_type;
  _j9_type j9;

   typedef float _j10_type;
  _j10_type j10;

   typedef float _j11_type;
  _j11_type j11;

   typedef float _j12_type;
  _j12_type j12;




  typedef boost::shared_ptr< ::table_simulator::Joints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::table_simulator::Joints_<ContainerAllocator> const> ConstPtr;

}; // struct Joints_

typedef ::table_simulator::Joints_<std::allocator<void> > Joints;

typedef boost::shared_ptr< ::table_simulator::Joints > JointsPtr;
typedef boost::shared_ptr< ::table_simulator::Joints const> JointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::table_simulator::Joints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::table_simulator::Joints_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::table_simulator::Joints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::table_simulator::Joints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_simulator::Joints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_simulator::Joints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_simulator::Joints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_simulator::Joints_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::table_simulator::Joints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "56bb714ad6972bde5d4ce4ba5c11d2d1";
  }

  static const char* value(const ::table_simulator::Joints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x56bb714ad6972bdeULL;
  static const uint64_t static_value2 = 0x5d4ce4ba5c11d2d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::table_simulator::Joints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "table_simulator/Joints";
  }

  static const char* value(const ::table_simulator::Joints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::table_simulator::Joints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 j1\n\
float32 j2\n\
float32 j3\n\
float32 j4\n\
float32 j5\n\
float32 j6\n\
float32 j7\n\
float32 j8\n\
float32 j9\n\
float32 j10\n\
float32 j11\n\
float32 j12\n\
";
  }

  static const char* value(const ::table_simulator::Joints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::table_simulator::Joints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.j1);
      stream.next(m.j2);
      stream.next(m.j3);
      stream.next(m.j4);
      stream.next(m.j5);
      stream.next(m.j6);
      stream.next(m.j7);
      stream.next(m.j8);
      stream.next(m.j9);
      stream.next(m.j10);
      stream.next(m.j11);
      stream.next(m.j12);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Joints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::table_simulator::Joints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::table_simulator::Joints_<ContainerAllocator>& v)
  {
    s << indent << "j1: ";
    Printer<float>::stream(s, indent + "  ", v.j1);
    s << indent << "j2: ";
    Printer<float>::stream(s, indent + "  ", v.j2);
    s << indent << "j3: ";
    Printer<float>::stream(s, indent + "  ", v.j3);
    s << indent << "j4: ";
    Printer<float>::stream(s, indent + "  ", v.j4);
    s << indent << "j5: ";
    Printer<float>::stream(s, indent + "  ", v.j5);
    s << indent << "j6: ";
    Printer<float>::stream(s, indent + "  ", v.j6);
    s << indent << "j7: ";
    Printer<float>::stream(s, indent + "  ", v.j7);
    s << indent << "j8: ";
    Printer<float>::stream(s, indent + "  ", v.j8);
    s << indent << "j9: ";
    Printer<float>::stream(s, indent + "  ", v.j9);
    s << indent << "j10: ";
    Printer<float>::stream(s, indent + "  ", v.j10);
    s << indent << "j11: ";
    Printer<float>::stream(s, indent + "  ", v.j11);
    s << indent << "j12: ";
    Printer<float>::stream(s, indent + "  ", v.j12);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TABLE_SIMULATOR_MESSAGE_JOINTS_H
