
#include <core/Enumerate.h>
#include "JsonData_NetworkControl.h"
#include "JsonData_RemoteControl.h"
#include "JsonData_Messenger.h"

namespace WPEFramework {

// NetworkControl

ENUM_CONVERSION_BEGIN(JsonData::NetworkControl::NetworkResultData::ModeType)
    { JsonData::NetworkControl::NetworkResultData::ModeType::MANUAL, _TXT("Manual") },
    { JsonData::NetworkControl::NetworkResultData::ModeType::STATIC, _TXT("Static") },
    { JsonData::NetworkControl::NetworkResultData::ModeType::DYNAMIC, _TXT("Dynamic") },
ENUM_CONVERSION_END(JsonData::NetworkControl::NetworkResultData::ModeType);

// RemoteControl

ENUM_CONVERSION_BEGIN(JsonData::RemoteControl::ModifiersType)
    { JsonData::RemoteControl::ModifiersType::LEFTSHIFT, _TXT("leftshift") },
    { JsonData::RemoteControl::ModifiersType::RIGHTSHIFT, _TXT("rightshift") },
    { JsonData::RemoteControl::ModifiersType::LEFTALT, _TXT("leftalt") },
    { JsonData::RemoteControl::ModifiersType::RIGHTALT, _TXT("rightalt") },
    { JsonData::RemoteControl::ModifiersType::LEFTCTRL, _TXT("leftctrl") },
    { JsonData::RemoteControl::ModifiersType::RIGHTCTRL, _TXT("rightctrl") },
ENUM_CONVERSION_END(JsonData::RemoteControl::ModifiersType);

// Messenger

ENUM_CONVERSION_BEGIN(JsonData::Messenger::RoomupdateParamsData::ActionType)
    { JsonData::Messenger::RoomupdateParamsData::ActionType::CREATED, _TXT("created") },
    { JsonData::Messenger::RoomupdateParamsData::ActionType::DESTROYED, _TXT("destroyed") },
ENUM_CONVERSION_END(JsonData::Messenger::RoomupdateParamsData::ActionType);

ENUM_CONVERSION_BEGIN(JsonData::Messenger::UserupdateParamsData::ActionType)
    { JsonData::Messenger::UserupdateParamsData::ActionType::JOINED, _TXT("joined") },
    { JsonData::Messenger::UserupdateParamsData::ActionType::LEFT, _TXT("left") },
ENUM_CONVERSION_END(JsonData::Messenger::UserupdateParamsData::ActionType);

}
