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

// Function ViewModeHelper.ViewModeHelper_C.OnMouseDown
// ()

void UViewModeHelper_C::OnMouseDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.OnMouseDown");

	UViewModeHelper_C_OnMouseDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.OnMouseUp
// ()

void UViewModeHelper_C::OnMouseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.OnMouseUp");

	UViewModeHelper_C_OnMouseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.AddX
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UViewModeHelper_C::AddX(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.AddX");

	UViewModeHelper_C_AddX_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.AddY
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UViewModeHelper_C::AddY(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.AddY");

	UViewModeHelper_C_AddY_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UViewModeHelper_C::ViewModeZoomInOrOut(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut");

	UViewModeHelper_C_ViewModeZoomInOrOut_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.ViewModeReset
// ()

void UViewModeHelper_C::ViewModeReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.ViewModeReset");

	UViewModeHelper_C_ViewModeReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.Construct
// ()

void UViewModeHelper_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.Construct");

	UViewModeHelper_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UViewModeHelper_C::ExecuteUbergraph_ViewModeHelper(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper");

	UViewModeHelper_C_ExecuteUbergraph_ViewModeHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
