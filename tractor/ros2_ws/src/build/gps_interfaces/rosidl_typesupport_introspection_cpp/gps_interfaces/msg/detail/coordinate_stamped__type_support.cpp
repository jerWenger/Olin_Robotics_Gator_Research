// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gps_interfaces/msg/detail/coordinate_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinateStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_interfaces::msg::CoordinateStamped(_init);
}

void CoordinateStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_interfaces::msg::CoordinateStamped *>(message_memory);
  typed_message->~CoordinateStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinateStamped_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::msg::CoordinateStamped, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "latitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::msg::CoordinateStamped, latitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "longitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces::msg::CoordinateStamped, longitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinateStamped_message_members = {
  "gps_interfaces::msg",  // message namespace
  "CoordinateStamped",  // message name
  3,  // number of fields
  sizeof(gps_interfaces::msg::CoordinateStamped),
  CoordinateStamped_message_member_array,  // message members
  CoordinateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinateStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinateStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinateStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gps_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_interfaces::msg::CoordinateStamped>()
{
  return &::gps_interfaces::msg::rosidl_typesupport_introspection_cpp::CoordinateStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_interfaces, msg, CoordinateStamped)() {
  return &::gps_interfaces::msg::rosidl_typesupport_introspection_cpp::CoordinateStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
