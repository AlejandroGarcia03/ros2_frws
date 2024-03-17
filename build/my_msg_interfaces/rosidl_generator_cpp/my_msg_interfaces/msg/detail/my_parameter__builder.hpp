// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msg_interfaces:msg/MyParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__BUILDER_HPP_
#define MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_msg_interfaces/msg/detail/my_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_msg_interfaces
{

namespace msg
{

namespace builder
{

class Init_MyParameter_phas
{
public:
  explicit Init_MyParameter_phas(::my_msg_interfaces::msg::MyParameter & msg)
  : msg_(msg)
  {}
  ::my_msg_interfaces::msg::MyParameter phas(::my_msg_interfaces::msg::MyParameter::_phas_type arg)
  {
    msg_.phas = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msg_interfaces::msg::MyParameter msg_;
};

class Init_MyParameter_signal
{
public:
  explicit Init_MyParameter_signal(::my_msg_interfaces::msg::MyParameter & msg)
  : msg_(msg)
  {}
  Init_MyParameter_phas signal(::my_msg_interfaces::msg::MyParameter::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return Init_MyParameter_phas(msg_);
  }

private:
  ::my_msg_interfaces::msg::MyParameter msg_;
};

class Init_MyParameter_time
{
public:
  explicit Init_MyParameter_time(::my_msg_interfaces::msg::MyParameter & msg)
  : msg_(msg)
  {}
  Init_MyParameter_signal time(::my_msg_interfaces::msg::MyParameter::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_MyParameter_signal(msg_);
  }

private:
  ::my_msg_interfaces::msg::MyParameter msg_;
};

class Init_MyParameter_offset
{
public:
  explicit Init_MyParameter_offset(::my_msg_interfaces::msg::MyParameter & msg)
  : msg_(msg)
  {}
  Init_MyParameter_time offset(::my_msg_interfaces::msg::MyParameter::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_MyParameter_time(msg_);
  }

private:
  ::my_msg_interfaces::msg::MyParameter msg_;
};

class Init_MyParameter_freq
{
public:
  explicit Init_MyParameter_freq(::my_msg_interfaces::msg::MyParameter & msg)
  : msg_(msg)
  {}
  Init_MyParameter_offset freq(::my_msg_interfaces::msg::MyParameter::_freq_type arg)
  {
    msg_.freq = std::move(arg);
    return Init_MyParameter_offset(msg_);
  }

private:
  ::my_msg_interfaces::msg::MyParameter msg_;
};

class Init_MyParameter_ampl
{
public:
  explicit Init_MyParameter_ampl(::my_msg_interfaces::msg::MyParameter & msg)
  : msg_(msg)
  {}
  Init_MyParameter_freq ampl(::my_msg_interfaces::msg::MyParameter::_ampl_type arg)
  {
    msg_.ampl = std::move(arg);
    return Init_MyParameter_freq(msg_);
  }

private:
  ::my_msg_interfaces::msg::MyParameter msg_;
};

class Init_MyParameter_type
{
public:
  Init_MyParameter_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyParameter_ampl type(::my_msg_interfaces::msg::MyParameter::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MyParameter_ampl(msg_);
  }

private:
  ::my_msg_interfaces::msg::MyParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msg_interfaces::msg::MyParameter>()
{
  return my_msg_interfaces::msg::builder::Init_MyParameter_type();
}

}  // namespace my_msg_interfaces

#endif  // MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__BUILDER_HPP_
