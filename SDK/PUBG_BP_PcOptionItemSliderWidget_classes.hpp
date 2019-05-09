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

// WidgetBlueprintGeneratedClass BP_PcOptionItemSliderWidget.BP_PcOptionItemSliderWidget_C
// 0x0000 (0x04F8 - 0x04F8)
class UBP_PcOptionItemSliderWidget_C : public UTslGameOptionItemSliderWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PcOptionItemSliderWidget.BP_PcOptionItemSliderWidget_C");
		return ptr;
	}


	void OnSliderValueTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSliderValueTextChanged(const struct FText& Text);
	void OnSliderValueChanged(float MappedValue);
	void OnSliderAdjustmentEnd();
	void OnSliderAdjustmentBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
