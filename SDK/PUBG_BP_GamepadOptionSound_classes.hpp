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

// WidgetBlueprintGeneratedClass BP_GamepadOptionSound.BP_GamepadOptionSound_C
// 0x0000 (0x04F0 - 0x04F0)
class UBP_GamepadOptionSound_C : public UTslGamepadOptionSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GamepadOptionSound.BP_GamepadOptionSound_C");
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
