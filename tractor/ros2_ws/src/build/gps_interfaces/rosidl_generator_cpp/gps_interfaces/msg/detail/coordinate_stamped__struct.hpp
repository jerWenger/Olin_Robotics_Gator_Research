// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice

#ifndef GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__STRUCT_HPP_
#define GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gps_interfaces__msg__CoordinateStamped __attribute__((deprecated))
#else
# define DEPRECATED__gps_interfaces__msg__CoordinateStamped __declspec(deprecated)
#endif

namespace gps_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoordinateStamped_
{
  using Type = CoordinateStamped_<ContainerAllocator>;

  explicit CoordinateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
    }
  }

  explicit CoordinateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gps_interfaces::msg::CoordinateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps_interfaces::msg::CoordinateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps_interfaces::msg::CoordinateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps_interfaces::msg::CoordinateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps_interfaces__msg__CoordinateStamped
    std::shared_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps_interfaces__msg__CoordinateStamped
    std::shared_ptr<gps_interfaces::msg::CoordinateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinateStamped_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinateStamped_

// alias to use template instance with default allocator
using CoordinateStamped =
  gps_interfaces::msg::CoordinateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gps_interfaces

#endif  // GPS_INTERFACES__MSG__DETAIL__COORDINATE_STAMPED__STRUCT_HPP_
