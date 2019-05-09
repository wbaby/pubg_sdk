#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_GamepadOptionControl.BP_GamepadOptionControl_C
// 0x0000 (0x04F0 - 0x04F0)
class UBP_GamepadOptionControl_C : public UTslGamepadOptionControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GamepadOptionControl.BP_GamepadOptionControl_C");
		return ptr;
	}


	void HandleGamepadUpOfChild(const TScriptInterface<class UTslNaviWidgetInterface>& Widget);
	void HandleGamepadDownOfChild(const TScriptInterface<class UTslNaviWidgetInterface>& Widget);
	void HandleFocusReceivedOfChild(const TScriptInterface<class UTslNaviWidgetInterface>& Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
