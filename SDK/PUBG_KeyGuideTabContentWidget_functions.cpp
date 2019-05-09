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

// Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.PreConstruct
// (FUNC_Final)
// Parameters:
// bool                           IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyGuideTabContentWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.PreConstruct");

	UKeyGuideTabContentWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.ExecuteUbergraph_KeyGuideTabContentWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyGuideTabContentWidget_C::ExecuteUbergraph_KeyGuideTabContentWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyGuideTabContentWidget.KeyGuideTabContentWidget_C.ExecuteUbergraph_KeyGuideTabContentWidget");

	UKeyGuideTabContentWidget_C_ExecuteUbergraph_KeyGuideTabContentWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
