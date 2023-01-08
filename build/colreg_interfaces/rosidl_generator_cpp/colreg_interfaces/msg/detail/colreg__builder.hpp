// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from colreg_interfaces:msg/Colreg.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__COLREG__BUILDER_HPP_
#define COLREG_INTERFACES__MSG__DETAIL__COLREG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "colreg_interfaces/msg/detail/colreg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace colreg_interfaces
{

namespace msg
{

namespace builder
{

class Init_Colreg_theta_own
{
public:
  explicit Init_Colreg_theta_own(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  ::colreg_interfaces::msg::Colreg theta_own(::colreg_interfaces::msg::Colreg::_theta_own_type arg)
  {
    msg_.theta_own = std::move(arg);
    return std::move(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_theta_target
{
public:
  explicit Init_Colreg_theta_target(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_theta_own theta_target(::colreg_interfaces::msg::Colreg::_theta_target_type arg)
  {
    msg_.theta_target = std::move(arg);
    return Init_Colreg_theta_own(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_y_own
{
public:
  explicit Init_Colreg_y_own(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_theta_target y_own(::colreg_interfaces::msg::Colreg::_y_own_type arg)
  {
    msg_.y_own = std::move(arg);
    return Init_Colreg_theta_target(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_x_own
{
public:
  explicit Init_Colreg_x_own(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_y_own x_own(::colreg_interfaces::msg::Colreg::_x_own_type arg)
  {
    msg_.x_own = std::move(arg);
    return Init_Colreg_y_own(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_y_target
{
public:
  explicit Init_Colreg_y_target(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_x_own y_target(::colreg_interfaces::msg::Colreg::_y_target_type arg)
  {
    msg_.y_target = std::move(arg);
    return Init_Colreg_x_own(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_x_target
{
public:
  explicit Init_Colreg_x_target(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_y_target x_target(::colreg_interfaces::msg::Colreg::_x_target_type arg)
  {
    msg_.x_target = std::move(arg);
    return Init_Colreg_y_target(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_collision_point_y
{
public:
  explicit Init_Colreg_collision_point_y(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_x_target collision_point_y(::colreg_interfaces::msg::Colreg::_collision_point_y_type arg)
  {
    msg_.collision_point_y = std::move(arg);
    return Init_Colreg_x_target(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_collision_point_x
{
public:
  explicit Init_Colreg_collision_point_x(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_collision_point_y collision_point_x(::colreg_interfaces::msg::Colreg::_collision_point_x_type arg)
  {
    msg_.collision_point_x = std::move(arg);
    return Init_Colreg_collision_point_y(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_dcpa
{
public:
  explicit Init_Colreg_dcpa(::colreg_interfaces::msg::Colreg & msg)
  : msg_(msg)
  {}
  Init_Colreg_collision_point_x dcpa(::colreg_interfaces::msg::Colreg::_dcpa_type arg)
  {
    msg_.dcpa = std::move(arg);
    return Init_Colreg_collision_point_x(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

class Init_Colreg_tcpa
{
public:
  Init_Colreg_tcpa()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Colreg_dcpa tcpa(::colreg_interfaces::msg::Colreg::_tcpa_type arg)
  {
    msg_.tcpa = std::move(arg);
    return Init_Colreg_dcpa(msg_);
  }

private:
  ::colreg_interfaces::msg::Colreg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::colreg_interfaces::msg::Colreg>()
{
  return colreg_interfaces::msg::builder::Init_Colreg_tcpa();
}

}  // namespace colreg_interfaces

#endif  // COLREG_INTERFACES__MSG__DETAIL__COLREG__BUILDER_HPP_
