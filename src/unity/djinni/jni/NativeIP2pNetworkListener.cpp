// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NativeIP2pNetworkListener.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeIP2pNetworkListener::NativeIP2pNetworkListener() : ::djinni::JniInterface<::IP2pNetworkListener, NativeIP2pNetworkListener>() {}

NativeIP2pNetworkListener::~NativeIP2pNetworkListener() = default;

NativeIP2pNetworkListener::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeIP2pNetworkListener::JavaProxy::~JavaProxy() = default;

void NativeIP2pNetworkListener::JavaProxy::onNetworkEnabled() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeIP2pNetworkListener>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onNetworkEnabled);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeIP2pNetworkListener::JavaProxy::onNetworkDisabled() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeIP2pNetworkListener>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onNetworkDisabled);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeIP2pNetworkListener::JavaProxy::onConnectionCountChanged(int32_t c_numConnections) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeIP2pNetworkListener>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onConnectionCountChanged,
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_numConnections)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeIP2pNetworkListener::JavaProxy::onBytesChanged(int32_t c_totalRecv, int32_t c_totalSent) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeIP2pNetworkListener>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onBytesChanged,
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_totalRecv)),
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_totalSent)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
