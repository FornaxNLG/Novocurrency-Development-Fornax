// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NativeIP2pNetworkController.hpp"  // my header
#include "Marshal.hpp"
#include "NativeIP2pNetworkListener.hpp"
#include "NativePeerRecord.hpp"

namespace djinni_generated {

NativeIP2pNetworkController::NativeIP2pNetworkController() : ::djinni::JniInterface<::IP2pNetworkController, NativeIP2pNetworkController>("com/novocurrency/jniunifiedbackend/IP2pNetworkController$CppProxy") {}

NativeIP2pNetworkController::~NativeIP2pNetworkController() = default;


CJNIEXPORT void JNICALL Java_com_novocurrency_jniunifiedbackend_IP2pNetworkController_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::IP2pNetworkController>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_novocurrency_jniunifiedbackend_IP2pNetworkController_00024CppProxy_setListener(JNIEnv* jniEnv, jobject /*this*/, jobject j_networklistener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::IP2pNetworkController::setListener(::djinni_generated::NativeIP2pNetworkListener::toCpp(jniEnv, j_networklistener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_novocurrency_jniunifiedbackend_IP2pNetworkController_00024CppProxy_disableNetwork(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::IP2pNetworkController::disableNetwork();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_novocurrency_jniunifiedbackend_IP2pNetworkController_00024CppProxy_enableNetwork(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::IP2pNetworkController::enableNetwork();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_novocurrency_jniunifiedbackend_IP2pNetworkController_00024CppProxy_getPeerInfo(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::IP2pNetworkController::getPeerInfo();
        return ::djinni::release(::djinni::List<::djinni_generated::NativePeerRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
