#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins

cimport module.types_reflection as _types_reflection


cdef __EnumData __MyEnum_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyEnum](), MyEnum)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnumMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum"


__SetMetaClass(<PyTypeObject*> MyEnum, <PyTypeObject*> __MyEnumMeta)



cdef __UnionTypeEnumData __MyUnion_union_type_enum_data  = __UnionTypeEnumData._fbthrift_create(
    __createEnumDataForUnionType[cMyUnion](),
    __MyUnionType,
)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyUnion_Union_TypeMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyUnion_union_type_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyUnion_union_type_enum_data.get_all_names()

    def __len__(cls):
        return __MyUnion_union_type_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyUnion_union_type_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class __MyUnionType(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyUnion_union_type_enum_data.get_by_name(name)


__SetMetaClass(<PyTypeObject*> __MyUnionType, <PyTypeObject*> __MyUnion_Union_TypeMeta)


@__cython.auto_pickle(False)
cdef class MyStructNestedAnnotation(thrift.py3.types.Struct):
    def __init__(MyStructNestedAnnotation self, **kwargs):
        self._cpp_obj = make_shared[cMyStructNestedAnnotation]()
        self._fields_setter = _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStructNestedAnnotation self, **kwargs):
        if not kwargs:
            return self
        cdef MyStructNestedAnnotation __fbthrift_inst = MyStructNestedAnnotation.__new__(MyStructNestedAnnotation)
        __fbthrift_inst._cpp_obj = make_shared[cMyStructNestedAnnotation](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyStructNestedAnnotation", {
          "name": deref(self._cpp_obj).name_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructNestedAnnotation] cpp_obj):
        __fbthrift_inst = <MyStructNestedAnnotation>MyStructNestedAnnotation.__new__(MyStructNestedAnnotation)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline name_impl(self):

        return (<bytes>deref(self._cpp_obj).name_ref().value()).decode('UTF-8')

    @property
    def name(self):
        return self.name_impl()


    def __hash__(MyStructNestedAnnotation self):
        return super().__hash__()

    def __repr__(MyStructNestedAnnotation self):
        return super().__repr__()

    def __str__(MyStructNestedAnnotation self):
        return super().__str__()


    def __copy__(MyStructNestedAnnotation self):
        cdef shared_ptr[cMyStructNestedAnnotation] cpp_obj = make_shared[cMyStructNestedAnnotation](
            deref(self._cpp_obj)
        )
        return MyStructNestedAnnotation._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStructNestedAnnotation](
            self._cpp_obj,
            (<MyStructNestedAnnotation>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStructNestedAnnotation()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStructNestedAnnotation].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStructNestedAnnotation"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cMyStructNestedAnnotation](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 1

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStructNestedAnnotation self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStructNestedAnnotation](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStructNestedAnnotation self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStructNestedAnnotation]()
        with nogil:
            needed = serializer.cdeserialize[cMyStructNestedAnnotation](buf, self._cpp_obj.get(), proto)
        return needed




@__cython.auto_pickle(False)
cdef class MyUnion(thrift.py3.types.Union):
    Type = __MyUnionType

    def __init__(
        self, *
    ):
        self._cpp_obj = __to_shared_ptr(cmove(MyUnion._make_instance(
          NULL,
        )))
        self._load_cache()

    @staticmethod
    def fromValue(value):
        if value is None:
            return MyUnion()
        raise ValueError(f"Unable to derive correct union field for value: {value}")

    @staticmethod
    cdef unique_ptr[cMyUnion] _make_instance(
        cMyUnion* base_instance
    ) except *:
        cdef unique_ptr[cMyUnion] c_inst = make_unique[cMyUnion]()
        cdef bint any_set = False
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return cmove(c_inst)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyUnion] cpp_obj):
        __fbthrift_inst = <MyUnion>MyUnion.__new__(MyUnion)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        __fbthrift_inst._load_cache()
        return __fbthrift_inst


    def __hash__(MyUnion self):
        return  super().__hash__()

    cdef _load_cache(MyUnion self):
        self.type = MyUnion.Type(<int>(deref(self._cpp_obj).getType()))
        cdef int type = self.type.value
        if type == 0:    # Empty
            self.value = None

    def __copy__(MyUnion self):
        cdef shared_ptr[cMyUnion] cpp_obj = make_shared[cMyUnion](
            deref(self._cpp_obj)
        )
        return MyUnion._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyUnion](
            self._cpp_obj,
            (<MyUnion>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyUnion()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyUnion].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyUnion"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cMyUnion](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyUnion self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyUnion](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyUnion self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyUnion]()
        with nogil:
            needed = serializer.cdeserialize[cMyUnion](buf, self._cpp_obj.get(), proto)
        # force a cache reload since the underlying data's changed
        self._load_cache()
        return needed


@__cython.auto_pickle(False)
cdef class MyException(thrift.py3.exceptions.GeneratedError):
    def __init__(MyException self, *args, **kwargs):
        self._cpp_obj = make_shared[cMyException]()
        self._fields_setter = _fbthrift_types_fields.__MyException_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__( *args, **kwargs)

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyException", {
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyException] cpp_obj):
        __fbthrift_inst = <MyException>MyException.__new__(MyException, (<bytes>deref(cpp_obj).what()).decode('utf-8'))
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        _builtins.Exception.__init__(__fbthrift_inst, *(v for _, v in __fbthrift_inst))
        return __fbthrift_inst


    def __hash__(MyException self):
        return super().__hash__()

    def __repr__(MyException self):
        return super().__repr__()

    def __str__(MyException self):
        return super().__str__()


    def __copy__(MyException self):
        cdef shared_ptr[cMyException] cpp_obj = make_shared[cMyException](
            deref(self._cpp_obj)
        )
        return MyException._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyException](
            self._cpp_obj,
            (<MyException>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyException()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        ExceptionMetadata[cMyException].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyException"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cMyException](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyException self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyException](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyException self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyException]()
        with nogil:
            needed = serializer.cdeserialize[cMyException](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):
    def __init__(MyStruct self, **kwargs):
        self._cpp_obj = make_shared[cMyStruct]()
        self._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStruct self, **kwargs):
        if not kwargs:
            return self
        cdef MyStruct __fbthrift_inst = MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = make_shared[cMyStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyStruct", {
          "major": deref(self._cpp_obj).major_ref().has_value(),
          "package": deref(self._cpp_obj).package_ref().has_value(),
          "annotation_with_quote": deref(self._cpp_obj).annotation_with_quote_ref().has_value(),
          "class_": deref(self._cpp_obj).class__ref().has_value(),
          "annotation_with_trailing_comma": deref(self._cpp_obj).annotation_with_trailing_comma_ref().has_value(),
          "empty_annotations": deref(self._cpp_obj).empty_annotations_ref().has_value(),
          "my_enum": deref(self._cpp_obj).my_enum_ref().has_value(),
          "cpp_type_annotation": deref(self._cpp_obj).cpp_type_annotation_ref().has_value(),
          "my_union": deref(self._cpp_obj).my_union_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct] cpp_obj):
        __fbthrift_inst = <MyStruct>MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline major_impl(self):

        return deref(self._cpp_obj).major_ref().value()

    @property
    def major(self):
        return self.major_impl()

    cdef inline package_impl(self):

        return (<bytes>deref(self._cpp_obj).package_ref().value()).decode('UTF-8')

    @property
    def package(self):
        return self.package_impl()

    cdef inline annotation_with_quote_impl(self):

        return (<bytes>deref(self._cpp_obj).annotation_with_quote_ref().value()).decode('UTF-8')

    @property
    def annotation_with_quote(self):
        return self.annotation_with_quote_impl()

    cdef inline class__impl(self):

        return (<bytes>deref(self._cpp_obj).class__ref().value()).decode('UTF-8')

    @property
    def class_(self):
        return self.class__impl()

    cdef inline annotation_with_trailing_comma_impl(self):

        return (<bytes>deref(self._cpp_obj).annotation_with_trailing_comma_ref().value()).decode('UTF-8')

    @property
    def annotation_with_trailing_comma(self):
        return self.annotation_with_trailing_comma_impl()

    cdef inline empty_annotations_impl(self):

        return (<bytes>deref(self._cpp_obj).empty_annotations_ref().value()).decode('UTF-8')

    @property
    def empty_annotations(self):
        return self.empty_annotations_impl()

    cdef inline my_enum_impl(self):

        if self.__fbthrift_cached_my_enum is None:
            self.__fbthrift_cached_my_enum = translate_cpp_enum_to_python(MyEnum, <int>(deref(self._cpp_obj).my_enum_ref().value()))
        return self.__fbthrift_cached_my_enum

    @property
    def my_enum(self):
        return self.my_enum_impl()

    cdef inline cpp_type_annotation_impl(self):

        if self.__fbthrift_cached_cpp_type_annotation is None:
            self.__fbthrift_cached_cpp_type_annotation = std_deque_std_string__List__string._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).cpp_type_annotation_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_cpp_type_annotation

    @property
    def cpp_type_annotation(self):
        return self.cpp_type_annotation_impl()

    cdef inline my_union_impl(self):

        if self.__fbthrift_cached_my_union is None:
            self.__fbthrift_cached_my_union = MyUnion._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).my_union_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_my_union

    @property
    def my_union(self):
        return self.my_union_impl()


    def __hash__(MyStruct self):
        return super().__hash__()

    def __repr__(MyStruct self):
        return super().__repr__()

    def __str__(MyStruct self):
        return super().__str__()


    def __copy__(MyStruct self):
        cdef shared_ptr[cMyStruct] cpp_obj = make_shared[cMyStruct](
            deref(self._cpp_obj)
        )
        return MyStruct._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStruct](
            self._cpp_obj,
            (<MyStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cMyStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 9

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        with nogil:
            needed = serializer.cdeserialize[cMyStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class SecretStruct(thrift.py3.types.Struct):
    def __init__(SecretStruct self, **kwargs):
        self._cpp_obj = make_shared[cSecretStruct]()
        self._fields_setter = _fbthrift_types_fields.__SecretStruct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(SecretStruct self, **kwargs):
        if not kwargs:
            return self
        cdef SecretStruct __fbthrift_inst = SecretStruct.__new__(SecretStruct)
        __fbthrift_inst._cpp_obj = make_shared[cSecretStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__SecretStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("SecretStruct", {
          "id": deref(self._cpp_obj).id_ref().has_value(),
          "password": deref(self._cpp_obj).password_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cSecretStruct] cpp_obj):
        __fbthrift_inst = <SecretStruct>SecretStruct.__new__(SecretStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline id_impl(self):

        return deref(self._cpp_obj).id_ref().value()

    @property
    def id(self):
        return self.id_impl()

    cdef inline password_impl(self):

        return (<bytes>deref(self._cpp_obj).password_ref().value()).decode('UTF-8')

    @property
    def password(self):
        return self.password_impl()


    def __hash__(SecretStruct self):
        return super().__hash__()

    def __repr__(SecretStruct self):
        return super().__repr__()

    def __str__(SecretStruct self):
        return super().__str__()


    def __copy__(SecretStruct self):
        cdef shared_ptr[cSecretStruct] cpp_obj = make_shared[cSecretStruct](
            deref(self._cpp_obj)
        )
        return SecretStruct._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cSecretStruct](
            self._cpp_obj,
            (<SecretStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__SecretStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cSecretStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.SecretStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cSecretStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 2

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(SecretStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cSecretStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(SecretStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cSecretStruct]()
        with nogil:
            needed = serializer.cdeserialize[cSecretStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class std_deque_std_string__List__string(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, std_deque_std_string__List__string):
            self._cpp_obj = (<std_deque_std_string__List__string> items)._cpp_obj
        else:
            self._cpp_obj = std_deque_std_string__List__string._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[std_deque_std_string] c_items):
        __fbthrift_inst = <std_deque_std_string__List__string>std_deque_std_string__List__string.__new__(std_deque_std_string__List__string)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(std_deque_std_string__List__string self):
        cdef shared_ptr[std_deque_std_string] cpp_obj = make_shared[std_deque_std_string](
            deref(self._cpp_obj)
        )
        return std_deque_std_string__List__string._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[std_deque_std_string] _make_instance(object items) except *:
        cdef shared_ptr[std_deque_std_string] c_inst = make_shared[std_deque_std_string]()
        if items is not None:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
            for item in items:
                if not isinstance(item, str):
                    raise TypeError(f"{item!r} is not of type str")
                deref(c_inst).push_back(item.encode('UTF-8'))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return std_deque_std_string__List__string._fbthrift_create(
            __list_slice[std_deque_std_string](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef string citem
        __list_getitem(self._cpp_obj, index, citem)
        return bytes(citem).decode('UTF-8')

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, str):
            return item

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef string citem = item.encode('UTF-8')
        cdef std_libcpp.optional[size_t] found = __list_index[std_deque_std_string](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef string citem = item.encode('UTF-8')
        return __list_count[std_deque_std_string](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__std_deque_std_string__List__string()


Sequence.register(std_deque_std_string__List__string)

myStruct = MyStruct._fbthrift_create(constant_shared_ptr(cmyStruct()))
