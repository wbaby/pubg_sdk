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

// Function TslGame.TslTabSelectorWidget.UpdateIndexTo
struct UKeyGuideTabWidget_C_UpdateIndexTo_Params
{
	int                                                NewIndex;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTabSelectorWidget.RotateRight
struct UKeyGuideTabWidget_C_RotateRight_Params
{
};

// Function TslGame.TslTabSelectorWidget.RotateLeft
struct UKeyGuideTabWidget_C_RotateLeft_Params
{
};

// Function TslGame.TslTabSelectorWidget.ResetSelector
struct UKeyGuideTabWidget_C_ResetSelector_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
