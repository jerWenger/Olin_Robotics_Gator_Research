// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__TRAITS_HPP_
#define GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gps_interfaces/msg/detail/coordinate_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gps_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CoordinateStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CoordinateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CoordinateStamped & msg, bool use_flow_style = false)
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

}  // namespace gps_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gps_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gps_interfaces::msg::CoordinateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gps_interfaces::msg::CoordinateStamped & msg)
{
  return gps_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gps_interfaces::msg::CoordinateStamped>()
{
  return "gps_interfaces::msg::CoordinateStamped";
}

template<>
inline const char * name<gps_interfaces::msg::CoordinateStamped>()
{
  return "gps_interfaces/msg/CoordinateStamped";
}

template<>
struct has_fixed_size<gps_interfaces::msg::CoordinateStamped>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gps_interfaces::msg::CoordinateStamped>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gps_interfaces::msg::CoordinateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__TRAITS_HPP_
