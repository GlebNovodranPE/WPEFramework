//
// generated automatically from "IRtspClient.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IRtspClient
//

#include "IRtspClient.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IRtspClient interface stub definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0 
//  (1) virtual uint32_t Setup(const string &, uint32_t) = 0 
//  (2) virtual uint32_t Play(int32_t, uint32_t) = 0 
//  (3) virtual uint32_t Teardown() = 0 
//  (4) virtual void Set(const string &, const string &) = 0 
//  (5) virtual string Get(const string &) const = 0 

ProxyStub::MethodHandler RtspClientStubMethods[] = {
    // virtual uint32_t Configure(PluginHost::IShell *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        PluginHost::IShell * param0 = reader.Number<PluginHost::IShell *>();
        ASSERT((param0 != nullptr) && "Null IRtspClient interface pointer (IRtspClient::Configure() stub)");
        PluginHost::IShell * param0_proxy = RPC::Administrator::Instance().CreateProxy<PluginHost::IShell>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create PluginHost::IShell proxy (IRtspClient::Configure() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate PluginHost::IShell proxy (IRtspClient::Configure() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IRtspClient * implementation = input.Implementation<IRtspClient>();
            ASSERT((implementation != nullptr) && "Null IRtspClient implementation pointer (IRtspClient::Configure() stub)");
            const uint32_t output = implementation->Configure(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("PluginHost::IShell::Release() failed (IRtspClient::Configure() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual uint32_t Setup(const string &, uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const uint32_t param1 = reader.Number<uint32_t>();

        // call implementation
        IRtspClient * implementation = input.Implementation<IRtspClient>();
        ASSERT((implementation != nullptr) && "Null IRtspClient implementation pointer (IRtspClient::Setup() stub)");
        const uint32_t output = implementation->Setup(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t Play(int32_t, uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const int32_t param0 = reader.Number<int32_t>();
        const uint32_t param1 = reader.Number<uint32_t>();

        // call implementation
        IRtspClient * implementation = input.Implementation<IRtspClient>();
        ASSERT((implementation != nullptr) && "Null IRtspClient implementation pointer (IRtspClient::Play() stub)");
        const uint32_t output = implementation->Play(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t Teardown() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IRtspClient * implementation = input.Implementation<IRtspClient>();
        ASSERT((implementation != nullptr) && "Null IRtspClient implementation pointer (IRtspClient::Teardown() stub)");
        const uint32_t output = implementation->Teardown();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual void Set(const string &, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const string param1 = reader.Text();

        // call implementation
        IRtspClient * implementation = input.Implementation<IRtspClient>();
        ASSERT((implementation != nullptr) && "Null IRtspClient implementation pointer (IRtspClient::Set() stub)");
        implementation->Set(param0, param1);
    },

    // virtual string Get(const string &) const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        const IRtspClient * implementation = input.Implementation<IRtspClient>();
        ASSERT((implementation != nullptr) && "Null IRtspClient implementation pointer (IRtspClient::Get() stub)");
        const string output = implementation->Get(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    nullptr
}; // RtspClientStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IRtspClient interface proxy definitions
//
// Methods:
//  (0) virtual uint32_t Configure(PluginHost::IShell *) = 0 
//  (1) virtual uint32_t Setup(const string &, uint32_t) = 0 
//  (2) virtual uint32_t Play(int32_t, uint32_t) = 0 
//  (3) virtual uint32_t Teardown() = 0 
//  (4) virtual void Set(const string &, const string &) = 0 
//  (5) virtual string Get(const string &) const = 0 

class RtspClientProxy final : public ProxyStub::UnknownProxyType<IRtspClient> {
public:
    RtspClientProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
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

    uint32_t Setup(const string & param0, uint32_t param1) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Number<const uint32_t>(param1);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Play(int32_t param0, uint32_t param1) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const int32_t>(param0);
        writer.Number<const uint32_t>(param1);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Teardown() override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    void Set(const string & param0, const string & param1) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Text(param1);

        Invoke(newMessage);
    }

    string Get(const string & param0) const override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }
}; // class RtspClientProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IRtspClient, RtspClientStubMethods, ProxyStub::UnknownStub> RtspClientStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IRtspClient, RtspClientProxy, RtspClientStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

