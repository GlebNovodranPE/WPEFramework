//
// generated automatically from "IRPCLink.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IRPCLink
//   - class ::WPEFramework::Exchange::IRPCLink::INotification
//

#include "IRPCLink.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IRPCLink interface stub definitions
//
// Methods:
//  (0) virtual void Register(IRPCLink::INotification *) = 0
//  (1) virtual void Unregister(IRPCLink::INotification *) = 0
//  (2) virtual uint32_t Start(const uint32_t, const string &) = 0
//  (3) virtual uint32_t Stop() = 0
//  (4) virtual uint32_t ForceCallback() = 0

ProxyStub::MethodHandler RPCLinkStubMethods[] = {
    // virtual void Register(IRPCLink::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IRPCLink::INotification * param0 = reader.Number<IRPCLink::INotification *>();
        ASSERT((param0 != nullptr) && "Null IRPCLink interface pointer (IRPCLink::Register() stub)");
        IRPCLink::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IRPCLink::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IRPCLink::INotification proxy (IRPCLink::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IRPCLink::INotification proxy (IRPCLink::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IRPCLink * implementation = input.Implementation<IRPCLink>();
            ASSERT((implementation != nullptr) && "Null IRPCLink implementation pointer (IRPCLink::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IRPCLink::INotification::Release() failed (IRPCLink::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IRPCLink::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IRPCLink::INotification * param0 = reader.Number<IRPCLink::INotification *>();
        ASSERT((param0 != nullptr) && "Null IRPCLink interface pointer (IRPCLink::Unregister() stub)");
        IRPCLink::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IRPCLink::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IRPCLink::INotification proxy (IRPCLink::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IRPCLink::INotification proxy (IRPCLink::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IRPCLink * implementation = input.Implementation<IRPCLink>();
            ASSERT((implementation != nullptr) && "Null IRPCLink implementation pointer (IRPCLink::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IRPCLink::INotification::Release() failed (IRPCLink::Unregister() stub)");
            }
        }
    },

    // virtual uint32_t Start(const uint32_t, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();
        const string param1 = reader.Text();

        // call implementation
        IRPCLink * implementation = input.Implementation<IRPCLink>();
        ASSERT((implementation != nullptr) && "Null IRPCLink implementation pointer (IRPCLink::Start() stub)");
        const uint32_t output = implementation->Start(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t Stop() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IRPCLink * implementation = input.Implementation<IRPCLink>();
        ASSERT((implementation != nullptr) && "Null IRPCLink implementation pointer (IRPCLink::Stop() stub)");
        const uint32_t output = implementation->Stop();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual uint32_t ForceCallback() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IRPCLink * implementation = input.Implementation<IRPCLink>();
        ASSERT((implementation != nullptr) && "Null IRPCLink implementation pointer (IRPCLink::ForceCallback() stub)");
        const uint32_t output = implementation->ForceCallback();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    nullptr
}; // RPCLinkStubMethods[]

//
// IRPCLink::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Completed(const uint32_t, const string &) = 0

ProxyStub::MethodHandler RPCLinkNotificationStubMethods[] = {
    // virtual void Completed(const uint32_t, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();
        const string param1 = reader.Text();

        // call implementation
        IRPCLink::INotification * implementation = input.Implementation<IRPCLink::INotification>();
        ASSERT((implementation != nullptr) && "Null IRPCLink::INotification implementation pointer (IRPCLink::INotification::Completed() stub)");
        implementation->Completed(param0, param1);
    },

    nullptr
}; // RPCLinkNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IRPCLink interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IRPCLink::INotification *) = 0
//  (1) virtual void Unregister(IRPCLink::INotification *) = 0
//  (2) virtual uint32_t Start(const uint32_t, const string &) = 0
//  (3) virtual uint32_t Stop() = 0
//  (4) virtual uint32_t ForceCallback() = 0

class RPCLinkProxy final : public ProxyStub::UnknownProxyType<IRPCLink> {
public:
    RPCLinkProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IRPCLink::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IRPCLink::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IRPCLink::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IRPCLink::INotification *>(param0);

        Invoke(newMessage);
    }

    uint32_t Start(const uint32_t param0, const string & param1) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);
        writer.Text(param1);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t Stop() override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    uint32_t ForceCallback() override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }
}; // class RPCLinkProxy

//
// IRPCLink::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Completed(const uint32_t, const string &) = 0

class RPCLinkNotificationProxy final : public ProxyStub::UnknownProxyType<IRPCLink::INotification> {
public:
    RPCLinkNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Completed(const uint32_t param0, const string & param1) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);
        writer.Text(param1);

        Invoke(newMessage);
    }
}; // class RPCLinkNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IRPCLink::INotification, RPCLinkNotificationStubMethods, ProxyStub::UnknownStub> RPCLinkNotificationStub;
typedef ProxyStub::StubType<IRPCLink, RPCLinkStubMethods, ProxyStub::UnknownStub> RPCLinkStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IRPCLink::INotification, RPCLinkNotificationProxy, RPCLinkNotificationStub>();
        RPC::Administrator::Instance().Announce<IRPCLink, RPCLinkProxy, RPCLinkStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

