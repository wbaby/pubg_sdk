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

// Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.Tick
struct UBP_GamepadOptionGameplay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.UpdateCrosshairPreviewColor
struct UBP_GamepadOptionGameplay_C_UpdateCrosshairPreviewColor_Params
{
	struct FColor*                                     InColor;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.ExecuteUbergraph_BP_GamepadOptionGameplay
struct UBP_GamepadOptionGameplay_C_ExecuteUbergraph_BP_GamepadOptionGameplay_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
