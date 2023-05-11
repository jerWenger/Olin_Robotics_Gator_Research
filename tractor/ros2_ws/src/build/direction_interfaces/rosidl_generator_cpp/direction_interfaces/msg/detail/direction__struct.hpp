// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from direction_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_HPP_
#define DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__direction_interfaces__msg__Direction __attribute__((deprecated))
#else
# define DEPRECATED__direction_interfaces__msg__Direction __declspec(deprecated)
#endif

namespace direction_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Direction_
{
  using Type = Direction_<ContainerAllocator>;

  explicit Direction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->left_weight = 0.0;
      this->center_weight = 0.0;
      this->right_weight = 0.0;
    }
  }

  explicit Direction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->left_weight = 0.0;
      this->center_weight = 0.0;
      this->right_weight = 0.0;
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _left_weight_type =
    double;
  _left_weight_type left_weight;
  using _center_weight_type =
    double;
  _center_weight_type center_weight;
  using _right_weight_type =
    double;
  _right_weight_type right_weight;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__left_weight(
    const double & _arg)
  {
    this->left_weight = _arg;
    return *this;
  }
  Type & set__center_weight(
    const double & _arg)
  {
    this->center_weight = _arg;
    return *this;
  }
  Type & set__right_weight(
    const double & _arg)
  {
    this->right_weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    direction_interfaces::msg::Direction_<ContainerAllocator> *;
  using ConstRawPtr =
    const direction_interfaces::msg::Direction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<direction_interfaces::msg::Direction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<direction_interfaces::msg::Direction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      direction_interfaces::msg::Direction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<direction_interfaces::msg::Direction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      direction_interfaces::msg::Direction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<direction_interfaces::msg::Direction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<direction_interfaces::msg::Direction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<direction_interfaces::msg::Direction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__direction_interfaces__msg__Direction
    std::shared_ptr<direction_interfaces::msg::Direction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__direction_interfaces__msg__Direction
    std::shared_ptr<direction_interfaces::msg::Direction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Direction_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->left_weight != other.left_weight) {
      return false;
    }
    if (this->center_weight != other.center_weight) {
      return false;
    }
    if (this->right_weight != other.right_weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const Direction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Direction_

// alias to use template instance with default allocator
using Direction =
  direction_interfaces::msg::Direction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace direction_interfaces

#endif  // DIRECTION_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_HPP_
