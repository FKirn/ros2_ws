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

class Init_AvoidanceScenario_scenario
{
public:
  explicit Init_AvoidanceScenario_scenario(::colreg_interfaces::msg::AvoidanceScenario & msg)
  : msg_(msg)
  {}
  ::colreg_interfaces::msg::AvoidanceScenario scenario(::colreg_interfaces::msg::AvoidanceScenario::_scenario_type arg)
  {
    msg_.scenario = std::move(arg);
    return std::move(msg_);
  }

private:
  ::colreg_interfaces::msg::AvoidanceScenario msg_;
};

class Init_AvoidanceScenario_header
{
public:
  Init_AvoidanceScenario_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvoidanceScenario_scenario header(::colreg_interfaces::msg::AvoidanceScenario::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvoidanceScenario_scenario(msg_);
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
  return colreg_interfaces::msg::builder::Init_AvoidanceScenario_header();
}

}  // namespace colreg_interfaces

#endif  // COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__BUILDER_HPP_
