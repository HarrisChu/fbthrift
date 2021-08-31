/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace some {
namespace valid {
namespace ns {


folly::SemiFuture<folly::Unit>
ReturnServiceClientWrapper::noReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_noReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<bool>
ReturnServiceClientWrapper::boolReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_boolReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int16_t>
ReturnServiceClientWrapper::i16Return(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_i16Return(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int32_t>
ReturnServiceClientWrapper::i32Return(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_i32Return(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int64_t>
ReturnServiceClientWrapper::i64Return(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_i64Return(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<float>
ReturnServiceClientWrapper::floatReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_floatReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<double>
ReturnServiceClientWrapper::doubleReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_doubleReturn(
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
ReturnServiceClientWrapper::stringReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_stringReturn(
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
ReturnServiceClientWrapper::binaryReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_binaryReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::map<std::string,int64_t>>
ReturnServiceClientWrapper::mapReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_mapReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int32_t>
ReturnServiceClientWrapper::simpleTypedefReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_simpleTypedefReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>>>
ReturnServiceClientWrapper::complexTypedefReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_complexTypedefReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<std::vector<std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>>>>>
ReturnServiceClientWrapper::list_mostComplexTypedefReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_list_mostComplexTypedefReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<::some::valid::ns::MyEnumA>
ReturnServiceClientWrapper::enumReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_enumReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<::some::valid::ns::MyEnumA>>
ReturnServiceClientWrapper::list_EnumReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_list_EnumReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<::some::valid::ns::MyStruct>
ReturnServiceClientWrapper::structReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_structReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::set<::some::valid::ns::MyStruct>>
ReturnServiceClientWrapper::set_StructReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_set_StructReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<::some::valid::ns::ComplexUnion>
ReturnServiceClientWrapper::unionReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_unionReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<::some::valid::ns::ComplexUnion>>
ReturnServiceClientWrapper::list_UnionReturn(
    apache::thrift::RpcOptions& rpcOptions) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_list_UnionReturn(
    rpcOptions
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::IOBuf>
ReturnServiceClientWrapper::readDataEb(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_size) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_readDataEb(
    rpcOptions,
    arg_size
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::unique_ptr<folly::IOBuf>>
ReturnServiceClientWrapper::readData(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_size) {
  auto* client = static_cast<::some::valid::ns::ReturnServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_readData(
    rpcOptions,
    arg_size
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_i16_param(
    apache::thrift::RpcOptions& rpcOptions,
    int16_t arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_i16_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_byte_i16_param(
    apache::thrift::RpcOptions& rpcOptions,
    int8_t arg_param1,
    int16_t arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_byte_i16_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_map_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::map<std::string,int64_t> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_map_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_map_setlist_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::map<std::string,int64_t> arg_param1,
    std::set<std::vector<std::string>> arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_map_setlist_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_map_typedef_param(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_map_typedef_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_enum_param(
    apache::thrift::RpcOptions& rpcOptions,
    ::some::valid::ns::MyEnumA arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_enum_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_struct_param(
    apache::thrift::RpcOptions& rpcOptions,
    ::some::valid::ns::MyStruct arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_struct_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<folly::Unit>
ParamServiceClientWrapper::void_ret_listunion_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::vector<::some::valid::ns::ComplexUnion> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_void_ret_listunion_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<bool>
ParamServiceClientWrapper::bool_ret_i32_i64_param(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_param1,
    int64_t arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_bool_ret_i32_i64_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<bool>
ParamServiceClientWrapper::bool_ret_map_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::map<std::string,int64_t> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_bool_ret_map_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<bool>
ParamServiceClientWrapper::bool_ret_union_param(
    apache::thrift::RpcOptions& rpcOptions,
    ::some::valid::ns::ComplexUnion arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_bool_ret_union_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int64_t>
ParamServiceClientWrapper::i64_ret_float_double_param(
    apache::thrift::RpcOptions& rpcOptions,
    float arg_param1,
    double arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_i64_ret_float_double_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int64_t>
ParamServiceClientWrapper::i64_ret_string_typedef_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::string arg_param1,
    std::set<std::vector<std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>>>> arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_i64_ret_string_typedef_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int64_t>
ParamServiceClientWrapper::i64_ret_i32_i32_i32_i32_i32_param(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_param1,
    int32_t arg_param2,
    int32_t arg_param3,
    int32_t arg_param4,
    int32_t arg_param5) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_i64_ret_i32_i32_i32_i32_i32_param(
    rpcOptions,
    arg_param1,
    arg_param2,
    arg_param3,
    arg_param4,
    arg_param5
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<double>
ParamServiceClientWrapper::double_ret_setstruct_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::set<::some::valid::ns::MyStruct> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_double_ret_setstruct_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::string>
ParamServiceClientWrapper::string_ret_string_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::string arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_string_ret_string_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::string>
ParamServiceClientWrapper::binary_ret_binary_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::string arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_binary_ret_binary_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::map<std::string,int64_t>>
ParamServiceClientWrapper::map_ret_bool_param(
    apache::thrift::RpcOptions& rpcOptions,
    bool arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_map_ret_bool_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<bool>>
ParamServiceClientWrapper::list_ret_map_setlist_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::map<int32_t,std::vector<std::string>> arg_param1,
    std::vector<std::string> arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_list_ret_map_setlist_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::map<std::set<std::vector<int32_t>>,std::map<std::vector<std::set<std::string>>,std::string>>>
ParamServiceClientWrapper::mapsetlistmapliststring_ret_listlistlist_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::vector<std::vector<std::vector<std::vector<int32_t>>>> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_mapsetlistmapliststring_ret_listlistlist_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<int32_t>
ParamServiceClientWrapper::typedef_ret_i32_param(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_typedef_ret_i32_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<int32_t>>
ParamServiceClientWrapper::listtypedef_ret_typedef_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_listtypedef_ret_typedef_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<::some::valid::ns::MyEnumA>
ParamServiceClientWrapper::enum_ret_double_param(
    apache::thrift::RpcOptions& rpcOptions,
    double arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_enum_ret_double_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<::some::valid::ns::MyEnumA>
ParamServiceClientWrapper::enum_ret_double_enum_param(
    apache::thrift::RpcOptions& rpcOptions,
    double arg_param1,
    ::some::valid::ns::MyEnumA arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_enum_ret_double_enum_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<::some::valid::ns::MyEnumA>>
ParamServiceClientWrapper::listenum_ret_map_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::map<std::string,int64_t> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_listenum_ret_map_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<::some::valid::ns::MyStruct>
ParamServiceClientWrapper::struct_ret_i16_param(
    apache::thrift::RpcOptions& rpcOptions,
    int16_t arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_struct_ret_i16_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::set<::some::valid::ns::MyStruct>>
ParamServiceClientWrapper::setstruct_ret_set_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::set<std::string> arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_setstruct_ret_set_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<::some::valid::ns::ComplexUnion>
ParamServiceClientWrapper::union_ret_i32_i32_param(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_param1,
    int32_t arg_param2) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_union_ret_i32_i32_param(
    rpcOptions,
    arg_param1,
    arg_param2
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

folly::SemiFuture<std::vector<::some::valid::ns::ComplexUnion>>
ParamServiceClientWrapper::listunion_string_param(
    apache::thrift::RpcOptions& rpcOptions,
    std::string arg_param1) {
  auto* client = static_cast<::some::valid::ns::ParamServiceAsyncClient*>(async_client_.get());
  return client->header_semifuture_listunion_string_param(
    rpcOptions,
    arg_param1
  ).deferValue([&](auto pair){
      auto& header = *pair.second;
      if (!header.getHeaders().empty()) {
        rpcOptions.setReadHeaders(header.releaseHeaders());
      }
      return std::move(pair.first);
  });
  
}

} // namespace some
} // namespace valid
} // namespace ns
