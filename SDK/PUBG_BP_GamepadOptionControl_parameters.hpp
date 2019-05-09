#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslGamepadOptionContentsWidget.HandleGamepadUpOfChild
struct UBP_GamepadOptionControl_C_HandleGamepadUpOfChild_Params
{
	TScriptInterface<class UTslNaviWidgetInterface>    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGamepadOptionContentsWidget.HandleGamepadDownOfChild
struct UBP_GamepadOptionControl_C_HandleGamepadDownOfChild_Params
{
	TScriptInterface<class UTslNaviWidgetInterface>    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGamepadOptionContentsWidget.HandleFocusReceivedOfChild
struct UBP_GamepadOptionControl_C_HandleFocusReceivedOfChild_Params
{
	TScriptInterface<class UTslNaviWidgetInterface>    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
