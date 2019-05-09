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

// Function TslLobby_Seasonpass0327_main.TslLobby_Seasonpass0327_main_C.ReceiveBeginPlay
// ()

void ATslLobby_Seasonpass0327_main_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslLobby_Seasonpass0327_main.TslLobby_Seasonpass0327_main_C.ReceiveBeginPlay");

	ATslLobby_Seasonpass0327_main_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_Seasonpass0327_main.TslLobby_Seasonpass0327_main_C.ExecuteUbergraph_TslLobby_Seasonpass0327_main
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATslLobby_Seasonpass0327_main_C::ExecuteUbergraph_TslLobby_Seasonpass0327_main(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslLobby_Seasonpass0327_main.TslLobby_Seasonpass0327_main_C.ExecuteUbergraph_TslLobby_Seasonpass0327_main");

	ATslLobby_Seasonpass0327_main_C_ExecuteUbergraph_TslLobby_Seasonpass0327_main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
