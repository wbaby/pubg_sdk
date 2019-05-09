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

// Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript
struct ALobbyViewMode_C_UserConstructionScript_Params
{
};

// Function LobbyViewMode.LobbyViewMode_C.AddYaw
struct ALobbyViewMode_C_AddYaw_Params
{
	float*                                             Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyViewMode.LobbyViewMode_C.AddPitch
struct ALobbyViewMode_C_AddPitch_Params
{
	float*                                             Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyViewMode.LobbyViewMode_C.AddRoll
struct ALobbyViewMode_C_AddRoll_Params
{
	float*                                             Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyViewMode.LobbyViewMode_C.AddViewDistance
struct ALobbyViewMode_C_AddViewDistance_Params
{
	float*                                             Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyViewMode.LobbyViewMode_C.ReceiveTick
struct ALobbyViewMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor
struct ALobbyViewMode_C_SetViewModeAbleActor_Params
{
	class AActor**                                     Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode
struct ALobbyViewMode_C_ExecuteUbergraph_LobbyViewMode_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
