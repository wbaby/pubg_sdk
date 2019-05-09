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

// Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionGameplay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.Tick");

	UBP_GamepadOptionGameplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.UpdateCrosshairPreviewColor
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// struct FColor*                 InColor                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UBP_GamepadOptionGameplay_C::UpdateCrosshairPreviewColor(struct FColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.UpdateCrosshairPreviewColor");

	UBP_GamepadOptionGameplay_C_UpdateCrosshairPreviewColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.ExecuteUbergraph_BP_GamepadOptionGameplay
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionGameplay_C::ExecuteUbergraph_BP_GamepadOptionGameplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C.ExecuteUbergraph_BP_GamepadOptionGameplay");

	UBP_GamepadOptionGameplay_C_ExecuteUbergraph_BP_GamepadOptionGameplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
