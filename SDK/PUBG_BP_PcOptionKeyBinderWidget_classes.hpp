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

// WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderWidget.BP_PcOptionKeyBinderWidget_C
// 0x0000 (0x0508 - 0x0508)
class UBP_PcOptionKeyBinderWidget_C : public UTslGameOptionItemKeyBinderWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderWidget.BP_PcOptionKeyBinderWidget_C");
		return ptr;
	}


	void OnKeyBinderSlotValueChanged(int SlotIndex, const struct FTslInputKey& InputKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
