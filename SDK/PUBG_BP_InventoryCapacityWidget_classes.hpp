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

// WidgetBlueprintGeneratedClass BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C
// 0x001D (0x03E5 - 0x03C8)
class UBP_InventoryCapacityWidget_C : public UTslInventoryCapacityWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      CapacityImage;                                            // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UImage*                                      FeedbackImage;                                            // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              ConstGameMaxSpace;                                        // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bPendingRefresh : 1;                                      // 0x03E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C");
		return ptr;
	}


	void NotifyItemDropped(TScriptInterface<class USlotInterface>* Slot, TScriptInterface<class USlotContainerInterface>* SlotContainer);
	void NotifyEquipmentItemFocused(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void OnStackCountChanged(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface, int* StackCount);
	void GetStackCountWidget(class UStackCountHandlingPopupWidget_C** AsStack_Count_Handling_Popup_Widget);
	void NotifyInventoryItemFocused(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void ResetMaterialParams(bool* bResetCapacity, bool* bResetFeedback);
	void SetFeedbackMaterialParams(float* FeedbackStart, float* FeedbackEnd, bool* bIsPositive);
	void SetCapacityMaterialParams(float* CurrMaxSpaceStart, float* CurrSpaceStart);
	void NotifyVicinityItemFocused(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void Construct();
	void Destruct();
	void OnInventoryUpdated_Event_1();
	void ExecuteUbergraph_BP_InventoryCapacityWidget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
