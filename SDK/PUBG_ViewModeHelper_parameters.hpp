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

// Function ViewModeHelper.ViewModeHelper_C.OnMouseDown
struct UViewModeHelper_C_OnMouseDown_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.OnMouseUp
struct UViewModeHelper_C_OnMouseUp_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.AddX
struct UViewModeHelper_C_AddX_Params
{
	float*                                             Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ViewModeHelper.ViewModeHelper_C.AddY
struct UViewModeHelper_C_AddY_Params
{
	float*                                             Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut
struct UViewModeHelper_C_ViewModeZoomInOrOut_Params
{
	float*                                             Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ViewModeHelper.ViewModeHelper_C.ViewModeReset
struct UViewModeHelper_C_ViewModeReset_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.Construct
struct UViewModeHelper_C_Construct_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper
struct UViewModeHelper_C_ExecuteUbergraph_ViewModeHelper_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
