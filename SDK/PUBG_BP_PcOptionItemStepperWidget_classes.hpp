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

// WidgetBlueprintGeneratedClass BP_PcOptionItemStepperWidget.BP_PcOptionItemStepperWidget_C
// 0x0000 (0x0558 - 0x0558)
class UBP_PcOptionItemStepperWidget_C : public UTslGameOptionItemStepperWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PcOptionItemStepperWidget.BP_PcOptionItemStepperWidget_C");
		return ptr;
	}


	void OnRightArrowButtonClicked();
	void OnLeftArrowButtonClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
