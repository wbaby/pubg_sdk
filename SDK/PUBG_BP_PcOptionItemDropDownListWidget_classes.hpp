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

// WidgetBlueprintGeneratedClass BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C
// 0x0020 (0x0548 - 0x0528)
class UBP_PcOptionItemDropDownListWidget_C : public UTslGameOptionItemDropDownListWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UComboBoxString*                             ComboBox;                                                 // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C");
		return ptr;
	}


	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType);
	void ExecuteUbergraph_BP_PcOptionItemDropDownListWidget(int* EntryPoint);
	void OnSelectionChanged__DelegateSignature(struct FString* KeyStr, TEnumAsByte<ESelectInfo>* SelectionType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
