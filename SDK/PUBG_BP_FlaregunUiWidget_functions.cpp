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

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCarePackageComming
// (FUNC_RequiredAPI)
// Parameters:
// bool                           IsCarePackageComing            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsVehicleComing                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FlaregunUiWidget_C::IsCarePackageComming(bool* IsCarePackageComing, bool* IsVehicleComing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCarePackageComming");

	UBP_FlaregunUiWidget_C_IsCarePackageComming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCarePackageComing != nullptr)
		*IsCarePackageComing = params.IsCarePackageComing;
	if (IsVehicleComing != nullptr)
		*IsVehicleComing = params.IsVehicleComing;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ShowTitle
// (FUNC_Final)
// Parameters:
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FlaregunUiWidget_C::ShowTitle(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ShowTitle");

	UBP_FlaregunUiWidget_C_ShowTitle_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCharacterInWhiteZone
// (FUNC_Final)
// Parameters:
// bool                           IsIn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FlaregunUiWidget_C::IsCharacterInWhiteZone(bool* IsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCharacterInWhiteZone");

	UBP_FlaregunUiWidget_C_IsCharacterInWhiteZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIn != nullptr)
		*IsIn = params.IsIn;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetVehicleNumber
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           NumVehicle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          CanFire                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          WaitingMine                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FlaregunUiWidget_C::SetVehicleNumber(int* NumVehicle, bool* CanFire, bool* WaitingMine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetVehicleNumber");

	UBP_FlaregunUiWidget_C_SetVehicleNumber_Params params;
	params.NumVehicle = NumVehicle;
	params.CanFire = CanFire;
	params.WaitingMine = WaitingMine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetPackageNumber
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           NumPackage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          CanFire                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          WaitingMine                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FlaregunUiWidget_C::SetPackageNumber(int* NumPackage, bool* CanFire, bool* WaitingMine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetPackageNumber");

	UBP_FlaregunUiWidget_C_SetPackageNumber_Params params;
	params.NumPackage = NumPackage;
	params.CanFire = CanFire;
	params.WaitingMine = WaitingMine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FlaregunUiWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.Tick");

	UBP_FlaregunUiWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ExecuteUbergraph_BP_FlaregunUiWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FlaregunUiWidget_C::ExecuteUbergraph_BP_FlaregunUiWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ExecuteUbergraph_BP_FlaregunUiWidget");

	UBP_FlaregunUiWidget_C_ExecuteUbergraph_BP_FlaregunUiWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
