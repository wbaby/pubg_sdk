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

// WidgetBlueprintGeneratedClass BP_GamepadOptionGraphic.BP_GamepadOptionGraphic_C
// 0x0000 (0x0500 - 0x0500)
class UBP_GamepadOptionGraphic_C : public UTslGamepadOptionGraphic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GamepadOptionGraphic.BP_GamepadOptionGraphic_C");
		return ptr;
	}


	void OnStepperChanged(class UTslGamepadStepperWidget* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
