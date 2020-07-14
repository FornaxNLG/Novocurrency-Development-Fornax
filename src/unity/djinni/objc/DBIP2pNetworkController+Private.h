// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "i_p2p_network_controller.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBIP2pNetworkController;

namespace djinni_generated {

class IP2pNetworkController
{
public:
    using CppType = std::shared_ptr<::IP2pNetworkController>;
    using CppOptType = std::shared_ptr<::IP2pNetworkController>;
    using ObjcType = DBIP2pNetworkController*;

    using Boxed = IP2pNetworkController;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

