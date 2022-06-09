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
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types
import facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport test.fixtures.enums.module.types_reflection as _types_reflection


cdef __EnumData __Metasyntactic_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMetasyntactic](), Metasyntactic)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MetasyntacticMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __Metasyntactic_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __Metasyntactic_enum_data.get_all_names()

    def __len__(cls):
        return __Metasyntactic_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __Metasyntactic_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class Metasyntactic(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __Metasyntactic_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMetasyntactic].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Metasyntactic"


__SetMetaClass(<PyTypeObject*> Metasyntactic, <PyTypeObject*> __MetasyntacticMeta)



@__cython.auto_pickle(False)
cdef class SomeStruct(thrift.py3.types.Struct):
    def __init__(SomeStruct self, **kwargs):
        self._cpp_obj = make_shared[cSomeStruct]()
        self._fields_setter = _fbthrift_types_fields.__SomeStruct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(SomeStruct self, **kwargs):
        if not kwargs:
            return self
        cdef SomeStruct __fbthrift_inst = SomeStruct.__new__(SomeStruct)
        __fbthrift_inst._cpp_obj = make_shared[cSomeStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__SomeStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("SomeStruct", {
          "reasonable": deref(self._cpp_obj).reasonable_ref().has_value(),
          "fine": deref(self._cpp_obj).fine_ref().has_value(),
          "questionable": deref(self._cpp_obj).questionable_ref().has_value(),
          "tags": deref(self._cpp_obj).tags_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cSomeStruct] cpp_obj):
        __fbthrift_inst = <SomeStruct>SomeStruct.__new__(SomeStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline reasonable_impl(self):

        if self.__fbthrift_cached_reasonable is None:
            self.__fbthrift_cached_reasonable = translate_cpp_enum_to_python(Metasyntactic, <int>(deref(self._cpp_obj).reasonable_ref().value()))
        return self.__fbthrift_cached_reasonable

    @property
    def reasonable(self):
        return self.reasonable_impl()

    cdef inline fine_impl(self):

        if self.__fbthrift_cached_fine is None:
            self.__fbthrift_cached_fine = translate_cpp_enum_to_python(Metasyntactic, <int>(deref(self._cpp_obj).fine_ref().value()))
        return self.__fbthrift_cached_fine

    @property
    def fine(self):
        return self.fine_impl()

    cdef inline questionable_impl(self):

        if self.__fbthrift_cached_questionable is None:
            self.__fbthrift_cached_questionable = translate_cpp_enum_to_python(Metasyntactic, <int>(deref(self._cpp_obj).questionable_ref().value()))
        return self.__fbthrift_cached_questionable

    @property
    def questionable(self):
        return self.questionable_impl()

    cdef inline tags_impl(self):

        if self.__fbthrift_cached_tags is None:
            self.__fbthrift_cached_tags = Set__i32._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).tags_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_tags

    @property
    def tags(self):
        return self.tags_impl()


    def __hash__(SomeStruct self):
        return super().__hash__()

    def __repr__(SomeStruct self):
        return super().__repr__()

    def __str__(SomeStruct self):
        return super().__str__()


    def __copy__(SomeStruct self):
        cdef shared_ptr[cSomeStruct] cpp_obj = make_shared[cSomeStruct](
            deref(self._cpp_obj)
        )
        return SomeStruct._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cSomeStruct](
            self._cpp_obj,
            (<SomeStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__SomeStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cSomeStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.SomeStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cSomeStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 4

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(SomeStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cSomeStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(SomeStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cSomeStruct]()
        with nogil:
            needed = serializer.cdeserialize[cSomeStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class Set__i32(thrift.py3.types.Set):
    def __init__(self, items=None):
        if isinstance(items, Set__i32):
            self._cpp_obj = (<Set__i32> items)._cpp_obj
        else:
            self._cpp_obj = Set__i32._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[cint32_t]] c_items):
        __fbthrift_inst = <Set__i32>Set__i32.__new__(Set__i32)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(Set__i32 self):
        cdef shared_ptr[cset[cint32_t]] cpp_obj = make_shared[cset[cint32_t]](
            deref(self._cpp_obj)
        )
        return Set__i32._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[cset[cint32_t]] _make_instance(object items) except *:
        cdef shared_ptr[cset[cint32_t]] c_inst = make_shared[cset[cint32_t]]()
        if items is not None:
            for item in items:
                if not isinstance(item, int):
                    raise TypeError(f"{item!r} is not of type int")
                item = <cint32_t> item
                deref(c_inst).insert(item)
        return c_inst

    def __contains__(self, item):
        if not self or item is None:
            return False
        if not isinstance(item, int):
            return False
        return pbool(deref(self._cpp_obj).count(item))


    def __iter__(self):
        if not self:
            return
        cdef __set_iter[cset[cint32_t]] itr = __set_iter[cset[cint32_t]](self._cpp_obj)
        cdef cint32_t citem = 0
        for i in range(deref(self._cpp_obj).size()):
            itr.genNext(self._cpp_obj, citem)
            yield citem

    def __hash__(self):
        return super().__hash__()

    def __richcmp__(self, other, int op):
        if isinstance(other, Set__i32):
            # C level comparisons
            return __setcmp(
                self._cpp_obj,
                (<Set__i32> other)._cpp_obj,
                op,
            )
        return self._fbthrift_py_richcmp(other, op)

    cdef _fbthrift_do_set_op(self, other, __cSetOp op):
        if not isinstance(other, Set__i32):
            other = Set__i32(other)
        cdef shared_ptr[cset[cint32_t]] result
        return Set__i32._fbthrift_create(__set_op[cset[cint32_t]](
            self._cpp_obj,
            (<Set__i32>other)._cpp_obj,
            op,
        ))

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Set__i32()


Set.register(Set__i32)

