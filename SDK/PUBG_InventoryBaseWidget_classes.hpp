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

// WidgetBlueprintGeneratedClass InventoryBaseWidget.InventoryBaseWidget_C
// 0x0018 (0x0310 - 0x02F8)
class UInventoryBaseWidget_C : public UTslUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    RefreshFocus;                                             // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryBaseWidget.InventoryBaseWidget_C");
		return ptr;
	}


	void UpdateDragDragDroppingItem(class UItem** DroppingItem);
	void SetInventoryWidget(class UInventoryWidget_C** Inventory);
	void ExecuteUbergraph_InventoryBaseWidget(int* EntryPoint);
	void RefreshFocus__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
