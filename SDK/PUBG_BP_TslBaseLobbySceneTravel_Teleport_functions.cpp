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

// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript
// ()

void ABP_TslBaseLobbySceneTravel_Teleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript");

	ABP_TslBaseLobbySceneTravel_Teleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel
// ()

void ABP_TslBaseLobbySceneTravel_Teleport_C::OnStartTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel");

	ABP_TslBaseLobbySceneTravel_Teleport_C_OnStartTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_TslBaseLobbySceneTravel_Teleport_C::ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport");

	ABP_TslBaseLobbySceneTravel_Teleport_C_ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
