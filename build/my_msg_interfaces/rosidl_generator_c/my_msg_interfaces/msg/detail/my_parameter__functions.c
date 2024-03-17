// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_msg_interfaces:msg/MyParameter.idl
// generated code does not contain a copyright notice
#include "my_msg_interfaces/msg/detail/my_parameter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_msg_interfaces__msg__MyParameter__init(my_msg_interfaces__msg__MyParameter * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // ampl
  // freq
  // offset
  // time
  // signal
  // phas
  return true;
}

void
my_msg_interfaces__msg__MyParameter__fini(my_msg_interfaces__msg__MyParameter * msg)
{
  if (!msg) {
    return;
  }
  // type
  // ampl
  // freq
  // offset
  // time
  // signal
  // phas
}

bool
my_msg_interfaces__msg__MyParameter__are_equal(const my_msg_interfaces__msg__MyParameter * lhs, const my_msg_interfaces__msg__MyParameter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // ampl
  if (lhs->ampl != rhs->ampl) {
    return false;
  }
  // freq
  if (lhs->freq != rhs->freq) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // signal
  if (lhs->signal != rhs->signal) {
    return false;
  }
  // phas
  if (lhs->phas != rhs->phas) {
    return false;
  }
  return true;
}

bool
my_msg_interfaces__msg__MyParameter__copy(
  const my_msg_interfaces__msg__MyParameter * input,
  my_msg_interfaces__msg__MyParameter * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // ampl
  output->ampl = input->ampl;
  // freq
  output->freq = input->freq;
  // offset
  output->offset = input->offset;
  // time
  output->time = input->time;
  // signal
  output->signal = input->signal;
  // phas
  output->phas = input->phas;
  return true;
}

my_msg_interfaces__msg__MyParameter *
my_msg_interfaces__msg__MyParameter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msg_interfaces__msg__MyParameter * msg = (my_msg_interfaces__msg__MyParameter *)allocator.allocate(sizeof(my_msg_interfaces__msg__MyParameter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_msg_interfaces__msg__MyParameter));
  bool success = my_msg_interfaces__msg__MyParameter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_msg_interfaces__msg__MyParameter__destroy(my_msg_interfaces__msg__MyParameter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_msg_interfaces__msg__MyParameter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_msg_interfaces__msg__MyParameter__Sequence__init(my_msg_interfaces__msg__MyParameter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msg_interfaces__msg__MyParameter * data = NULL;

  if (size) {
    data = (my_msg_interfaces__msg__MyParameter *)allocator.zero_allocate(size, sizeof(my_msg_interfaces__msg__MyParameter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_msg_interfaces__msg__MyParameter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_msg_interfaces__msg__MyParameter__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_msg_interfaces__msg__MyParameter__Sequence__fini(my_msg_interfaces__msg__MyParameter__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_msg_interfaces__msg__MyParameter__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_msg_interfaces__msg__MyParameter__Sequence *
my_msg_interfaces__msg__MyParameter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msg_interfaces__msg__MyParameter__Sequence * array = (my_msg_interfaces__msg__MyParameter__Sequence *)allocator.allocate(sizeof(my_msg_interfaces__msg__MyParameter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_msg_interfaces__msg__MyParameter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_msg_interfaces__msg__MyParameter__Sequence__destroy(my_msg_interfaces__msg__MyParameter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_msg_interfaces__msg__MyParameter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_msg_interfaces__msg__MyParameter__Sequence__are_equal(const my_msg_interfaces__msg__MyParameter__Sequence * lhs, const my_msg_interfaces__msg__MyParameter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_msg_interfaces__msg__MyParameter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_msg_interfaces__msg__MyParameter__Sequence__copy(
  const my_msg_interfaces__msg__MyParameter__Sequence * input,
  my_msg_interfaces__msg__MyParameter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_msg_interfaces__msg__MyParameter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_msg_interfaces__msg__MyParameter * data =
      (my_msg_interfaces__msg__MyParameter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_msg_interfaces__msg__MyParameter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_msg_interfaces__msg__MyParameter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_msg_interfaces__msg__MyParameter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
