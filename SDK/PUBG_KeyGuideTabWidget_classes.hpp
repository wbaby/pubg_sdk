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

// WidgetBlueprintGeneratedClass KeyGuideTabWidget.KeyGuideTabWidget_C
// 0x0000 (0x0410 - 0x0410)
class UKeyGuideTabWidget_C : public UTslTabSelectorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuideTabWidget.KeyGuideTabWidget_C");
		return ptr;
	}


	void UpdateIndexTo(int NewIndex);
	void RotateRight();
	void RotateLeft();
	void ResetSelector();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
