/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/PubSubStreamingService.h>

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

class PubSubStreamingServiceClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> returnstream(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_i32_from,
      int32_t arg_i32_to);
    folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> streamthrows(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_foo);
    folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> boththrows(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_foo);
    folly::SemiFuture<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> responseandstreamthrows(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_foo);
    folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> returnstreamFast(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_i32_from,
      int32_t arg_i32_to);
};


} // namespace cpp2
