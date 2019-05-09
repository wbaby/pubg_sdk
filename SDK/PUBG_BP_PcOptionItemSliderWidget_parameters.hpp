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

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextCommitted
struct UBP_PcOptionItemSliderWidget_C_OnSliderValueTextCommitted_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextChanged
struct UBP_PcOptionItemSliderWidget_C_OnSliderValueTextChanged_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueChanged
struct UBP_PcOptionItemSliderWidget_C_OnSliderValueChanged_Params
{
	float                                              MappedValue;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentEnd
struct UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentEnd_Params
{
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentBegin
struct UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentBegin_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
