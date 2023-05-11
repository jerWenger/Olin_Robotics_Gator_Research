// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gps_interfaces/msg/detail/coordinate_stamped__rosidl_typesupport_introspection_c.h"
#include "gps_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gps_interfaces/msg/detail/coordinate_stamped__functions.h"
#include "gps_interfaces/msg/detail/coordinate_stamped__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_interfaces__msg__CoordinateStamped__init(message_memory);
}

void gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_fini_function(void * message_memory)
{
  gps_interfaces__msg__CoordinateStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__msg__CoordinateStamped, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__msg__CoordinateStamped, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_interfaces__msg__CoordinateStamped, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_members = {
  "gps_interfaces__msg",  // message namespace
  "CoordinateStamped",  // message name
  3,  // number of fields
  sizeof(gps_interfaces__msg__CoordinateStamped),
  gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_member_array,  // message members
  gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_type_support_handle = {
  0,
  &gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_interfaces, msg, CoordinateStamped)() {
  if (!gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_type_support_handle.typesupport_identifier) {
    gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gps_interfaces__msg__CoordinateStamped__rosidl_typesupport_introspection_c__CoordinateStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
