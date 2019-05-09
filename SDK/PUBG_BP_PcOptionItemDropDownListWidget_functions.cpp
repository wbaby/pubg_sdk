// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
// (FUNC_Final)
// Parameters:
// struct FString*                SelectedItem                   (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionItemDropDownListWidget_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature");

	UBP_PcOptionItemDropDownListWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.ExecuteUbergraph_BP_PcOptionItemDropDownListWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionItemDropDownListWidget_C::ExecuteUbergraph_BP_PcOptionItemDropDownListWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.ExecuteUbergraph_BP_PcOptionItemDropDownListWidget");

	UBP_PcOptionItemDropDownListWidget_C_ExecuteUbergraph_BP_PcOptionItemDropDownListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.OnSelectionChanged__DelegateSignature
// (FUNC_Final)
// Parameters:
// struct FString*                KeyStr                         (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionItemDropDownListWidget_C::OnSelectionChanged__DelegateSignature(struct FString* KeyStr, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.OnSelectionChanged__DelegateSignature");

	UBP_PcOptionItemDropDownListWidget_C_OnSelectionChanged__DelegateSignature_Params params;
	params.KeyStr = KeyStr;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
