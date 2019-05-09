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

// WidgetBlueprintGeneratedClass BP_PcOptionTabLabelWidget.BP_PcOptionTabLabelWidget_C
// 0x0000 (0x0448 - 0x0448)
class UBP_PcOptionTabLabelWidget_C : public UTslGameOptionTabLabelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PcOptionTabLabelWidget.BP_PcOptionTabLabelWidget_C");
		return ptr;
	}


	void OnLabelButtonClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
