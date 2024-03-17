// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_msg_interfaces:msg/MyParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__FUNCTIONS_H_
#define MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_msg_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_msg_interfaces/msg/detail/my_parameter__struct.h"

/// Initialize msg/MyParameter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_msg_interfaces__msg__MyParameter
 * )) before or use
 * my_msg_interfaces__msg__MyParameter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
bool
my_msg_interfaces__msg__MyParameter__init(my_msg_interfaces__msg__MyParameter * msg);

/// Finalize msg/MyParameter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
void
my_msg_interfaces__msg__MyParameter__fini(my_msg_interfaces__msg__MyParameter * msg);

/// Create msg/MyParameter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_msg_interfaces__msg__MyParameter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
my_msg_interfaces__msg__MyParameter *
my_msg_interfaces__msg__MyParameter__create();

/// Destroy msg/MyParameter message.
/**
 * It calls
 * my_msg_interfaces__msg__MyParameter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
void
my_msg_interfaces__msg__MyParameter__destroy(my_msg_interfaces__msg__MyParameter * msg);

/// Check for msg/MyParameter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
bool
my_msg_interfaces__msg__MyParameter__are_equal(const my_msg_interfaces__msg__MyParameter * lhs, const my_msg_interfaces__msg__MyParameter * rhs);

/// Copy a msg/MyParameter message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
bool
my_msg_interfaces__msg__MyParameter__copy(
  const my_msg_interfaces__msg__MyParameter * input,
  my_msg_interfaces__msg__MyParameter * output);

/// Initialize array of msg/MyParameter messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_msg_interfaces__msg__MyParameter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
bool
my_msg_interfaces__msg__MyParameter__Sequence__init(my_msg_interfaces__msg__MyParameter__Sequence * array, size_t size);

/// Finalize array of msg/MyParameter messages.
/**
 * It calls
 * my_msg_interfaces__msg__MyParameter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
void
my_msg_interfaces__msg__MyParameter__Sequence__fini(my_msg_interfaces__msg__MyParameter__Sequence * array);

/// Create array of msg/MyParameter messages.
/**
 * It allocates the memory for the array and calls
 * my_msg_interfaces__msg__MyParameter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
my_msg_interfaces__msg__MyParameter__Sequence *
my_msg_interfaces__msg__MyParameter__Sequence__create(size_t size);

/// Destroy array of msg/MyParameter messages.
/**
 * It calls
 * my_msg_interfaces__msg__MyParameter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
void
my_msg_interfaces__msg__MyParameter__Sequence__destroy(my_msg_interfaces__msg__MyParameter__Sequence * array);

/// Check for msg/MyParameter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
bool
my_msg_interfaces__msg__MyParameter__Sequence__are_equal(const my_msg_interfaces__msg__MyParameter__Sequence * lhs, const my_msg_interfaces__msg__MyParameter__Sequence * rhs);

/// Copy an array of msg/MyParameter messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msg_interfaces
bool
my_msg_interfaces__msg__MyParameter__Sequence__copy(
  const my_msg_interfaces__msg__MyParameter__Sequence * input,
  my_msg_interfaces__msg__MyParameter__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__FUNCTIONS_H_
