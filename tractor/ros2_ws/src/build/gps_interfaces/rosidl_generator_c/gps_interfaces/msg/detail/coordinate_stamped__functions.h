// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__FUNCTIONS_H_
#define GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gps_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gps_interfaces/msg/detail/coordinate_stamped__struct.h"

/// Initialize msg/CoordinateStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_interfaces__msg__CoordinateStamped
 * )) before or use
 * gps_interfaces__msg__CoordinateStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__msg__CoordinateStamped__init(gps_interfaces__msg__CoordinateStamped * msg);

/// Finalize msg/CoordinateStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__msg__CoordinateStamped__fini(gps_interfaces__msg__CoordinateStamped * msg);

/// Create msg/CoordinateStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_interfaces__msg__CoordinateStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__msg__CoordinateStamped *
gps_interfaces__msg__CoordinateStamped__create();

/// Destroy msg/CoordinateStamped message.
/**
 * It calls
 * gps_interfaces__msg__CoordinateStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__msg__CoordinateStamped__destroy(gps_interfaces__msg__CoordinateStamped * msg);

/// Check for msg/CoordinateStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__msg__CoordinateStamped__are_equal(const gps_interfaces__msg__CoordinateStamped * lhs, const gps_interfaces__msg__CoordinateStamped * rhs);

/// Copy a msg/CoordinateStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__msg__CoordinateStamped__copy(
  const gps_interfaces__msg__CoordinateStamped * input,
  gps_interfaces__msg__CoordinateStamped * output);

/// Initialize array of msg/CoordinateStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_interfaces__msg__CoordinateStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__msg__CoordinateStamped__Sequence__init(gps_interfaces__msg__CoordinateStamped__Sequence * array, size_t size);

/// Finalize array of msg/CoordinateStamped messages.
/**
 * It calls
 * gps_interfaces__msg__CoordinateStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__msg__CoordinateStamped__Sequence__fini(gps_interfaces__msg__CoordinateStamped__Sequence * array);

/// Create array of msg/CoordinateStamped messages.
/**
 * It allocates the memory for the array and calls
 * gps_interfaces__msg__CoordinateStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
gps_interfaces__msg__CoordinateStamped__Sequence *
gps_interfaces__msg__CoordinateStamped__Sequence__create(size_t size);

/// Destroy array of msg/CoordinateStamped messages.
/**
 * It calls
 * gps_interfaces__msg__CoordinateStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
void
gps_interfaces__msg__CoordinateStamped__Sequence__destroy(gps_interfaces__msg__CoordinateStamped__Sequence * array);

/// Check for msg/CoordinateStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__msg__CoordinateStamped__Sequence__are_equal(const gps_interfaces__msg__CoordinateStamped__Sequence * lhs, const gps_interfaces__msg__CoordinateStamped__Sequence * rhs);

/// Copy an array of msg/CoordinateStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_interfaces
bool
gps_interfaces__msg__CoordinateStamped__Sequence__copy(
  const gps_interfaces__msg__CoordinateStamped__Sequence * input,
  gps_interfaces__msg__CoordinateStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__FUNCTIONS_H_
