// Generated by gencpp from file industrial_msgs/TriState.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_MSGS_MESSAGE_TRISTATE_H
#define INDUSTRIAL_MSGS_MESSAGE_TRISTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace industrial_msgs
{
template <class ContainerAllocator>
struct TriState_
{
  typedef TriState_<ContainerAllocator> Type;

  TriState_()
    : val(0)  {
    }
  TriState_(const ContainerAllocator& _alloc)
    : val(0)  {
    }



   typedef int8_t _val_type;
  _val_type val;


    enum { UNKNOWN = -1 };
     enum { TRUE = 1 };
     enum { ON = 1 };
     enum { ENABLED = 1 };
     enum { HIGH = 1 };
     enum { CLOSED = 1 };
     enum { FALSE = 0 };
     enum { OFF = 0 };
     enum { DISABLED = 0 };
     enum { LOW = 0 };
     enum { OPEN = 0 };
 

  typedef boost::shared_ptr< ::industrial_msgs::TriState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_msgs::TriState_<ContainerAllocator> const> ConstPtr;

}; // struct TriState_

typedef ::industrial_msgs::TriState_<std::allocator<void> > TriState;

typedef boost::shared_ptr< ::industrial_msgs::TriState > TriStatePtr;
typedef boost::shared_ptr< ::industrial_msgs::TriState const> TriStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_msgs::TriState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_msgs::TriState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'industrial_msgs': ['/home/johnfaski/industrial_core_ws/src/industrial_msgs/msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::TriState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::TriState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::TriState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::TriState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::TriState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::TriState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_msgs::TriState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deb03829f3c2d0f1b647fa38d7087952";
  }

  static const char* value(const ::industrial_msgs::TriState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdeb03829f3c2d0f1ULL;
  static const uint64_t static_value2 = 0xb647fa38d7087952ULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_msgs::TriState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_msgs/TriState";
  }

  static const char* value(const ::industrial_msgs::TriState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_msgs::TriState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The tri-state captures boolean values with the additional state of unknown\n\
\n\
int8 val\n\
\n\
# enumerated values\n\
\n\
# Unknown or unavailable \n\
int8 UNKNOWN=-1  \n\
\n\
# High state                       \n\
int8 TRUE=1\n\
int8 ON=1\n\
int8 ENABLED=1\n\
int8 HIGH=1\n\
int8 CLOSED=1\n\
\n\
# Low state\n\
int8 FALSE=0\n\
int8 OFF=0\n\
int8 DISABLED=0\n\
int8 LOW=0\n\
int8 OPEN=0\n\
\n\
";
  }

  static const char* value(const ::industrial_msgs::TriState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_msgs::TriState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TriState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_msgs::TriState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_msgs::TriState_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    Printer<int8_t>::stream(s, indent + "  ", v.val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_MSGS_MESSAGE_TRISTATE_H
