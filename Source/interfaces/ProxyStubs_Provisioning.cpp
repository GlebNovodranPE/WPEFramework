//
// generated automatically from "IProvisioning.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IProvisioning
//   - class ::WPEFramework::Exchange::IProvisioning::INotification
//

#include "IProvisioning.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IProvisioning interface stub definitions
//
// Methods:
//  (0) virtual void Register(IProvisioning::INotification *) = 0 
//  (1) virtual void Unregister(IProvisioning::INotification *) = 0 

ProxyStub::MethodHandler ProvisioningStubMethods[] = {
    // virtual void Register(IProvisioning::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IProvisioning::INotification * param0 = reader.Number<IProvisioning::INotification *>();
        ASSERT((param0 != nullptr) && "Null IProvisioning interface pointer (IProvisioning::Register() stub)");
        IProvisioning::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IProvisioning::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IProvisioning::INotification proxy (IProvisioning::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IProvisioning::INotification proxy (IProvisioning::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IProvisioning * implementation = input.Implementation<IProvisioning>();
            ASSERT((implementation != nullptr) && "Null IProvisioning implementation pointer (IProvisioning::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IProvisioning::INotification::Release() failed (IProvisioning::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IProvisioning::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IProvisioning::INotification * param0 = reader.Number<IProvisioning::INotification *>();
        ASSERT((param0 != nullptr) && "Null IProvisioning interface pointer (IProvisioning::Unregister() stub)");
        IProvisioning::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IProvisioning::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IProvisioning::INotification proxy (IProvisioning::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IProvisioning::INotification proxy (IProvisioning::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IProvisioning * implementation = input.Implementation<IProvisioning>();
            ASSERT((implementation != nullptr) && "Null IProvisioning implementation pointer (IProvisioning::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IProvisioning::INotification::Release() failed (IProvisioning::Unregister() stub)");
            }
        }
    },

    nullptr
}; // ProvisioningStubMethods[]

//
// IProvisioning::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Provisioned(const string &) = 0 

ProxyStub::MethodHandler ProvisioningNotificationStubMethods[] = {
    // virtual void Provisioned(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IProvisioning::INotification * implementation = input.Implementation<IProvisioning::INotification>();
        ASSERT((implementation != nullptr) && "Null IProvisioning::INotification implementation pointer (IProvisioning::INotification::Provisioned() stub)");
        implementation->Provisioned(param0);
    },

    nullptr
}; // ProvisioningNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IProvisioning interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IProvisioning::INotification *) = 0 
//  (1) virtual void Unregister(IProvisioning::INotification *) = 0 

class ProvisioningProxy final : public ProxyStub::UnknownProxyType<IProvisioning> {
public:
    ProvisioningProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IProvisioning::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IProvisioning::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IProvisioning::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IProvisioning::INotification *>(param0);

        Invoke(newMessage);
    }
}; // class ProvisioningProxy

//
// IProvisioning::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Provisioned(const string &) = 0 

class ProvisioningNotificationProxy final : public ProxyStub::UnknownProxyType<IProvisioning::INotification> {
public:
    ProvisioningNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Provisioned(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class ProvisioningNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IProvisioning::INotification, ProvisioningNotificationStubMethods, ProxyStub::UnknownStub> ProvisioningNotificationStub;
typedef ProxyStub::StubType<IProvisioning, ProvisioningStubMethods, ProxyStub::UnknownStub> ProvisioningStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IProvisioning::INotification, ProvisioningNotificationProxy, ProvisioningNotificationStub>();
        RPC::Administrator::Instance().Announce<IProvisioning, ProvisioningProxy, ProvisioningStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

