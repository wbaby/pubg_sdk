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

// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Reset
struct UBP_HoldButtonWidget_GamePad_C_Reset_Params
{
};

// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Tick
struct UBP_HoldButtonWidget_GamePad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Construct
struct UBP_HoldButtonWidget_GamePad_C_Construct_Params
{
};

// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.UpdateDesignOnPressed
struct UBP_HoldButtonWidget_GamePad_C_UpdateDesignOnPressed_Params
{
};

// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.UpdateDesignOnReleased
struct UBP_HoldButtonWidget_GamePad_C_UpdateDesignOnReleased_Params
{
};

// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.ExecuteUbergraph_BP_HoldButtonWidget_GamePad
struct UBP_HoldButtonWidget_GamePad_C_ExecuteUbergraph_BP_HoldButtonWidget_GamePad_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
