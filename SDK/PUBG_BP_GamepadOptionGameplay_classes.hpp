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

// WidgetBlueprintGeneratedClass BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C
// 0x0018 (0x0508 - 0x04F0)
class UBP_GamepadOptionGameplay_C : public UTslGamepadOptionGameplay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UScrollBox*                                  ContentsScrollBox;                                        // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UBP_GamepadOptionWidget_C*                   ParentWidget;                                             // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C");
		return ptr;
	}


	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void UpdateCrosshairPreviewColor(struct FColor* InColor);
	void ExecuteUbergraph_BP_GamepadOptionGameplay(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
