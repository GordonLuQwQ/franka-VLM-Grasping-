// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:srv/SetStiffnessFrame.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_STIFFNESS_FRAME__STRUCT_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_STIFFNESS_FRAME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Request __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Request __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStiffnessFrame_Request_
{
  using Type = SetStiffnessFrame_Request_<ContainerAllocator>;

  explicit SetStiffnessFrame_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 16>::iterator, double>(this->transformation.begin(), this->transformation.end(), 0.0);
    }
  }

  explicit SetStiffnessFrame_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transformation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 16>::iterator, double>(this->transformation.begin(), this->transformation.end(), 0.0);
    }
  }

  // field types and members
  using _transformation_type =
    std::array<double, 16>;
  _transformation_type transformation;

  // setters for named parameter idiom
  Type & set__transformation(
    const std::array<double, 16> & _arg)
  {
    this->transformation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Request
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Request
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStiffnessFrame_Request_ & other) const
  {
    if (this->transformation != other.transformation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStiffnessFrame_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStiffnessFrame_Request_

// alias to use template instance with default allocator
using SetStiffnessFrame_Request =
  franka_msgs::srv::SetStiffnessFrame_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_msgs


#ifndef _WIN32
# define DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Response __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Response __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStiffnessFrame_Response_
{
  using Type = SetStiffnessFrame_Response_<ContainerAllocator>;

  explicit SetStiffnessFrame_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit SetStiffnessFrame_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Response
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__srv__SetStiffnessFrame_Response
    std::shared_ptr<franka_msgs::srv::SetStiffnessFrame_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStiffnessFrame_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStiffnessFrame_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStiffnessFrame_Response_

// alias to use template instance with default allocator
using SetStiffnessFrame_Response =
  franka_msgs::srv::SetStiffnessFrame_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_msgs

namespace franka_msgs
{

namespace srv
{

struct SetStiffnessFrame
{
  using Request = franka_msgs::srv::SetStiffnessFrame_Request;
  using Response = franka_msgs::srv::SetStiffnessFrame_Response;
};

}  // namespace srv

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_STIFFNESS_FRAME__STRUCT_HPP_
