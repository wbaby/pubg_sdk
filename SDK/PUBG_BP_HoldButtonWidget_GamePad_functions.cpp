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

// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Reset
// ()

void UBP_HoldButtonWidget_GamePad_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Reset");

	UBP_HoldButtonWidget_GamePad_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_HoldButtonWidget_GamePad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Tick");

	UBP_HoldButtonWidget_GamePad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Construct
// ()

void UBP_HoldButtonWidget_GamePad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.Construct");

	UBP_HoldButtonWidget_GamePad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.UpdateDesignOnPressed
// ()

void UBP_HoldButtonWidget_GamePad_C::UpdateDesignOnPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.UpdateDesignOnPressed");

	UBP_HoldButtonWidget_GamePad_C_UpdateDesignOnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.UpdateDesignOnReleased
// ()

void UBP_HoldButtonWidget_GamePad_C::UpdateDesignOnReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.UpdateDesignOnReleased");

	UBP_HoldButtonWidget_GamePad_C_UpdateDesignOnReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.ExecuteUbergraph_BP_HoldButtonWidget_GamePad
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_HoldButtonWidget_GamePad_C::ExecuteUbergraph_BP_HoldButtonWidget_GamePad(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldButtonWidget_GamePad.BP_HoldButtonWidget_GamePad_C.ExecuteUbergraph_BP_HoldButtonWidget_GamePad");

	UBP_HoldButtonWidget_GamePad_C_ExecuteUbergraph_BP_HoldButtonWidget_GamePad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
