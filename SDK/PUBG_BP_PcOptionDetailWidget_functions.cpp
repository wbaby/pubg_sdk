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

// Function BP_PcOptionDetailWidget.BP_PcOptionDetailWidget_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionDetailWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionDetailWidget.BP_PcOptionDetailWidget_C.Tick");

	UBP_PcOptionDetailWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionDetailWidget.BP_PcOptionDetailWidget_C.ExecuteUbergraph_BP_PcOptionDetailWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionDetailWidget_C::ExecuteUbergraph_BP_PcOptionDetailWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionDetailWidget.BP_PcOptionDetailWidget_C.ExecuteUbergraph_BP_PcOptionDetailWidget");

	UBP_PcOptionDetailWidget_C_ExecuteUbergraph_BP_PcOptionDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
