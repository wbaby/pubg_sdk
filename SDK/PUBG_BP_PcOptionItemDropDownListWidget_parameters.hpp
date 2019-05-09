#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
struct UBP_PcOptionItemDropDownListWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.ExecuteUbergraph_BP_PcOptionItemDropDownListWidget
struct UBP_PcOptionItemDropDownListWidget_C_ExecuteUbergraph_BP_PcOptionItemDropDownListWidget_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.OnSelectionChanged__DelegateSignature
struct UBP_PcOptionItemDropDownListWidget_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FString*                                    KeyStr;                                                   // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
