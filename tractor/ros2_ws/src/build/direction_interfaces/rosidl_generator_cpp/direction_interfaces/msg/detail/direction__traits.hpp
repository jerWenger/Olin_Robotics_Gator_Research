// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from direction_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__TRAITS_HPP_
#define DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "direction_interfaces/msg/detail/direction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace direction_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Direction & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: left_weight
  {
    out << "left_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.left_weight, out);
    out << ", ";
  }

  // member: center_weight
  {
    out << "center_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.center_weight, out);
    out << ", ";
  }

  // member: right_weight
  {
    out << "right_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.right_weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Direction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: left_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.left_weight, out);
    out << "\n";
  }

  // member: center_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.center_weight, out);
    out << "\n";
  }

  // member: right_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.right_weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Direction & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace direction_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use direction_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const direction_interfaces::msg::Direction & msg,
  std::ostream & out, size_t indentation = 0)
{
  direction_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use direction_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const direction_interfaces::msg::Direction & msg)
{
  return direction_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<direction_interfaces::msg::Direction>()
{
  return "direction_interfaces::msg::Direction";
}

template<>
inline const char * name<direction_interfaces::msg::Direction>()
{
  return "direction_interfaces/msg/Direction";
}

template<>
struct has_fixed_size<direction_interfaces::msg::Direction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<direction_interfaces::msg::Direction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<direction_interfaces::msg::Direction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__TRAITS_HPP_
