// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__BUILDER_HPP_
#define GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gps_interfaces/msg/detail/coordinate_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gps_interfaces
{

namespace msg
{

namespace builder
{

class Init_CoordinateStamped_longitude
{
public:
  explicit Init_CoordinateStamped_longitude(::gps_interfaces::msg::CoordinateStamped & msg)
  : msg_(msg)
  {}
  ::gps_interfaces::msg::CoordinateStamped longitude(::gps_interfaces::msg::CoordinateStamped::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_interfaces::msg::CoordinateStamped msg_;
};

class Init_CoordinateStamped_latitude
{
public:
  explicit Init_CoordinateStamped_latitude(::gps_interfaces::msg::CoordinateStamped & msg)
  : msg_(msg)
  {}
  Init_CoordinateStamped_longitude latitude(::gps_interfaces::msg::CoordinateStamped::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_CoordinateStamped_longitude(msg_);
  }

private:
  ::gps_interfaces::msg::CoordinateStamped msg_;
};

class Init_CoordinateStamped_timestamp
{
public:
  Init_CoordinateStamped_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinateStamped_latitude timestamp(::gps_interfaces::msg::CoordinateStamped::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CoordinateStamped_latitude(msg_);
  }

private:
  ::gps_interfaces::msg::CoordinateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_interfaces::msg::CoordinateStamped>()
{
  return gps_interfaces::msg::builder::Init_CoordinateStamped_timestamp();
}

}  // namespace gps_interfaces

#endif  // GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__BUILDER_HPP_
