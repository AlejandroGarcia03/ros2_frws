// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_msg_interfaces:msg/MyParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__STRUCT_H_
#define MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MyParameter in the package my_msg_interfaces.
typedef struct my_msg_interfaces__msg__MyParameter
{
  int32_t type;
  float ampl;
  float freq;
  float offset;
  int32_t time;
  float signal;
  float phas;
} my_msg_interfaces__msg__MyParameter;

// Struct for a sequence of my_msg_interfaces__msg__MyParameter.
typedef struct my_msg_interfaces__msg__MyParameter__Sequence
{
  my_msg_interfaces__msg__MyParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_msg_interfaces__msg__MyParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__STRUCT_H_
