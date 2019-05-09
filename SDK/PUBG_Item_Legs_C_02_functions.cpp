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

// Function TslGame.EquipableItem.UnequipBy
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItem_Legs_C_02_C::UnequipBy(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.UnequipBy");

	UItem_Legs_C_02_C_UnequipBy_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.EquipableItem.PostEquip
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItem_Legs_C_02_C::PostEquip(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.PostEquip");

	UItem_Legs_C_02_C_PostEquip_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.EquipableItem.OnRep_ReplicatedSkinItem
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UItem_Legs_C_02_C::OnRep_ReplicatedSkinItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.OnRep_ReplicatedSkinItem");

	UItem_Legs_C_02_C_OnRep_ReplicatedSkinItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.EquipableItem.EquipBy
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEquipPosition          Position                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem_Legs_C_02_C::EquipBy(class ATslCharacter* Character, const struct FEquipPosition& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.EquipBy");

	UItem_Legs_C_02_C_EquipBy_Params params;
	params.Character = Character;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.EquipableItem.CanEquipTo
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItem_Legs_C_02_C::CanEquipTo(class ATslCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.EquipableItem.CanEquipTo");

	UItem_Legs_C_02_C_CanEquipTo_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
