/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/DerivedServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace py3 { namespace simple {
typedef apache::thrift::ThriftPresult<false> DerivedService_get_six_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int32_t*>> DerivedService_get_six_presult;
}} // py3::simple
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::py3::simple::DerivedService>::get_sixT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {

  ::py3::simple::DerivedService_get_six_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "get_six",
                ::apache::thrift::FunctionQualifier::Unspecified);
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void apache::thrift::Client<::py3::simple::DerivedService>::get_six(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  get_six(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::py3::simple::DerivedService>::get_six(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = get_sixCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  get_sixImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::py3::simple::DerivedService>::get_sixImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        get_sixT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        get_sixT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        get_sixT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        get_sixT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::py3::simple::DerivedService>::get_sixCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "DerivedService.get_six",
      *header);

  return {std::move(ctx), std::move(header)};
}

::std::int32_t apache::thrift::Client<::py3::simple::DerivedService>::sync_get_six() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_get_six(rpcOptions);
}

::std::int32_t apache::thrift::Client<::py3::simple::DerivedService>::sync_get_six(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = get_sixCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      get_sixImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      return recv_get_six(returnState);
  });
}


folly::Future<::std::int32_t> apache::thrift::Client<::py3::simple::DerivedService>::future_get_six() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_get_six(rpcOptions);
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::py3::simple::DerivedService>::semifuture_get_six() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_get_six(rpcOptions);
}

folly::Future<::std::int32_t> apache::thrift::Client<::py3::simple::DerivedService>::future_get_six(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<::std::int32_t> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::int32_t>>(std::move(promise), recv_wrapped_get_six, channel_);
  get_six(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::py3::simple::DerivedService>::semifuture_get_six(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_get_six, channel_);
  auto callback = std::move(callbackAndFuture.first);
  get_six(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::py3::simple::DerivedService>::header_future_get_six(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::int32_t>>(std::move(promise), recv_wrapped_get_six, channel_);
  get_six(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::py3::simple::DerivedService>::header_semifuture_get_six(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_get_six, channel_);
  auto callback = std::move(callbackAndFuture.first);
  get_six(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::py3::simple::DerivedService>::get_six(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  get_six(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::py3::simple::DerivedService>::recv_wrapped_get_six(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::py3::simple::DerivedService_get_six_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

::std::int32_t apache::thrift::Client<::py3::simple::DerivedService>::recv_get_six(::apache::thrift::ClientReceiveState& state) {
  ::std::int32_t _return;
  auto ew = recv_wrapped_get_six(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

::std::int32_t apache::thrift::Client<::py3::simple::DerivedService>::recv_instance_get_six(::apache::thrift::ClientReceiveState& state) {
  return recv_get_six(state);
}

folly::exception_wrapper apache::thrift::Client<::py3::simple::DerivedService>::recv_instance_wrapped_get_six(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_get_six(_return, state);
}


