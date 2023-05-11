// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from direction_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__FUNCTIONS_H_
#define DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "direction_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "direction_interfaces/msg/detail/direction__struct.h"

/// Initialize msg/Direction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * direction_interfaces__msg__Direction
 * )) before or use
 * direction_interfaces__msg__Direction__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
bool
direction_interfaces__msg__Direction__init(direction_interfaces__msg__Direction * msg);

/// Finalize msg/Direction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
void
direction_interfaces__msg__Direction__fini(direction_interfaces__msg__Direction * msg);

/// Create msg/Direction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * direction_interfaces__msg__Direction__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
direction_interfaces__msg__Direction *
direction_interfaces__msg__Direction__create();

/// Destroy msg/Direction message.
/**
 * It calls
 * direction_interfaces__msg__Direction__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
void
direction_interfaces__msg__Direction__destroy(direction_interfaces__msg__Direction * msg);

/// Check for msg/Direction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
bool
direction_interfaces__msg__Direction__are_equal(const direction_interfaces__msg__Direction * lhs, const direction_interfaces__msg__Direction * rhs);

/// Copy a msg/Direction message.
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
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
bool
direction_interfaces__msg__Direction__copy(
  const direction_interfaces__msg__Direction * input,
  direction_interfaces__msg__Direction * output);

/// Initialize array of msg/Direction messages.
/**
 * It allocates the memory for the number of elements and calls
 * direction_interfaces__msg__Direction__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
bool
direction_interfaces__msg__Direction__Sequence__init(direction_interfaces__msg__Direction__Sequence * array, size_t size);

/// Finalize array of msg/Direction messages.
/**
 * It calls
 * direction_interfaces__msg__Direction__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
void
direction_interfaces__msg__Direction__Sequence__fini(direction_interfaces__msg__Direction__Sequence * array);

/// Create array of msg/Direction messages.
/**
 * It allocates the memory for the array and calls
 * direction_interfaces__msg__Direction__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
direction_interfaces__msg__Direction__Sequence *
direction_interfaces__msg__Direction__Sequence__create(size_t size);

/// Destroy array of msg/Direction messages.
/**
 * It calls
 * direction_interfaces__msg__Direction__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
void
direction_interfaces__msg__Direction__Sequence__destroy(direction_interfaces__msg__Direction__Sequence * array);

/// Check for msg/Direction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
bool
direction_interfaces__msg__Direction__Sequence__are_equal(const direction_interfaces__msg__Direction__Sequence * lhs, const direction_interfaces__msg__Direction__Sequence * rhs);

/// Copy an array of msg/Direction messages.
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
ROSIDL_GENERATOR_C_PUBLIC_direction_interfaces
bool
direction_interfaces__msg__Direction__Sequence__copy(
  const direction_interfaces__msg__Direction__Sequence * input,
  direction_interfaces__msg__Direction__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__FUNCTIONS_H_
