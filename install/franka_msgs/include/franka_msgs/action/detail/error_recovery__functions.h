// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from franka_msgs:action/ErrorRecovery.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__FUNCTIONS_H_
#define FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "franka_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "franka_msgs/action/detail/error_recovery__struct.h"

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_Goal
 * )) before or use
 * franka_msgs__action__ErrorRecovery_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Goal__init(franka_msgs__action__ErrorRecovery_Goal * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Goal__fini(franka_msgs__action__ErrorRecovery_Goal * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_Goal *
franka_msgs__action__ErrorRecovery_Goal__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Goal__destroy(franka_msgs__action__ErrorRecovery_Goal * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Goal__are_equal(const franka_msgs__action__ErrorRecovery_Goal * lhs, const franka_msgs__action__ErrorRecovery_Goal * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Goal__copy(
  const franka_msgs__action__ErrorRecovery_Goal * input,
  franka_msgs__action__ErrorRecovery_Goal * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Goal__Sequence__init(franka_msgs__action__ErrorRecovery_Goal__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Goal__Sequence__fini(franka_msgs__action__ErrorRecovery_Goal__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_Goal__Sequence *
franka_msgs__action__ErrorRecovery_Goal__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Goal__Sequence__destroy(franka_msgs__action__ErrorRecovery_Goal__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Goal__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_Goal__Sequence * lhs, const franka_msgs__action__ErrorRecovery_Goal__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Goal__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_Goal__Sequence * input,
  franka_msgs__action__ErrorRecovery_Goal__Sequence * output);

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_Result
 * )) before or use
 * franka_msgs__action__ErrorRecovery_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Result__init(franka_msgs__action__ErrorRecovery_Result * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Result__fini(franka_msgs__action__ErrorRecovery_Result * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_Result *
franka_msgs__action__ErrorRecovery_Result__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Result__destroy(franka_msgs__action__ErrorRecovery_Result * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Result__are_equal(const franka_msgs__action__ErrorRecovery_Result * lhs, const franka_msgs__action__ErrorRecovery_Result * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Result__copy(
  const franka_msgs__action__ErrorRecovery_Result * input,
  franka_msgs__action__ErrorRecovery_Result * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Result__Sequence__init(franka_msgs__action__ErrorRecovery_Result__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Result__Sequence__fini(franka_msgs__action__ErrorRecovery_Result__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_Result__Sequence *
franka_msgs__action__ErrorRecovery_Result__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Result__Sequence__destroy(franka_msgs__action__ErrorRecovery_Result__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Result__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_Result__Sequence * lhs, const franka_msgs__action__ErrorRecovery_Result__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Result__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_Result__Sequence * input,
  franka_msgs__action__ErrorRecovery_Result__Sequence * output);

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_Feedback
 * )) before or use
 * franka_msgs__action__ErrorRecovery_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Feedback__init(franka_msgs__action__ErrorRecovery_Feedback * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Feedback__fini(franka_msgs__action__ErrorRecovery_Feedback * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_Feedback *
franka_msgs__action__ErrorRecovery_Feedback__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Feedback__destroy(franka_msgs__action__ErrorRecovery_Feedback * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Feedback__are_equal(const franka_msgs__action__ErrorRecovery_Feedback * lhs, const franka_msgs__action__ErrorRecovery_Feedback * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Feedback__copy(
  const franka_msgs__action__ErrorRecovery_Feedback * input,
  franka_msgs__action__ErrorRecovery_Feedback * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Feedback__Sequence__init(franka_msgs__action__ErrorRecovery_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Feedback__Sequence__fini(franka_msgs__action__ErrorRecovery_Feedback__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_Feedback__Sequence *
franka_msgs__action__ErrorRecovery_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_Feedback__Sequence__destroy(franka_msgs__action__ErrorRecovery_Feedback__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Feedback__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_Feedback__Sequence * lhs, const franka_msgs__action__ErrorRecovery_Feedback__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_Feedback__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_Feedback__Sequence * input,
  franka_msgs__action__ErrorRecovery_Feedback__Sequence * output);

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_SendGoal_Request
 * )) before or use
 * franka_msgs__action__ErrorRecovery_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Request__init(franka_msgs__action__ErrorRecovery_SendGoal_Request * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Request__fini(franka_msgs__action__ErrorRecovery_SendGoal_Request * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_SendGoal_Request *
franka_msgs__action__ErrorRecovery_SendGoal_Request__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Request__destroy(franka_msgs__action__ErrorRecovery_SendGoal_Request * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Request__are_equal(const franka_msgs__action__ErrorRecovery_SendGoal_Request * lhs, const franka_msgs__action__ErrorRecovery_SendGoal_Request * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Request__copy(
  const franka_msgs__action__ErrorRecovery_SendGoal_Request * input,
  franka_msgs__action__ErrorRecovery_SendGoal_Request * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__init(franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__fini(franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence *
franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__destroy(franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence * lhs, const franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence * input,
  franka_msgs__action__ErrorRecovery_SendGoal_Request__Sequence * output);

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_SendGoal_Response
 * )) before or use
 * franka_msgs__action__ErrorRecovery_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Response__init(franka_msgs__action__ErrorRecovery_SendGoal_Response * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Response__fini(franka_msgs__action__ErrorRecovery_SendGoal_Response * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_SendGoal_Response *
franka_msgs__action__ErrorRecovery_SendGoal_Response__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Response__destroy(franka_msgs__action__ErrorRecovery_SendGoal_Response * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Response__are_equal(const franka_msgs__action__ErrorRecovery_SendGoal_Response * lhs, const franka_msgs__action__ErrorRecovery_SendGoal_Response * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Response__copy(
  const franka_msgs__action__ErrorRecovery_SendGoal_Response * input,
  franka_msgs__action__ErrorRecovery_SendGoal_Response * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__init(franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__fini(franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence *
franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__destroy(franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence * lhs, const franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence * input,
  franka_msgs__action__ErrorRecovery_SendGoal_Response__Sequence * output);

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_GetResult_Request
 * )) before or use
 * franka_msgs__action__ErrorRecovery_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Request__init(franka_msgs__action__ErrorRecovery_GetResult_Request * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Request__fini(franka_msgs__action__ErrorRecovery_GetResult_Request * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_GetResult_Request *
franka_msgs__action__ErrorRecovery_GetResult_Request__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Request__destroy(franka_msgs__action__ErrorRecovery_GetResult_Request * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Request__are_equal(const franka_msgs__action__ErrorRecovery_GetResult_Request * lhs, const franka_msgs__action__ErrorRecovery_GetResult_Request * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Request__copy(
  const franka_msgs__action__ErrorRecovery_GetResult_Request * input,
  franka_msgs__action__ErrorRecovery_GetResult_Request * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__init(franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__fini(franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence *
franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__destroy(franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence * lhs, const franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence * input,
  franka_msgs__action__ErrorRecovery_GetResult_Request__Sequence * output);

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_GetResult_Response
 * )) before or use
 * franka_msgs__action__ErrorRecovery_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Response__init(franka_msgs__action__ErrorRecovery_GetResult_Response * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Response__fini(franka_msgs__action__ErrorRecovery_GetResult_Response * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_GetResult_Response *
franka_msgs__action__ErrorRecovery_GetResult_Response__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Response__destroy(franka_msgs__action__ErrorRecovery_GetResult_Response * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Response__are_equal(const franka_msgs__action__ErrorRecovery_GetResult_Response * lhs, const franka_msgs__action__ErrorRecovery_GetResult_Response * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Response__copy(
  const franka_msgs__action__ErrorRecovery_GetResult_Response * input,
  franka_msgs__action__ErrorRecovery_GetResult_Response * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__init(franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__fini(franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence *
franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__destroy(franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence * lhs, const franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence * input,
  franka_msgs__action__ErrorRecovery_GetResult_Response__Sequence * output);

/// Initialize action/ErrorRecovery message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__action__ErrorRecovery_FeedbackMessage
 * )) before or use
 * franka_msgs__action__ErrorRecovery_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_FeedbackMessage__init(franka_msgs__action__ErrorRecovery_FeedbackMessage * msg);

/// Finalize action/ErrorRecovery message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_FeedbackMessage__fini(franka_msgs__action__ErrorRecovery_FeedbackMessage * msg);

/// Create action/ErrorRecovery message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__action__ErrorRecovery_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_FeedbackMessage *
franka_msgs__action__ErrorRecovery_FeedbackMessage__create();

/// Destroy action/ErrorRecovery message.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_FeedbackMessage__destroy(franka_msgs__action__ErrorRecovery_FeedbackMessage * msg);

/// Check for action/ErrorRecovery message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_FeedbackMessage__are_equal(const franka_msgs__action__ErrorRecovery_FeedbackMessage * lhs, const franka_msgs__action__ErrorRecovery_FeedbackMessage * rhs);

/// Copy a action/ErrorRecovery message.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_FeedbackMessage__copy(
  const franka_msgs__action__ErrorRecovery_FeedbackMessage * input,
  franka_msgs__action__ErrorRecovery_FeedbackMessage * output);

/// Initialize array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__action__ErrorRecovery_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__init(franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__fini(franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence * array);

/// Create array of action/ErrorRecovery messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence *
franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ErrorRecovery messages.
/**
 * It calls
 * franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__destroy(franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence * array);

/// Check for action/ErrorRecovery message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__are_equal(const franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence * lhs, const franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ErrorRecovery messages.
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
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence__copy(
  const franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence * input,
  franka_msgs__action__ErrorRecovery_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__FUNCTIONS_H_
