/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/ExtendTestService.h>
#include <gen-py3/hsmodule/clients_wrapper.h>

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

class ExtendTestServiceClientWrapper : public ::cpp2::HsTestServiceClientWrapper {
  public:
    using ::cpp2::HsTestServiceClientWrapper::HsTestServiceClientWrapper;

    folly::SemiFuture<bool> check(
      apache::thrift::RpcOptions& rpcOptions,
      ::cpp2::HsFoo arg_struct1);
};


} // namespace cpp2
