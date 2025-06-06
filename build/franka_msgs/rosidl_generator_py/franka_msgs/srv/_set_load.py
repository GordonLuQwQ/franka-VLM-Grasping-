# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:srv/SetLoad.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'center_of_mass'
# Member 'load_inertia'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLoad_Request(type):
    """Metaclass of message 'SetLoad_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_msgs.srv.SetLoad_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_load__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_load__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_load__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_load__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_load__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLoad_Request(metaclass=Metaclass_SetLoad_Request):
    """Message class 'SetLoad_Request'."""

    __slots__ = [
        '_mass',
        '_center_of_mass',
        '_load_inertia',
    ]

    _fields_and_field_types = {
        'mass': 'double',
        'center_of_mass': 'double[3]',
        'load_inertia': 'double[9]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mass = kwargs.get('mass', float())
        if 'center_of_mass' not in kwargs:
            self.center_of_mass = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.center_of_mass = numpy.array(kwargs.get('center_of_mass'), dtype=numpy.float64)
            assert self.center_of_mass.shape == (3, )
        if 'load_inertia' not in kwargs:
            self.load_inertia = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.load_inertia = numpy.array(kwargs.get('load_inertia'), dtype=numpy.float64)
            assert self.load_inertia.shape == (9, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mass != other.mass:
            return False
        if all(self.center_of_mass != other.center_of_mass):
            return False
        if all(self.load_inertia != other.load_inertia):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass' field must be of type 'float'"
        self._mass = value

    @property
    def center_of_mass(self):
        """Message field 'center_of_mass'."""
        return self._center_of_mass

    @center_of_mass.setter
    def center_of_mass(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'center_of_mass' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'center_of_mass' numpy.ndarray() must have a size of 3"
            self._center_of_mass = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'center_of_mass' field must be a set or sequence with length 3 and each value of type 'float'"
        self._center_of_mass = numpy.array(value, dtype=numpy.float64)

    @property
    def load_inertia(self):
        """Message field 'load_inertia'."""
        return self._load_inertia

    @load_inertia.setter
    def load_inertia(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'load_inertia' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'load_inertia' numpy.ndarray() must have a size of 9"
            self._load_inertia = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'load_inertia' field must be a set or sequence with length 9 and each value of type 'float'"
        self._load_inertia = numpy.array(value, dtype=numpy.float64)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLoad_Response(type):
    """Metaclass of message 'SetLoad_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_msgs.srv.SetLoad_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_load__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_load__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_load__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_load__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_load__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLoad_Response(metaclass=Metaclass_SetLoad_Response):
    """Message class 'SetLoad_Response'."""

    __slots__ = [
        '_success',
        '_error',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error = kwargs.get('error', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value


class Metaclass_SetLoad(type):
    """Metaclass of service 'SetLoad'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_msgs.srv.SetLoad')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_load

            from franka_msgs.srv import _set_load
            if _set_load.Metaclass_SetLoad_Request._TYPE_SUPPORT is None:
                _set_load.Metaclass_SetLoad_Request.__import_type_support__()
            if _set_load.Metaclass_SetLoad_Response._TYPE_SUPPORT is None:
                _set_load.Metaclass_SetLoad_Response.__import_type_support__()


class SetLoad(metaclass=Metaclass_SetLoad):
    from franka_msgs.srv._set_load import SetLoad_Request as Request
    from franka_msgs.srv._set_load import SetLoad_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
