// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msg_interfaces:msg/MyParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__STRUCT_HPP_
#define MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_msg_interfaces__msg__MyParameter __attribute__((deprecated))
#else
# define DEPRECATED__my_msg_interfaces__msg__MyParameter __declspec(deprecated)
#endif

namespace my_msg_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyParameter_
{
  using Type = MyParameter_<ContainerAllocator>;

  explicit MyParameter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->ampl = 0.0f;
      this->freq = 0.0f;
      this->offset = 0.0f;
      this->time = 0l;
      this->signal = 0.0f;
      this->phas = 0.0f;
    }
  }

  explicit MyParameter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->ampl = 0.0f;
      this->freq = 0.0f;
      this->offset = 0.0f;
      this->time = 0l;
      this->signal = 0.0f;
      this->phas = 0.0f;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _ampl_type =
    float;
  _ampl_type ampl;
  using _freq_type =
    float;
  _freq_type freq;
  using _offset_type =
    float;
  _offset_type offset;
  using _time_type =
    int32_t;
  _time_type time;
  using _signal_type =
    float;
  _signal_type signal;
  using _phas_type =
    float;
  _phas_type phas;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__ampl(
    const float & _arg)
  {
    this->ampl = _arg;
    return *this;
  }
  Type & set__freq(
    const float & _arg)
  {
    this->freq = _arg;
    return *this;
  }
  Type & set__offset(
    const float & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__time(
    const int32_t & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__signal(
    const float & _arg)
  {
    this->signal = _arg;
    return *this;
  }
  Type & set__phas(
    const float & _arg)
  {
    this->phas = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msg_interfaces::msg::MyParameter_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msg_interfaces::msg::MyParameter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msg_interfaces::msg::MyParameter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msg_interfaces::msg::MyParameter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msg_interfaces__msg__MyParameter
    std::shared_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msg_interfaces__msg__MyParameter
    std::shared_ptr<my_msg_interfaces::msg::MyParameter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyParameter_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->ampl != other.ampl) {
      return false;
    }
    if (this->freq != other.freq) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->signal != other.signal) {
      return false;
    }
    if (this->phas != other.phas) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyParameter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyParameter_

// alias to use template instance with default allocator
using MyParameter =
  my_msg_interfaces::msg::MyParameter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_msg_interfaces

#endif  // MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__STRUCT_HPP_
