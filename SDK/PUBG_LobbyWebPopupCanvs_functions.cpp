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

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULobbyWebPopupCanvs_C::HasChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren");

	ULobbyWebPopupCanvs_C_HasChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel
// (FUNC_BlueprintCosmetic, FUNC_Net)
// Parameters:
// struct FWebPopupParam*         Param                          (CPF_Parm)
// bool*                          bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bReuse                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWebPopup_C*             WebPopup                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::CreateWebPopupAndAddPanel(struct FWebPopupParam* Param, bool* bShow, bool* bReuse, class UWebPopup_C** WebPopup)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel");

	ULobbyWebPopupCanvs_C_CreateWebPopupAndAddPanel_Params params;
	params.Param = Param;
	params.bShow = bShow;
	params.bReuse = bReuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WebPopup != nullptr)
		*WebPopup = params.WebPopup;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FWebPopupParam*         PopupParam                     (CPF_Parm)

void ULobbyWebPopupCanvs_C::ShowWebPopupImpl(struct FWebPopupParam* PopupParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl");

	ULobbyWebPopupCanvs_C_ShowWebPopupImpl_Params params;
	params.PopupParam = PopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl
// ()
// Parameters:
// TArray<struct FWebPopupParam>  Params                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ULobbyWebPopupCanvs_C::OnPreloadWebPopupImpl(TArray<struct FWebPopupParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl");

	ULobbyWebPopupCanvs_C_OnPreloadWebPopupImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FString*                PopupId                        (CPF_Parm, CPF_ZeroConstructor)
// class UWebPopup_C*             WebPopup                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::GetWebPopupFromPopupId(struct FString* PopupId, class UWebPopup_C** WebPopup)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId");

	ULobbyWebPopupCanvs_C_GetWebPopupFromPopupId_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WebPopup != nullptr)
		*WebPopup = params.WebPopup;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl
// ()
// Parameters:
// struct FString*                PopupId                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                Uri                            (CPF_Parm, CPF_ZeroConstructor)

void ULobbyWebPopupCanvs_C::ChangeWebPopupUriImpl(struct FString* PopupId, struct FString* Uri)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl");

	ULobbyWebPopupCanvs_C_ChangeWebPopupUriImpl_Params params;
	params.PopupId = PopupId;
	params.Uri = Uri;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl
// ()
// Parameters:
// struct FString*                PopupId                        (CPF_Parm, CPF_ZeroConstructor)

void ULobbyWebPopupCanvs_C::OnCloseWebPopupImpl(struct FString* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl");

	ULobbyWebPopupCanvs_C_OnCloseWebPopupImpl_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID
// (FUNC_Final)
// Parameters:
// struct FString*                WebPopupID                     (CPF_Parm, CPF_ZeroConstructor)
// bool*                          bForceRemoveParent             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::CloseWebPopupByID(struct FString* WebPopupID, bool* bForceRemoveParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID");

	ULobbyWebPopupCanvs_C_CloseWebPopupByID_Params params;
	params.WebPopupID = WebPopupID;
	params.bForceRemoveParent = bForceRemoveParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWebPopup_C**            Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::RemoveWebPopup(class UWebPopup_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup");

	ULobbyWebPopupCanvs_C_RemoveWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWebPopup_C**            Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::AddWebPopup(class UWebPopup_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup");

	ULobbyWebPopupCanvs_C_AddWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup
// (FUNC_Final)
// Parameters:
// struct FString*                PopupId                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::CanShowWebPopup(struct FString* PopupId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup");

	ULobbyWebPopupCanvs_C_CanShowWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic)
// Parameters:
// struct FWebPopupParam*         Param                          (CPF_Parm)
// bool*                          bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bReuse                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::CreateWebPopupImpl(struct FWebPopupParam* Param, bool* bShow, bool* bReuse)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl");

	ULobbyWebPopupCanvs_C_CreateWebPopupImpl_Params params;
	params.Param = Param;
	params.bShow = bShow;
	params.bReuse = bReuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup
// ()
// Parameters:
// struct FString*                PopupId                        (CPF_Parm, CPF_ZeroConstructor)

void ULobbyWebPopupCanvs_C::CloseWebPopup(struct FString* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup");

	ULobbyWebPopupCanvs_C_CloseWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FWebPopupParam*         Param                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULobbyWebPopupCanvs_C::ShowWebPopup(struct FWebPopupParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup");

	ULobbyWebPopupCanvs_C_ShowWebPopup_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup
// ()
// Parameters:
// TArray<struct FWebPopupParam>* WebPopupParams                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ULobbyWebPopupCanvs_C::PreloadWebPopup(TArray<struct FWebPopupParam>* WebPopupParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup");

	ULobbyWebPopupCanvs_C_PreloadWebPopup_Params params;
	params.WebPopupParams = WebPopupParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct
// ()

void ULobbyWebPopupCanvs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct");

	ULobbyWebPopupCanvs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebPopupCanvs_C::ExecuteUbergraph_LobbyWebPopupCanvs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs");

	ULobbyWebPopupCanvs_C_ExecuteUbergraph_LobbyWebPopupCanvs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
