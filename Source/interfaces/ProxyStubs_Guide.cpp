//
// generated automatically from "IGuide.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IGuide
//   - class ::WPEFramework::Exchange::IGuide::INotification
//

#include "IGuide.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IGuide interface stub definitions
//
// Methods:
//  (0) virtual uint32_t StartParser(PluginHost::IShell *) = 0 
//  (1) virtual const string GetChannels() = 0 
//  (2) virtual const string GetPrograms() = 0 
//  (3) virtual const string GetCurrentProgram(const string &) = 0 
//  (4) virtual const string GetAudioLanguages(const uint32_t) = 0 
//  (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0 
//  (6) virtual bool SetParentalControlPin(const string &, const string &) = 0 
//  (7) virtual bool SetParentalControl(const string &, const bool) = 0 
//  (8) virtual bool IsParentalControlled() = 0 
//  (9) virtual bool SetParentalLock(const string &, const bool, const string &) = 0 
//  (10) virtual bool IsParentalLocked(const string &) = 0 
//  (11) virtual void Register(IGuide::INotification *) = 0 
//  (12) virtual void Unregister(IGuide::INotification *) = 0 

ProxyStub::MethodHandler GuideStubMethods[] = {
    // virtual uint32_t StartParser(PluginHost::IShell *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        PluginHost::IShell * param0 = reader.Number<PluginHost::IShell *>();
        ASSERT((param0 != nullptr) && "Null IGuide interface pointer (IGuide::StartParser() stub)");
        PluginHost::IShell * param0_proxy = RPC::Administrator::Instance().CreateProxy<PluginHost::IShell>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create PluginHost::IShell proxy (IGuide::StartParser() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate PluginHost::IShell proxy (IGuide::StartParser() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IGuide * implementation = input.Implementation<IGuide>();
            ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::StartParser() stub)");
            const uint32_t output = implementation->StartParser(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("PluginHost::IShell::Release() failed (IGuide::StartParser() stub)");
            }

            // write return value
            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(output);
        }
    },

    // virtual const string GetChannels() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::GetChannels() stub)");
        const string output = implementation->GetChannels();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual const string GetPrograms() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::GetPrograms() stub)");
        const string output = implementation->GetPrograms();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual const string GetCurrentProgram(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::GetCurrentProgram() stub)");
        const string output = implementation->GetCurrentProgram(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual const string GetAudioLanguages(const uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::GetAudioLanguages() stub)");
        const string output = implementation->GetAudioLanguages(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual const string GetSubtitleLanguages(const uint32_t) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const uint32_t param0 = reader.Number<uint32_t>();

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::GetSubtitleLanguages() stub)");
        const string output = implementation->GetSubtitleLanguages(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Text(output);
    },

    // virtual bool SetParentalControlPin(const string &, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const string param1 = reader.Text();

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::SetParentalControlPin() stub)");
        const bool output = implementation->SetParentalControlPin(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual bool SetParentalControl(const string &, const bool) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const bool param1 = reader.Boolean();

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::SetParentalControl() stub)");
        const bool output = implementation->SetParentalControl(param0, param1);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual bool IsParentalControlled() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::IsParentalControlled() stub)");
        const bool output = implementation->IsParentalControlled();

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual bool SetParentalLock(const string &, const bool, const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();
        const bool param1 = reader.Boolean();
        const string param2 = reader.Text();

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::SetParentalLock() stub)");
        const bool output = implementation->SetParentalLock(param0, param1, param2);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual bool IsParentalLocked(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IGuide * implementation = input.Implementation<IGuide>();
        ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::IsParentalLocked() stub)");
        const bool output = implementation->IsParentalLocked(param0);

        // write return value
        RPC::Data::Frame::Writer writer(message->Response().Writer());
        writer.Boolean(output);
    },

    // virtual void Register(IGuide::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IGuide::INotification * param0 = reader.Number<IGuide::INotification *>();
        ASSERT((param0 != nullptr) && "Null IGuide interface pointer (IGuide::Register() stub)");
        IGuide::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IGuide::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IGuide::INotification proxy (IGuide::Register() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IGuide::INotification proxy (IGuide::Register() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IGuide * implementation = input.Implementation<IGuide>();
            ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::Register() stub)");
            implementation->Register(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IGuide::INotification::Release() failed (IGuide::Register() stub)");
            }
        }
    },

    // virtual void Unregister(IGuide::INotification *) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IGuide::INotification * param0 = reader.Number<IGuide::INotification *>();
        ASSERT((param0 != nullptr) && "Null IGuide interface pointer (IGuide::Unregister() stub)");
        IGuide::INotification * param0_proxy = RPC::Administrator::Instance().CreateProxy<IGuide::INotification>(channel, param0, true, false);
        ASSERT((param0_proxy != nullptr) && "Failed to create IGuide::INotification proxy (IGuide::Unregister() stub)");

        if (param0_proxy == nullptr) {
            TRACE_L1("Failed to instantiate IGuide::INotification proxy (IGuide::Unregister() stub)");
            message->Response().Writer().Number<uint32_t>(Core::ERROR_RPC_CALL_FAILED);
        } else {
            // call implementation
            IGuide * implementation = input.Implementation<IGuide>();
            ASSERT((implementation != nullptr) && "Null IGuide implementation pointer (IGuide::Unregister() stub)");
            implementation->Unregister(param0_proxy);

            if (param0_proxy->Release() != Core::ERROR_NONE) {
                TRACE_L1("IGuide::INotification::Release() failed (IGuide::Unregister() stub)");
            }
        }
    },

    nullptr
}; // GuideStubMethods[]

//
// IGuide::INotification interface stub definitions
//
// Methods:
//  (0) virtual void EITBroadcast() = 0 
//  (1) virtual void EmergencyAlert() = 0 
//  (2) virtual void ParentalControlChanged() = 0 
//  (3) virtual void ParentalLockChanged(const string &) = 0 
//  (4) virtual void TestNotification(const string &) = 0 

ProxyStub::MethodHandler GuideNotificationStubMethods[] = {
    // virtual void EITBroadcast() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IGuide::INotification * implementation = input.Implementation<IGuide::INotification>();
        ASSERT((implementation != nullptr) && "Null IGuide::INotification implementation pointer (IGuide::INotification::EITBroadcast() stub)");
        implementation->EITBroadcast();
    },

    // virtual void EmergencyAlert() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IGuide::INotification * implementation = input.Implementation<IGuide::INotification>();
        ASSERT((implementation != nullptr) && "Null IGuide::INotification implementation pointer (IGuide::INotification::EmergencyAlert() stub)");
        implementation->EmergencyAlert();
    },

    // virtual void ParentalControlChanged() = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // call implementation
        IGuide::INotification * implementation = input.Implementation<IGuide::INotification>();
        ASSERT((implementation != nullptr) && "Null IGuide::INotification implementation pointer (IGuide::INotification::ParentalControlChanged() stub)");
        implementation->ParentalControlChanged();
    },

    // virtual void ParentalLockChanged(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IGuide::INotification * implementation = input.Implementation<IGuide::INotification>();
        ASSERT((implementation != nullptr) && "Null IGuide::INotification implementation pointer (IGuide::INotification::ParentalLockChanged() stub)");
        implementation->ParentalLockChanged(param0);
    },

    // virtual void TestNotification(const string &) = 0
    //
    [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

        RPC::Data::Input & input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IGuide::INotification * implementation = input.Implementation<IGuide::INotification>();
        ASSERT((implementation != nullptr) && "Null IGuide::INotification implementation pointer (IGuide::INotification::TestNotification() stub)");
        implementation->TestNotification(param0);
    },

    nullptr
}; // GuideNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IGuide interface proxy definitions
//
// Methods:
//  (0) virtual uint32_t StartParser(PluginHost::IShell *) = 0 
//  (1) virtual const string GetChannels() = 0 
//  (2) virtual const string GetPrograms() = 0 
//  (3) virtual const string GetCurrentProgram(const string &) = 0 
//  (4) virtual const string GetAudioLanguages(const uint32_t) = 0 
//  (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0 
//  (6) virtual bool SetParentalControlPin(const string &, const string &) = 0 
//  (7) virtual bool SetParentalControl(const string &, const bool) = 0 
//  (8) virtual bool IsParentalControlled() = 0 
//  (9) virtual bool SetParentalLock(const string &, const bool, const string &) = 0 
//  (10) virtual bool IsParentalLocked(const string &) = 0 
//  (11) virtual void Register(IGuide::INotification *) = 0 
//  (12) virtual void Unregister(IGuide::INotification *) = 0 

class GuideProxy final : public ProxyStub::UnknownProxyType<IGuide> {
public:
    GuideProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    uint32_t StartParser(PluginHost::IShell * param0) override
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

    const string GetChannels() override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    const string GetPrograms() override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    const string GetCurrentProgram(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    const string GetAudioLanguages(const uint32_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    const string GetSubtitleLanguages(const uint32_t param0) override
    {
        IPCMessage newMessage(BaseClass::Message(5));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<const uint32_t>(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const string output = reader.Text();

        return output;
    }

    bool SetParentalControlPin(const string & param0, const string & param1) override
    {
        IPCMessage newMessage(BaseClass::Message(6));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Text(param1);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    bool SetParentalControl(const string & param0, const bool param1) override
    {
        IPCMessage newMessage(BaseClass::Message(7));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Boolean(param1);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    bool IsParentalControlled() override
    {
        IPCMessage newMessage(BaseClass::Message(8));

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    bool SetParentalLock(const string & param0, const bool param1, const string & param2) override
    {
        IPCMessage newMessage(BaseClass::Message(9));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);
        writer.Boolean(param1);
        writer.Text(param2);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    bool IsParentalLocked(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(10));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);

        // read return value
        RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
        const bool output = reader.Boolean();

        return output;
    }

    void Register(IGuide::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(11));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IGuide::INotification *>(param0);

        Invoke(newMessage);
    }

    void Unregister(IGuide::INotification * param0) override
    {
        IPCMessage newMessage(BaseClass::Message(12));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IGuide::INotification *>(param0);

        Invoke(newMessage);
    }
}; // class GuideProxy

//
// IGuide::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void EITBroadcast() = 0 
//  (1) virtual void EmergencyAlert() = 0 
//  (2) virtual void ParentalControlChanged() = 0 
//  (3) virtual void ParentalLockChanged(const string &) = 0 
//  (4) virtual void TestNotification(const string &) = 0 

class GuideNotificationProxy final : public ProxyStub::UnknownProxyType<IGuide::INotification> {
public:
    GuideNotificationProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void EITBroadcast() override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        Invoke(newMessage);
    }

    void EmergencyAlert() override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        Invoke(newMessage);
    }

    void ParentalControlChanged() override
    {
        IPCMessage newMessage(BaseClass::Message(2));

        Invoke(newMessage);
    }

    void ParentalLockChanged(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(3));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }

    void TestNotification(const string & param0) override
    {
        IPCMessage newMessage(BaseClass::Message(4));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class GuideNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<IGuide::INotification, GuideNotificationStubMethods, ProxyStub::UnknownStub> GuideNotificationStub;
typedef ProxyStub::StubType<IGuide, GuideStubMethods, ProxyStub::UnknownStub> GuideStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IGuide::INotification, GuideNotificationProxy, GuideNotificationStub>();
        RPC::Administrator::Instance().Announce<IGuide, GuideProxy, GuideStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

