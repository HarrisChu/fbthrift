/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/Service.h>

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/client_wrapper.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

class ServiceClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::SemiFuture<int32_t> func(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_arg1,
      ::cpp2::Foo arg_arg2);
};


} // namespace cpp2
