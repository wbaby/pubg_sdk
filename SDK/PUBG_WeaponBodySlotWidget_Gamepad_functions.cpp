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

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotItem
// ()
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotItem");

	UWeaponBodySlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotContainer
// ()
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotContainer");

	UWeaponBodySlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeaponItem
// ()

void UWeaponBodySlotWidget_Gamepad_C::OnUpdateWeaponItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeaponItem");

	UWeaponBodySlotWidget_Gamepad_C_OnUpdateWeaponItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.DestroyItemStudio
// ()

void UWeaponBodySlotWidget_Gamepad_C::DestroyItemStudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.DestroyItemStudio");

	UWeaponBodySlotWidget_Gamepad_C_DestroyItemStudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoName_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_AmmoName_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoName_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_AmmoName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoName
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ItemName                       (CPF_Parm, CPF_OutParm)

void UWeaponBodySlotWidget_Gamepad_C::GetAmmoName(struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoName");

	UWeaponBodySlotWidget_Gamepad_C_GetAmmoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.InitBody
// ()

void UWeaponBodySlotWidget_Gamepad_C::InitBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.InitBody");

	UWeaponBodySlotWidget_Gamepad_C_InitBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.CanHandleInput
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponBodySlotWidget_Gamepad_C::CanHandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.CanHandleInput");

	UWeaponBodySlotWidget_Gamepad_C_CanHandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsFocus
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponBodySlotWidget_Gamepad_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsFocus");

	UWeaponBodySlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSelected_Bp
// (FUNC_Final)
// Parameters:
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotSelected_Bp(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSelected_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotSelected_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetBackgroundState
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          State                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetBackgroundState(float* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetBackgroundState");

	UWeaponBodySlotWidget_Gamepad_C_GetBackgroundState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.SetFocus
// (FUNC_RequiredAPI)
// Parameters:
// bool*                          NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponBodySlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.SetFocus");

	UWeaponBodySlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotMouseOver_Bp
// (FUNC_Final)
// Parameters:
// bool                           IsMouseOver                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotMouseOver_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotOn_Bp
// (FUNC_Final)
// Parameters:
// bool                           IsOn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotOn_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSubOn_Bp
// (FUNC_Final)
// Parameters:
// bool                           SubOn                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSubOn_Bp");

	UWeaponBodySlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetInventoryWidgetGamepad
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetInventoryWidgetGamepad");

	UWeaponBodySlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_BackgroundBorder_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_BackgroundBorder_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_BackgroundBorder_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_BackgroundBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetItem_Bp
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetItem_Bp");

	UWeaponBodySlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponCaptureImage_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponCaptureImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoIcon
// (FUNC_NetReliable)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWeaponBodySlotWidget_Gamepad_C::GetAmmoIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoIcon");

	UWeaponBodySlotWidget_Gamepad_C_GetAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_AmmoIcon_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_AmmoIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetHandOnUnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount");

	UWeaponBodySlotWidget_Gamepad_C_GetHandOnUnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponHandsOnUnloadedAmmoCount_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AActor**                 SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::OnSpawnActorInSceneCaptureWorld(class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld");

	UWeaponBodySlotWidget_Gamepad_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeapon
// ()

void UWeaponBodySlotWidget_Gamepad_C::OnUpdateWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeapon");

	UWeaponBodySlotWidget_Gamepad_C_OnUpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::GetHandOnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount");

	UWeaponBodySlotWidget_Gamepad_C_GetHandOnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponName_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::On_WeaponName_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponName_Prepass_1");

	UWeaponBodySlotWidget_Gamepad_C_On_WeaponName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.Construct
// ()

void UWeaponBodySlotWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.Construct");

	UWeaponBodySlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateItem");

	UWeaponBodySlotWidget_Gamepad_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ExecuteUbergraph_WeaponBodySlotWidget_Gamepad
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponBodySlotWidget_Gamepad_C::ExecuteUbergraph_WeaponBodySlotWidget_Gamepad(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ExecuteUbergraph_WeaponBodySlotWidget_Gamepad");

	UWeaponBodySlotWidget_Gamepad_C_ExecuteUbergraph_WeaponBodySlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
