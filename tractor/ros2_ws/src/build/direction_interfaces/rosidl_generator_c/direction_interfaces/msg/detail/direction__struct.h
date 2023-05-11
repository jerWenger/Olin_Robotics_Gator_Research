// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from direction_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_H_
#define DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Direction in the package direction_interfaces.
typedef struct direction_interfaces__msg__Direction
{
  rosidl_runtime_c__String direction;
  double left_weight;
  double center_weight;
  double right_weight;
} direction_interfaces__msg__Direction;

// Struct for a sequence of direction_interfaces__msg__Direction.
typedef struct direction_interfaces__msg__Direction__Sequence
{
  direction_interfaces__msg__Direction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} direction_interfaces__msg__Direction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_H_
