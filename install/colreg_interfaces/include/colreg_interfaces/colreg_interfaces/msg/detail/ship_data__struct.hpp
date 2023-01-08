// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from colreg_interfaces:msg/ShipData.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__STRUCT_HPP_
#define COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__colreg_interfaces__msg__ShipData __attribute__((deprecated))
#else
# define DEPRECATED__colreg_interfaces__msg__ShipData __declspec(deprecated)
#endif

namespace colreg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShipData_
{
  using Type = ShipData_<ContainerAllocator>;

  explicit ShipData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tcpa = 0.0f;
      this->dcpa = 0.0f;
      this->collision_point_x = 0.0f;
      this->collision_point_y = 0.0f;
      this->x_target = 0.0f;
      this->y_target = 0.0f;
      this->x_own = 0.0f;
      this->y_own = 0.0f;
      this->theta_target = 0.0f;
      this->theta_own = 0.0f;
    }
  }

  explicit ShipData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tcpa = 0.0f;
      this->dcpa = 0.0f;
      this->collision_point_x = 0.0f;
      this->collision_point_y = 0.0f;
      this->x_target = 0.0f;
      this->y_target = 0.0f;
      this->x_own = 0.0f;
      this->y_own = 0.0f;
      this->theta_target = 0.0f;
      this->theta_own = 0.0f;
    }
  }

  // field types and members
  using _tcpa_type =
    float;
  _tcpa_type tcpa;
  using _dcpa_type =
    float;
  _dcpa_type dcpa;
  using _collision_point_x_type =
    float;
  _collision_point_x_type collision_point_x;
  using _collision_point_y_type =
    float;
  _collision_point_y_type collision_point_y;
  using _x_target_type =
    float;
  _x_target_type x_target;
  using _y_target_type =
    float;
  _y_target_type y_target;
  using _x_own_type =
    float;
  _x_own_type x_own;
  using _y_own_type =
    float;
  _y_own_type y_own;
  using _theta_target_type =
    float;
  _theta_target_type theta_target;
  using _theta_own_type =
    float;
  _theta_own_type theta_own;

  // setters for named parameter idiom
  Type & set__tcpa(
    const float & _arg)
  {
    this->tcpa = _arg;
    return *this;
  }
  Type & set__dcpa(
    const float & _arg)
  {
    this->dcpa = _arg;
    return *this;
  }
  Type & set__collision_point_x(
    const float & _arg)
  {
    this->collision_point_x = _arg;
    return *this;
  }
  Type & set__collision_point_y(
    const float & _arg)
  {
    this->collision_point_y = _arg;
    return *this;
  }
  Type & set__x_target(
    const float & _arg)
  {
    this->x_target = _arg;
    return *this;
  }
  Type & set__y_target(
    const float & _arg)
  {
    this->y_target = _arg;
    return *this;
  }
  Type & set__x_own(
    const float & _arg)
  {
    this->x_own = _arg;
    return *this;
  }
  Type & set__y_own(
    const float & _arg)
  {
    this->y_own = _arg;
    return *this;
  }
  Type & set__theta_target(
    const float & _arg)
  {
    this->theta_target = _arg;
    return *this;
  }
  Type & set__theta_own(
    const float & _arg)
  {
    this->theta_own = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    colreg_interfaces::msg::ShipData_<ContainerAllocator> *;
  using ConstRawPtr =
    const colreg_interfaces::msg::ShipData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      colreg_interfaces::msg::ShipData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      colreg_interfaces::msg::ShipData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__colreg_interfaces__msg__ShipData
    std::shared_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__colreg_interfaces__msg__ShipData
    std::shared_ptr<colreg_interfaces::msg::ShipData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShipData_ & other) const
  {
    if (this->tcpa != other.tcpa) {
      return false;
    }
    if (this->dcpa != other.dcpa) {
      return false;
    }
    if (this->collision_point_x != other.collision_point_x) {
      return false;
    }
    if (this->collision_point_y != other.collision_point_y) {
      return false;
    }
    if (this->x_target != other.x_target) {
      return false;
    }
    if (this->y_target != other.y_target) {
      return false;
    }
    if (this->x_own != other.x_own) {
      return false;
    }
    if (this->y_own != other.y_own) {
      return false;
    }
    if (this->theta_target != other.theta_target) {
      return false;
    }
    if (this->theta_own != other.theta_own) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShipData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShipData_

// alias to use template instance with default allocator
using ShipData =
  colreg_interfaces::msg::ShipData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace colreg_interfaces

#endif  // COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__STRUCT_HPP_
