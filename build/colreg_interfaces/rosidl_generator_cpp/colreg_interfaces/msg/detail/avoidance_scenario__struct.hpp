// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from colreg_interfaces:msg/AvoidanceScenario.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__STRUCT_HPP_
#define COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__colreg_interfaces__msg__AvoidanceScenario __attribute__((deprecated))
#else
# define DEPRECATED__colreg_interfaces__msg__AvoidanceScenario __declspec(deprecated)
#endif

namespace colreg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvoidanceScenario_
{
  using Type = AvoidanceScenario_<ContainerAllocator>;

  explicit AvoidanceScenario_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario = 0;
    }
  }

  explicit AvoidanceScenario_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _scenario_type =
    uint8_t;
  _scenario_type scenario;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__scenario(
    const uint8_t & _arg)
  {
    this->scenario = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_COLLISION =
    1u;
  static constexpr uint8_t HEAD_ON =
    2u;
  static constexpr uint8_t OVERTAKING =
    3u;
  static constexpr uint8_t CROSSING_PORT =
    4u;
  static constexpr uint8_t CROSSING_STARBOARD =
    5u;

  // pointer types
  using RawPtr =
    colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator> *;
  using ConstRawPtr =
    const colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__colreg_interfaces__msg__AvoidanceScenario
    std::shared_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__colreg_interfaces__msg__AvoidanceScenario
    std::shared_ptr<colreg_interfaces::msg::AvoidanceScenario_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvoidanceScenario_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->scenario != other.scenario) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvoidanceScenario_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvoidanceScenario_

// alias to use template instance with default allocator
using AvoidanceScenario =
  colreg_interfaces::msg::AvoidanceScenario_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AvoidanceScenario_<ContainerAllocator>::NO_COLLISION;
template<typename ContainerAllocator>
constexpr uint8_t AvoidanceScenario_<ContainerAllocator>::HEAD_ON;
template<typename ContainerAllocator>
constexpr uint8_t AvoidanceScenario_<ContainerAllocator>::OVERTAKING;
template<typename ContainerAllocator>
constexpr uint8_t AvoidanceScenario_<ContainerAllocator>::CROSSING_PORT;
template<typename ContainerAllocator>
constexpr uint8_t AvoidanceScenario_<ContainerAllocator>::CROSSING_STARBOARD;

}  // namespace msg

}  // namespace colreg_interfaces

#endif  // COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__STRUCT_HPP_
