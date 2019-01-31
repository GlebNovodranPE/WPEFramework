//
// generated automatically from "IAVNClient.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IAVNClient
//

#include "IAVNClient.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IAVNClient interface stub definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0 
//  (1) virtual void Launch(const string &) = 0 

ProxyStub::MethodHandler AVNClientStubMethods[] = {
    // virtual uint32_t Configure(PluginHost::IShell *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        PluginHost::IShell * param0 = reader.Number<PluginHost::IShell *>();
        ASSERT((param0 != nullptr) && "Null IAVNClient interface pointer (IAVNClient::Configure() stub)");
        PluginHost::IShell * param0_proxy = RPC::Administrator::Instance().CreateProxy<PluginHost::IShell>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create PluginHost::IShell proxy (IAVNClient::Configure() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate PluginHost::IShell proxy (IAVNClient::Configure() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IAVNClient * implementation = input.Implementation<IAVNClient>();
            ASSERT((implementation != nullptr) && "Null IAVNClient implementation pointer (IAVNClient::Configure() stub)");
            const uint32_t output = implementation->Configure(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("PluginHost::IShell::Release() failed (IAVNClient::Configure() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual void Launch(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IAVNClient * implementation = input.Implementation<IAVNClient>();
        ASSERT((implementation != nullptr) && "Null IAVNClient implementation pointer (IAVNClient::Launch() stub)");
        implementation->Launch(param0);
    },

    nullptr
}; // AVNClientStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IAVNClient interface proxy definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0 
//  (1) virtual void Launch(const string &) = 0 

class AVNClientProxy final : public ProxyStub::UnknownProxyType<IAVNClient> {
public:
    AVNClientProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    uint32_t Configure(PluginHost::IShell * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<PluginHost::IShell *>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    void Launch(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class AVNClientProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IAVNClient, AVNClientStubMethods, ProxyStub::UnknownStub> AVNClientStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IAVNClient, AVNClientProxy, AVNClientStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

