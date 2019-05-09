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

// WidgetBlueprintGeneratedClass BP_PcOptionItemStepperIndicatorWidget.BP_PcOptionItemStepperIndicatorWidget_C
// 0x0000 (0x0460 - 0x0460)
class UBP_PcOptionItemStepperIndicatorWidget_C : public UTslGameOptionItemStepperIndicatorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PcOptionItemStepperIndicatorWidget.BP_PcOptionItemStepperIndicatorWidget_C");
		return ptr;
	}


	void OnClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
