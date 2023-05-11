// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from direction_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice
#include "direction_interfaces/msg/detail/direction__rosidl_typesupport_fastrtps_cpp.hpp"
#include "direction_interfaces/msg/detail/direction__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace direction_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direction_interfaces
cdr_serialize(
  const direction_interfaces::msg::Direction & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: direction
  cdr << ros_message.direction;
  // Member: left_weight
  cdr << ros_message.left_weight;
  // Member: center_weight
  cdr << ros_message.center_weight;
  // Member: right_weight
  cdr << ros_message.right_weight;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direction_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  direction_interfaces::msg::Direction & ros_message)
{
  // Member: direction
  cdr >> ros_message.direction;

  // Member: left_weight
  cdr >> ros_message.left_weight;

  // Member: center_weight
  cdr >> ros_message.center_weight;

  // Member: right_weight
  cdr >> ros_message.right_weight;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direction_interfaces
get_serialized_size(
  const direction_interfaces::msg::Direction & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.direction.size() + 1);
  // Member: left_weight
  {
    size_t item_size = sizeof(ros_message.left_weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center_weight
  {
    size_t item_size = sizeof(ros_message.center_weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_weight
  {
    size_t item_size = sizeof(ros_message.right_weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_direction_interfaces
max_serialized_size_Direction(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: direction
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: left_weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: center_weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Direction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const direction_interfaces::msg::Direction *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Direction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<direction_interfaces::msg::Direction *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Direction__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const direction_interfaces::msg::Direction *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Direction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Direction(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Direction__callbacks = {
  "direction_interfaces::msg",
  "Direction",
  _Direction__cdr_serialize,
  _Direction__cdr_deserialize,
  _Direction__get_serialized_size,
  _Direction__max_serialized_size
};

static rosidl_message_type_support_t _Direction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Direction__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace direction_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_direction_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<direction_interfaces::msg::Direction>()
{
  return &direction_interfaces::msg::typesupport_fastrtps_cpp::_Direction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, direction_interfaces, msg, Direction)() {
  return &direction_interfaces::msg::typesupport_fastrtps_cpp::_Direction__handle;
}

#ifdef __cplusplus
}
#endif
