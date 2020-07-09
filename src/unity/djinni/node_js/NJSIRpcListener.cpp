// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NJSIRpcListener.hpp"
using namespace std;

void NJSIRpcListener::onSuccess_aimpl__(const std::string & filteredCommand, const std::string & result)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::String::New(env, filteredCommand);
    args.push_back(arg_0);
    auto arg_1 = Napi::String::New(env, result);
    args.push_back(arg_1);
    Napi::Value calling_function_as_value = Value().Get("onSuccess");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onSuccess = calling_function.Call(args);
        if(result_onSuccess.IsEmpty())
        {
            Napi::Error::New(env, "NJSIRpcListener::onSuccess call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

void NJSIRpcListener::onSuccess(const std::string & filteredCommand, const std::string & result)
{
    uv_work_t* request = new uv_work_t;
    request->data = new std::tuple<NJSIRpcListener*, std::string, std::string>(this, filteredCommand, result);

    uv_queue_work(uv_default_loop(), request, [](uv_work_t*) -> void{}, [](uv_work_t* req, int status) -> void
    {
        NJSIRpcListener* pthis = std::get<0>(*((std::tuple<NJSIRpcListener*, std::string, std::string>*)req->data));
        pthis->onSuccess_aimpl__(std::get<1>(*((std::tuple<NJSIRpcListener*, std::string, std::string>*)req->data)), std::get<2>(*((std::tuple<NJSIRpcListener*, std::string, std::string>*)req->data)));
        delete (std::tuple<NJSIRpcListener*, std::string, std::string>*)req->data;
        req->data = nullptr;
    }
    );
}

void NJSIRpcListener::onError_aimpl__(const std::string & errorMessage)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::String::New(env, errorMessage);
    args.push_back(arg_0);
    Napi::Value calling_function_as_value = Value().Get("onError");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onError = calling_function.Call(args);
        if(result_onError.IsEmpty())
        {
            Napi::Error::New(env, "NJSIRpcListener::onError call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

void NJSIRpcListener::onError(const std::string & errorMessage)
{
    uv_work_t* request = new uv_work_t;
    request->data = new std::tuple<NJSIRpcListener*, std::string>(this, errorMessage);

    uv_queue_work(uv_default_loop(), request, [](uv_work_t*) -> void{}, [](uv_work_t* req, int status) -> void
    {
        NJSIRpcListener* pthis = std::get<0>(*((std::tuple<NJSIRpcListener*, std::string>*)req->data));
        pthis->onError_aimpl__(std::get<1>(*((std::tuple<NJSIRpcListener*, std::string>*)req->data)));
        delete (std::tuple<NJSIRpcListener*, std::string>*)req->data;
        req->data = nullptr;
    }
    );
}

Napi::FunctionReference NJSIRpcListener::constructor;

Napi::Object NJSIRpcListener::Init(Napi::Env env, Napi::Object exports) {

    Napi::Function func = DefineClass(env, "NJSIRpcListener",{});
    constructor = Napi::Persistent(func);
    constructor.SuppressDestruct();
    exports.Set("NJSIRpcListener", func);
    return exports;
}
