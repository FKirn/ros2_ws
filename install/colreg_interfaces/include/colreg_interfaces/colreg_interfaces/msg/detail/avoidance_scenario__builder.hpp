// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from colreg_interfaces:msg/AvoidanceScenario.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__BUILDER_HPP_
#define COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "colreg_interfaces/msg/detail/avoidance_scenario__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace colreg_interfaces
{

namespace msg
{

namespace builder
{

class Init_AvoidanceScenario_theta_own
{
public:
  explicit Init_AvoidanceScenario_theta_own(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  ::colreg_interfaces::msg::AvoidanceScenario theta_own(::colreg_interfaces::msg::AvoidanceScenario::_theta_own_type arg)
  {
    msg_.theta_own = std::move(arg);
    return std::move(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_theta_target
{
public:
  explicit Init_AvoidanceScenario_theta_target(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_theta_own theta_target(::colreg_interfaces::msg::AvoidanceScenario::_theta_target_type arg)
  {
    msg_.theta_target = std::move(arg);
    return Init_AvoidanceScenario_theta_own(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_y_own
{
public:
  explicit Init_AvoidanceScenario_y_own(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_theta_target y_own(::colreg_interfaces::msg::AvoidanceScenario::_y_own_type arg)
  {
    msg_.y_own = std::move(arg);
    return Init_AvoidanceScenario_theta_target(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_x_own
{
public:
  explicit Init_AvoidanceScenario_x_own(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_y_own x_own(::colreg_interfaces::msg::AvoidanceScenario::_x_own_type arg)
  {
    msg_.x_own = std::move(arg);
    return Init_AvoidanceScenario_y_own(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_y_target
{
public:
  explicit Init_AvoidanceScenario_y_target(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_x_own y_target(::colreg_interfaces::msg::AvoidanceScenario::_y_target_type arg)
  {
    msg_.y_target = std::move(arg);
    return Init_AvoidanceScenario_x_own(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_x_target
{
public:
  explicit Init_AvoidanceScenario_x_target(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_y_target x_target(::colreg_interfaces::msg::AvoidanceScenario::_x_target_type arg)
  {
    msg_.x_target = std::move(arg);
    return Init_AvoidanceScenario_y_target(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_collision_point_y
{
public:
  explicit Init_AvoidanceScenario_collision_point_y(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_x_target collision_point_y(::colreg_interfaces::msg::AvoidanceScenario::_collision_point_y_type arg)
  {
    msg_.collision_point_y = std::move(arg);
    return Init_AvoidanceScenario_x_target(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_collision_point_x
{
public:
  explicit Init_AvoidanceScenario_collision_point_x(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_collision_point_y collision_point_x(::colreg_interfaces::msg::AvoidanceScenario::_collision_point_x_type arg)
  {
    msg_.collision_point_x = std::move(arg);
    return Init_AvoidanceScenario_collision_point_y(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_dcpa
{
public:
  explicit Init_AvoidanceScenario_dcpa(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  Init_AvoidanceScenario_collision_point_x dcpa(::colreg_interfaces::msg::AvoidanceScenario::_dcpa_type arg)
  {
    msg_.dcpa = std::move(arg);
    return Init_AvoidanceScenario_collision_point_x(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_tcpa
{
public:
  Init_AvoidanceScenario_tcpa()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvoidanceScenario_dcpa tcpa(::colreg_interfaces::msg::AvoidanceScenario::_tcpa_type arg)
  {
    msg_.tcpa = std::move(arg);
    return Init_AvoidanceScenario_dcpa(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::colreg_interfaces::msg::AvoidanceScenario>()
{
  return colreg_interfaces::msg::builder::Init_AvoidanceScenario_tcpa();
}

}  // namespace colreg_interfaces

#endif  // COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__BUILDER_HPP_
