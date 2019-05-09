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

// Function TslGame.TslTracerManager.Multi_AddInstance
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTracerSimulationServerData InTracerData                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ABP_TracerManager_C::Multi_AddInstance(const struct FTracerSimulationServerData& InTracerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslTracerManager.Multi_AddInstance");

	ABP_TracerManager_C_Multi_AddInstance_Params params;
	params.InTracerData = InTracerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
