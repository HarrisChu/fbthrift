/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {


folly::SemiFuture<folly::Unit>
RaiserClientWrapper::doBland(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::RaiserAsyncClient*>(async_client_.get());
  return client->header_semifuture_doBland(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
RaiserClientWrapper::doRaise(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::RaiserAsyncClient*>(async_client_.get());
  return client->header_semifuture_doRaise(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::string>
RaiserClientWrapper::get200(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::RaiserAsyncClient*>(async_client_.get());
  return client->header_semifuture_get200(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::string>
RaiserClientWrapper::get500(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::cpp2::RaiserAsyncClient*>(async_client_.get());
  return client->header_semifuture_get500(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

} // namespace cpp2
