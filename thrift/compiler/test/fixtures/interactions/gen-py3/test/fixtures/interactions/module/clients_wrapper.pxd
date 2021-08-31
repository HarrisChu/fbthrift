#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp cimport bool as cbool
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.set cimport set as cset
from libcpp.string cimport string
from libcpp.vector cimport vector

from folly cimport cFollySemiFuture, cFollyTry, cFollyUnit
cimport folly.iobuf as _fbthrift_iobuf
from thrift.py3.common cimport cRpcOptions
from thrift.py3.client cimport cClientWrapper

cimport test.fixtures.interactions.module.types as _test_fixtures_interactions_module_types
from thrift.py3.stream cimport cResponseAndClientBufferedStream, cClientBufferedStream


cdef extern from "src/gen-cpp2/MyService.h" namespace "::cpp2":
  cdef cppclass cMyServiceAsyncClient "::cpp2::MyServiceAsyncClient":
      pass

cdef extern from "src/gen-cpp2/MyService.h" namespace "::cpp2":
  cdef cppclass cMyServiceAsyncClient_MyInteraction "::cpp2::MyServiceAsyncClient::MyInteraction":
      pass

cdef extern from "src/gen-cpp2/MyService.h" namespace "::cpp2":
  cdef cppclass cMyServiceAsyncClient_MyInteractionFast "::cpp2::MyServiceAsyncClient::MyInteractionFast":
      pass

cdef extern from "src/gen-cpp2/MyService.h" namespace "::cpp2":
  cdef cppclass cMyServiceAsyncClient_SerialInteraction "::cpp2::MyServiceAsyncClient::SerialInteraction":
      pass

cdef extern from "<utility>" namespace "std":
  cdef unique_ptr[cMyServiceClientWrapper] move(unique_ptr[cMyServiceClientWrapper])

cdef extern from "thrift/lib/cpp/TProcessorEventHandler.h" namespace "::apache::thrift":
  cdef cppclass cTProcessorEventHandler "apache::thrift::TProcessorEventHandler":
    pass

cdef extern from "src/gen-py3/module/clients_wrapper.h" namespace "::cpp2":
  cdef cppclass cMyServiceClientWrapper "::cpp2::MyServiceClientWrapper":
    void setPersistentHeader(const string& key, const string& value)
    void addEventHandler(const shared_ptr[cTProcessorEventHandler]& handler)

    cFollySemiFuture[cFollyUnit] foo(cRpcOptions, )
    cFollySemiFuture[unique_ptr[cClientWrapper]]& createMyInteraction()
    cFollySemiFuture[unique_ptr[cClientWrapper]]& createMyInteractionFast()
    cFollySemiFuture[unique_ptr[cClientWrapper]]& createSerialInteraction()

  cdef cppclass cMyServiceClientWrapper_MyInteractionInteractionWrapper "::cpp2::MyServiceClientWrapper::MyInteractionInteractionWrapper"(cClientWrapper):
    void setPersistentHeader(const string& key, const string& value)
    void addEventHandler(const shared_ptr[cTProcessorEventHandler]& handler)

    cFollySemiFuture[cint32_t] frobnicate(cRpcOptions, )
    cFollySemiFuture[cFollyUnit] ping(cRpcOptions, )
    cFollySemiFuture[cClientBufferedStream[cbool]] truthify(cRpcOptions, )

  cdef cppclass cMyServiceClientWrapper_MyInteractionFastInteractionWrapper "::cpp2::MyServiceClientWrapper::MyInteractionFastInteractionWrapper"(cClientWrapper):
    void setPersistentHeader(const string& key, const string& value)
    void addEventHandler(const shared_ptr[cTProcessorEventHandler]& handler)

    cFollySemiFuture[cint32_t] frobnicate(cRpcOptions, )
    cFollySemiFuture[cFollyUnit] ping(cRpcOptions, )
    cFollySemiFuture[cClientBufferedStream[cbool]] truthify(cRpcOptions, )

  cdef cppclass cMyServiceClientWrapper_SerialInteractionInteractionWrapper "::cpp2::MyServiceClientWrapper::SerialInteractionInteractionWrapper"(cClientWrapper):
    void setPersistentHeader(const string& key, const string& value)
    void addEventHandler(const shared_ptr[cTProcessorEventHandler]& handler)

    cFollySemiFuture[cFollyUnit] frobnicate(cRpcOptions, )

