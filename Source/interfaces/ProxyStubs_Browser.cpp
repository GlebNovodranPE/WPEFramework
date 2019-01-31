//
// generated automatically from "IBrowser.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IBrowser
//   - class ::WPEFramework::Exchange::IBrowser::INotification
//   - class ::WPEFramework::Exchange::IBrowser::IMetadata
//

#include "IBrowser.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IBrowser interface stub definitions
//
// Methods:
//  (0) virtual void Register(IBrowser::INotification *) = 0 
//  (1) virtual void Unregister(IBrowser::INotification *) = 0 
//  (2) virtual void SetURL(const string &) = 0 
//  (3) virtual string GetURL() const = 0 
//  (4) virtual uint32_t GetFPS() const = 0 
//  (5) virtual void Hide(const bool) = 0 

ProxyStub::MethodHandler BrowserStubMethods[] = {
    // virtual void Register(IBrowser::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IBrowser::INotification * param0 = reader.Number<IBrowser::INotification *>();
        ASSERT((param0 != nullptr) && "Null IBrowser interface pointer (IBrowser::Register() stub)");
        IBrowser::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IBrowser::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IBrowser::INotification proxy (IBrowser::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IBrowser::INotification proxy (IBrowser::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IBrowser * implementation = input.Implementation<IBrowser>();
            ASSERT((implementation != nullptr) && "Null IBrowser implementation pointer (IBrowser::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IBrowser::INotification::Release() failed (IBrowser::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IBrowser::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IBrowser::INotification * param0 = reader.Number<IBrowser::INotification *>();
        ASSERT((param0 != nullptr) && "Null IBrowser interface pointer (IBrowser::Unregister() stub)");
        IBrowser::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IBrowser::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IBrowser::INotification proxy (IBrowser::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IBrowser::INotification proxy (IBrowser::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IBrowser * implementation = input.Implementation<IBrowser>();
            ASSERT((implementation != nullptr) && "Null IBrowser implementation pointer (IBrowser::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IBrowser::INotification::Release() failed (IBrowser::Unregister() stub)");
            }
        }
    },

    // virtual void SetURL(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IBrowser * implementation = input.Implementation<IBrowser>();
        ASSERT((implementation != nullptr) && "Null IBrowser implementation pointer (IBrowser::SetURL() stub)");
        implementation->SetURL(param0);
    },

    // virtual string GetURL() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBrowser * implementation = input.Implementation<IBrowser>();
        ASSERT((implementation != nullptr) && "Null IBrowser implementation pointer (IBrowser::GetURL() stub)");
        const string output = implementation->GetURL();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual uint32_t GetFPS() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBrowser * implementation = input.Implementation<IBrowser>();
        ASSERT((implementation != nullptr) && "Null IBrowser implementation pointer (IBrowser::GetFPS() stub)");
        const uint32_t output = implementation->GetFPS();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Number<uint32_t>(output);
    },

    // virtual void Hide(const bool) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const bool param0 = reader.Boolean();

        // call implementation
        IBrowser * implementation = input.Implementation<IBrowser>();
        ASSERT((implementation != nullptr) && "Null IBrowser implementation pointer (IBrowser::Hide() stub)");
        implementation->Hide(param0);
    },

    nullptr
}; // BrowserStubMethods[]

//
// IBrowser::INotification interface stub definitions
//
// Methods:
//  (0) virtual void LoadFinished(const string &) = 0 
//  (1) virtual void URLChanged(const string &) = 0 
//  (2) virtual void Hidden(const bool) = 0 
//  (3) virtual void Closure() = 0 

ProxyStub::MethodHandler BrowserNotificationStubMethods[] = {
    // virtual void LoadFinished(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IBrowser::INotification * implementation = input.Implementation<IBrowser::INotification>();
        ASSERT((implementation != nullptr) && "Null IBrowser::INotification implementation pointer (IBrowser::INotification::LoadFinished() stub)");
        implementation->LoadFinished(param0);
    },

    // virtual void URLChanged(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IBrowser::INotification * implementation = input.Implementation<IBrowser::INotification>();
        ASSERT((implementation != nullptr) && "Null IBrowser::INotification implementation pointer (IBrowser::INotification::URLChanged() stub)");
        implementation->URLChanged(param0);
    },

    // virtual void Hidden(const bool) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const bool param0 = reader.Boolean();

        // call implementation
        IBrowser::INotification * implementation = input.Implementation<IBrowser::INotification>();
        ASSERT((implementation != nullptr) && "Null IBrowser::INotification implementation pointer (IBrowser::INotification::Hidden() stub)");
        implementation->Hidden(param0);
    },

    // virtual void Closure() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IBrowser::INotification * implementation = input.Implementation<IBrowser::INotification>();
        ASSERT((implementation != nullptr) && "Null IBrowser::INotification implementation pointer (IBrowser::INotification::Closure() stub)");
        implementation->Closure();
    },

    nullptr
}; // BrowserNotificationStubMethods[]

//
// IBrowser::IMetadata interface stub definitions
//
// Methods:
//  (0) virtual string LocalCache() const = 0 
//  (1) virtual string CookieStore() const = 0 
//  (2) virtual void GarbageCollect() = 0 

ProxyStub::MethodHandler BrowserMetadataStubMethods[] = {
    // virtual string LocalCache() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBrowser::IMetadata * implementation = input.Implementation<IBrowser::IMetadata>();
        ASSERT((implementation != nullptr) && "Null IBrowser::IMetadata implementation pointer (IBrowser::IMetadata::LocalCache() stub)");
        const string output = implementation->LocalCache();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual string CookieStore() const = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        const IBrowser::IMetadata * implementation = input.Implementation<IBrowser::IMetadata>();
        ASSERT((implementation != nullptr) && "Null IBrowser::IMetadata implementation pointer (IBrowser::IMetadata::CookieStore() stub)");
        const string output = implementation->CookieStore();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual void GarbageCollect() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IBrowser::IMetadata * implementation = input.Implementation<IBrowser::IMetadata>();
        ASSERT((implementation != nullptr) && "Null IBrowser::IMetadata implementation pointer (IBrowser::IMetadata::GarbageCollect() stub)");
        implementation->GarbageCollect();
    },

    nullptr
}; // BrowserMetadataStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IBrowser interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IBrowser::INotification *) = 0 
//  (1) virtual void Unregister(IBrowser::INotification *) = 0 
//  (2) virtual void SetURL(const string &) = 0 
//  (3) virtual string GetURL() const = 0 
//  (4) virtual uint32_t GetFPS() const = 0 
//  (5) virtual void Hide(const bool) = 0 

class BrowserProxy final : public ProxyStub::UnknownProxyType<IBrowser> {
public:
    BrowserProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IBrowser::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IBrowser::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IBrowser::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IBrowser::INotification *>(param0);

        Invoke(newMessage);
    }

    void SetURL(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    string GetURL() const override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    uint32_t GetFPS() const override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const uint32_t output = reader.Number<uint32_t>();

        return output;
    }

    void Hide(const bool param0) override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Boolean(param0);

        Invoke(newMessage);
    }
}; // class BrowserProxy

//
// IBrowser::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void LoadFinished(const string &) = 0 
//  (1) virtual void URLChanged(const string &) = 0 
//  (2) virtual void Hidden(const bool) = 0 
//  (3) virtual void Closure() = 0 

class BrowserNotificationProxy final : public ProxyStub::UnknownProxyType<IBrowser::INotification> {
public:
    BrowserNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void LoadFinished(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    void URLChanged(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    void Hidden(const bool param0) override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Boolean(param0);

        Invoke(newMessage);
    }

    void Closure() override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        Invoke(newMessage);
    }
}; // class BrowserNotificationProxy

//
// IBrowser::IMetadata interface proxy definitions
//
// Methods:
//  (0) virtual string LocalCache() const = 0 
//  (1) virtual string CookieStore() const = 0 
//  (2) virtual void GarbageCollect() = 0 

class BrowserMetadataProxy final : public ProxyStub::UnknownProxyType<IBrowser::IMetadata> {
public:
    BrowserMetadataProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    string LocalCache() const override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    string CookieStore() const override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    void GarbageCollect() override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);
    }
}; // class BrowserMetadataProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IBrowser::INotification, BrowserNotificationStubMethods, ProxyStub::UnknownStub> BrowserNotificationStub;
typedef ProxyStub::StubType<IBrowser, BrowserStubMethods, ProxyStub::UnknownStub> BrowserStub;
typedef ProxyStub::StubType<IBrowser::IMetadata, BrowserMetadataStubMethods, ProxyStub::UnknownStub> BrowserMetadataStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IBrowser::INotification, BrowserNotificationProxy, BrowserNotificationStub>();
        RPC::Administrator::Instance().Announce<IBrowser, BrowserProxy, BrowserStub>();
        RPC::Administrator::Instance().Announce<IBrowser::IMetadata, BrowserMetadataProxy, BrowserMetadataStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

