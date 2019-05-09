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

// Function LobbyHUD_Default.LobbyHUD_Default_C.UserConstructionScript
// ()

void ALobbyHUD_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyHUD_Default.LobbyHUD_Default_C.UserConstructionScript");

	ALobbyHUD_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ReceiveBeginPlay
// ()

void ALobbyHUD_Default_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyHUD_Default.LobbyHUD_Default_C.ReceiveBeginPlay");

	ALobbyHUD_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ReceivePostBeginPlay
// ()

void ALobbyHUD_Default_C::ReceivePostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyHUD_Default.LobbyHUD_Default_C.ReceivePostBeginPlay");

	ALobbyHUD_Default_C_ReceivePostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyHUD_Default.LobbyHUD_Default_C.ExecuteUbergraph_LobbyHUD_Default
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALobbyHUD_Default_C::ExecuteUbergraph_LobbyHUD_Default(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyHUD_Default.LobbyHUD_Default_C.ExecuteUbergraph_LobbyHUD_Default");

	ALobbyHUD_Default_C_ExecuteUbergraph_LobbyHUD_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
