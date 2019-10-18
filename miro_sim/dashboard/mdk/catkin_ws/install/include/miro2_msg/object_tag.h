// Generated by gencpp from file miro2_msg/object_tag.msg
// DO NOT EDIT!


#ifndef MIRO2_MSG_MESSAGE_OBJECT_TAG_H
#define MIRO2_MSG_MESSAGE_OBJECT_TAG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace miro2_msg
{
template <class ContainerAllocator>
struct object_tag_
{
  typedef object_tag_<ContainerAllocator> Type;

  object_tag_()
    : conf(0.0)
    , id(0)
    , centre()
    , corners()  {
      centre.assign(0.0);

      corners.assign(0.0);
  }
  object_tag_(const ContainerAllocator& _alloc)
    : conf(0.0)
    , id(0)
    , centre()
    , corners()  {
  (void)_alloc;
      centre.assign(0.0);

      corners.assign(0.0);
  }



   typedef float _conf_type;
  _conf_type conf;

   typedef int32_t _id_type;
  _id_type id;

   typedef boost::array<float, 2>  _centre_type;
  _centre_type centre;

   typedef boost::array<float, 8>  _corners_type;
  _corners_type corners;





  typedef boost::shared_ptr< ::miro2_msg::object_tag_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::miro2_msg::object_tag_<ContainerAllocator> const> ConstPtr;

}; // struct object_tag_

typedef ::miro2_msg::object_tag_<std::allocator<void> > object_tag;

typedef boost::shared_ptr< ::miro2_msg::object_tag > object_tagPtr;
typedef boost::shared_ptr< ::miro2_msg::object_tag const> object_tagConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::miro2_msg::object_tag_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::miro2_msg::object_tag_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace miro2_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'miro2_msg': ['/tmp/miro2/release/190828/mdk/catkin_ws/src/miro2_msg/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::miro2_msg::object_tag_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::miro2_msg::object_tag_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro2_msg::object_tag_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro2_msg::object_tag_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro2_msg::object_tag_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro2_msg::object_tag_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::miro2_msg::object_tag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "acca63b10aeb84130dcb05309da8749a";
  }

  static const char* value(const ::miro2_msg::object_tag_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xacca63b10aeb8413ULL;
  static const uint64_t static_value2 = 0x0dcb05309da8749aULL;
};

template<class ContainerAllocator>
struct DataType< ::miro2_msg::object_tag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "miro2_msg/object_tag";
  }

  static const char* value(const ::miro2_msg::object_tag_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::miro2_msg::object_tag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#	@section COPYRIGHT\n\
#	Copyright (C) 2019 Consequential Robotics Ltd\n\
#	\n\
#	@section AUTHOR\n\
#	Consequential Robotics http://consequentialrobotics.com\n\
#	\n\
#	@section LICENSE\n\
#	For a full copy of the license agreement, and a complete\n\
#	definition of \"The Software\", see LICENSE in the MDK root\n\
#	directory.\n\
#	\n\
#	Subject to the terms of this Agreement, Consequential\n\
#	Robotics grants to you a limited, non-exclusive, non-\n\
#	transferable license, without right to sub-license, to use\n\
#	\"The Software\" in accordance with this Agreement and any\n\
#	other written agreement with Consequential Robotics.\n\
#	Consequential Robotics does not transfer the title of \"The\n\
#	Software\" to you; the license granted to you is not a sale.\n\
#	This agreement is a binding legal agreement between\n\
#	Consequential Robotics and the purchasers or users of \"The\n\
#	Software\".\n\
#	\n\
#	THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY\n\
#	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE\n\
#	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR\n\
#	PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS\n\
#	OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR\n\
#	OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR\n\
#	OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE\n\
#	SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n\
#	\n\
\n\
float32 conf\n\
int32 id\n\
float32[2] centre\n\
float32[8] corners\n\
\n\
";
  }

  static const char* value(const ::miro2_msg::object_tag_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::miro2_msg::object_tag_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.conf);
      stream.next(m.id);
      stream.next(m.centre);
      stream.next(m.corners);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct object_tag_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::miro2_msg::object_tag_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::miro2_msg::object_tag_<ContainerAllocator>& v)
  {
    s << indent << "conf: ";
    Printer<float>::stream(s, indent + "  ", v.conf);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "centre[]" << std::endl;
    for (size_t i = 0; i < v.centre.size(); ++i)
    {
      s << indent << "  centre[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.centre[i]);
    }
    s << indent << "corners[]" << std::endl;
    for (size_t i = 0; i < v.corners.size(); ++i)
    {
      s << indent << "  corners[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.corners[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIRO2_MSG_MESSAGE_OBJECT_TAG_H
