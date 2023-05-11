// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from direction_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__BUILDER_HPP_
#define DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "direction_interfaces/msg/detail/direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace direction_interfaces
{

namespace msg
{

namespace builder
{

class Init_Direction_right_weight
{
public:
  explicit Init_Direction_right_weight(::direction_interfaces::msg::Direction & msg)
  : msg_(msg)
  {}
  ::direction_interfaces::msg::Direction right_weight(::direction_interfaces::msg::Direction::_right_weight_type arg)
  {
    msg_.right_weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::direction_interfaces::msg::Direction msg_;
};

class Init_Direction_center_weight
{
public:
  explicit Init_Direction_center_weight(::direction_interfaces::msg::Direction & msg)
  : msg_(msg)
  {}
  Init_Direction_right_weight center_weight(::direction_interfaces::msg::Direction::_center_weight_type arg)
  {
    msg_.center_weight = std::move(arg);
    return Init_Direction_right_weight(msg_);
  }

private:
  ::direction_interfaces::msg::Direction msg_;
};

class Init_Direction_left_weight
{
public:
  explicit Init_Direction_left_weight(::direction_interfaces::msg::Direction & msg)
  : msg_(msg)
  {}
  Init_Direction_center_weight left_weight(::direction_interfaces::msg::Direction::_left_weight_type arg)
  {
    msg_.left_weight = std::move(arg);
    return Init_Direction_center_weight(msg_);
  }

private:
  ::direction_interfaces::msg::Direction msg_;
};

class Init_Direction_direction
{
public:
  Init_Direction_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Direction_left_weight direction(::direction_interfaces::msg::Direction::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Direction_left_weight(msg_);
  }

private:
  ::direction_interfaces::msg::Direction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::direction_interfaces::msg::Direction>()
{
  return direction_interfaces::msg::builder::Init_Direction_direction();
}

}  // namespace direction_interfaces

#endif  // DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__BUILDER_HPP_
