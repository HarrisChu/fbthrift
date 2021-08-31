/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace apache {
namespace thrift {
namespace fixtures {
namespace types {


folly::SemiFuture<std::unordered_map<int32_t,std::string>>
SomeServiceClientWrapper::bounce_map(
    apache::thrift::RpcOptions& rpcOptions,
    std::unordered_map<int32_t,std::string> arg_m) {
  auto* client = static_cast<::apache::thrift::fixtures::types::SomeServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_bounce_map(
    rpcOptions,
    arg_m
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::map<std::string,int64_t>>
SomeServiceClientWrapper::binary_keyed_map(
    apache::thrift::RpcOptions& rpcOptions,
    std::vector<int64_t> arg_r) {
  auto* client = static_cast<::apache::thrift::fixtures::types::SomeServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_binary_keyed_map(
    rpcOptions,
    arg_r
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

} // namespace apache
} // namespace thrift
} // namespace fixtures
} // namespace types
