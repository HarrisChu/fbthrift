#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper, cClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception, create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from folly.cast cimport down_cast_ptr
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
import thrift.py3.client
cimport thrift.py3.client
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from folly.futures cimport bridgeSemiFutureWith
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport test.fixtures.interactions.module.types as _test_fixtures_interactions_module_types
import test.fixtures.interactions.module.types as _test_fixtures_interactions_module_types
from thrift.py3.stream cimport cResponseAndClientBufferedStream, cClientBufferedStream

cimport test.fixtures.interactions.module.services_reflection as _services_reflection

from test.fixtures.interactions.module.clients_wrapper cimport cMyServiceAsyncClient, cMyServiceClientWrapper
from test.fixtures.interactions.module.clients_wrapper cimport cMyServiceClientWrapper_MyInteractionInteractionWrapper
from test.fixtures.interactions.module.clients_wrapper cimport cMyServiceClientWrapper_MyInteractionFastInteractionWrapper
from test.fixtures.interactions.module.clients_wrapper cimport cMyServiceClientWrapper_SerialInteractionInteractionWrapper


cdef void MyService_foo_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void MyService_MyInteraction_frobnicate_callback(
    cFollyTry[cint32_t]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException[_test_fixtures_interactions_module_types.cCustomException]():
        try:
            exc = _test_fixtures_interactions_module_types.CustomException.create(try_make_shared_exception[_test_fixtures_interactions_module_types.cCustomException](result.exception()))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))
        else:
            pyfuture.set_exception(exc)
    elif result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(result.value())
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void MyService_MyInteraction_ping_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void MyService_MyInteraction_truthify_callback(
    cFollyTry[cClientBufferedStream[cbool]]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(_test_fixtures_interactions_module_types.ClientBufferedStream__bool.create(result.value(), options))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void MyService_MyInteractionFast_frobnicate_callback(
    cFollyTry[cint32_t]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(result.value())
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void MyService_MyInteractionFast_ping_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void MyService_MyInteractionFast_truthify_callback(
    cFollyTry[cClientBufferedStream[cbool]]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(_test_fixtures_interactions_module_types.ClientBufferedStream__bool.create(result.value(), options))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void MyService_SerialInteraction_frobnicate_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))


cdef object _MyService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class MyService(thrift.py3.client.Client):
    annotations = _MyService_annotations

    cdef const type_info* _typeid(MyService self):
        return &typeid(cMyServiceAsyncClient)

    cdef bind_client(MyService self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cMyServiceAsyncClient, cMyServiceClientWrapper](
            cmove(channel)
        )

    @cython.always_allow_keywords(True)
    def foo(
            MyService self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper, cClientWrapper](self._client.get()).foo(rpc_options._cpp_obj, 
            ),
            MyService_foo_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)


    def createMyInteraction(
            MyService self
    ):
        interaction = MyService_MyInteraction()
        bridgeSemiFutureWith[unique_ptr[cClientWrapper]](
            interaction._executor,
            down_cast_ptr[cMyServiceClientWrapper, cClientWrapper](self._client.get()).createMyInteraction(),
            thrift.py3.client.interactions_callback,
            <PyObject *> interaction
        )
        return interaction

    def createMyInteractionFast(
            MyService self
    ):
        interaction = MyService_MyInteractionFast()
        bridgeSemiFutureWith[unique_ptr[cClientWrapper]](
            interaction._executor,
            down_cast_ptr[cMyServiceClientWrapper, cClientWrapper](self._client.get()).createMyInteractionFast(),
            thrift.py3.client.interactions_callback,
            <PyObject *> interaction
        )
        return interaction

    def createSerialInteraction(
            MyService self
    ):
        interaction = MyService_SerialInteraction()
        bridgeSemiFutureWith[unique_ptr[cClientWrapper]](
            interaction._executor,
            down_cast_ptr[cMyServiceClientWrapper, cClientWrapper](self._client.get()).createSerialInteraction(),
            thrift.py3.client.interactions_callback,
            <PyObject *> interaction
        )
        return interaction

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__MyService(for_clients=True)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cMyServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyService"

@cython.auto_pickle(False)
cdef class MyService_MyInteraction(thrift.py3.client.Client):

    @cython.always_allow_keywords(True)
    def frobnicate(
            MyService_MyInteraction self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cint32_t](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper_MyInteractionInteractionWrapper, cClientWrapper](self._client.get()).frobnicate(rpc_options._cpp_obj, 
            ),
            MyService_MyInteraction_frobnicate_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def ping(
            MyService_MyInteraction self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper_MyInteractionInteractionWrapper, cClientWrapper](self._client.get()).ping(rpc_options._cpp_obj, 
            ),
            MyService_MyInteraction_ping_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def truthify(
            MyService_MyInteraction self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cClientBufferedStream[cbool]](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper_MyInteractionInteractionWrapper, cClientWrapper](self._client.get()).truthify(rpc_options._cpp_obj, 
            ),
            MyService_MyInteraction_truthify_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

@cython.auto_pickle(False)
cdef class MyService_MyInteractionFast(thrift.py3.client.Client):

    @cython.always_allow_keywords(True)
    def frobnicate(
            MyService_MyInteractionFast self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cint32_t](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper_MyInteractionFastInteractionWrapper, cClientWrapper](self._client.get()).frobnicate(rpc_options._cpp_obj, 
            ),
            MyService_MyInteractionFast_frobnicate_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def ping(
            MyService_MyInteractionFast self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper_MyInteractionFastInteractionWrapper, cClientWrapper](self._client.get()).ping(rpc_options._cpp_obj, 
            ),
            MyService_MyInteractionFast_ping_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def truthify(
            MyService_MyInteractionFast self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cClientBufferedStream[cbool]](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper_MyInteractionFastInteractionWrapper, cClientWrapper](self._client.get()).truthify(rpc_options._cpp_obj, 
            ),
            MyService_MyInteractionFast_truthify_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

@cython.auto_pickle(False)
cdef class MyService_SerialInteraction(thrift.py3.client.Client):

    @cython.always_allow_keywords(True)
    def frobnicate(
            MyService_SerialInteraction self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeSemiFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cMyServiceClientWrapper_SerialInteractionInteractionWrapper, cClientWrapper](self._client.get()).frobnicate(rpc_options._cpp_obj, 
            ),
            MyService_SerialInteraction_frobnicate_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

