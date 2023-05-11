// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__STRUCT_H_
#define GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CoordinateStamped in the package gps_interfaces.
typedef struct gps_interfaces__msg__CoordinateStamped
{
  double timestamp;
  double latitude;
  double longitude;
} gps_interfaces__msg__CoordinateStamped;

// Struct for a sequence of gps_interfaces__msg__CoordinateStamped.
typedef struct gps_interfaces__msg__CoordinateStamped__Sequence
{
  gps_interfaces__msg__CoordinateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_interfaces__msg__CoordinateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__STRUCT_H_
