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

// WidgetBlueprintGeneratedClass BP_PcOptionWidget.BP_PcOptionWidget_C
// 0x0000 (0x06D8 - 0x06D8)
class UBP_PcOptionWidget_C : public UTslGameOptionWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PcOptionWidget.BP_PcOptionWidget_C");
		return ptr;
	}


	void UpdateDefaultButtonTextColor();
	void UpdateCancelButtonTextColor();
	void OnUnsavedChangesPopupButtonPressed();
	void OnTabLabelSelected(const struct FName& SelectedTabName);
	void OnStepperItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, int StepperIndex);
	void OnSliderItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, float RawValue);
	void OnKeyBinderItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, int SlotIndex, const struct FTslInputKey& InputKey);
	void OnDropDownListItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, int ListIndex);
	void OnDefaultButtonClicked();
	void OnCancelButtonClicked();
	void OnApplyButtonClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
