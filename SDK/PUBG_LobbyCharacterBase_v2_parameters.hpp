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

// Function TslGame.LobbyCharacter.SetLobbyCharacterAnimationType
struct ALobbyCharacterBase_v2_C_SetLobbyCharacterAnimationType_Params
{
};

// Function TslGame.LobbyCharacter.OnMontageEnded
struct ALobbyCharacterBase_v2_C_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterrupted;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsLogout
struct ALobbyCharacterBase_v2_C_IsLogout_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyCharacter.IsInCustomizationScene
struct ALobbyCharacterBase_v2_C_IsInCustomizationScene_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetSlotId
struct ALobbyCharacterBase_v2_C_GetSlotId_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetRankType
struct ALobbyCharacterBase_v2_C_GetRankType_Params
{
};

// Function TslGame.LobbyCharacter.GetNickName
struct ALobbyCharacterBase_v2_C_GetNickName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.LobbyCharacter.GetNetId
struct ALobbyCharacterBase_v2_C_GetNetId_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.LobbyCharacter.GetLobbyCharacterAnimationType
struct ALobbyCharacterBase_v2_C_GetLobbyCharacterAnimationType_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
