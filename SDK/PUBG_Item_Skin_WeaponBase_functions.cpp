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

// Function TslGame.SkinItem.CheckSkin
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class USkinnableInterface> SkinnableInterface             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem_Skin_WeaponBase_C::CheckSkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SkinItem.CheckSkin");

	UItem_Skin_WeaponBase_C_CheckSkin_Params params;
	params.SkinnableInterface = SkinnableInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.SkinItem.ApplySkin
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class USkinnableInterface> SkinnableInterface             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SkinOwnerPlayerId              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem_Skin_WeaponBase_C::ApplySkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface, int SkinOwnerPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.SkinItem.ApplySkin");

	UItem_Skin_WeaponBase_C_ApplySkin_Params params;
	params.SkinnableInterface = SkinnableInterface;
	params.SkinOwnerPlayerId = SkinOwnerPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
