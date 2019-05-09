#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren
struct ULobbyWebPopupCanvs_C_HasChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel
struct ULobbyWebPopupCanvs_C_CreateWebPopupAndAddPanel_Params
{
	struct FWebPopupParam*                             Param;                                                    // (CPF_Parm)
	bool*                                              bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bReuse;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWebPopup_C*                                 WebPopup;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl
struct ULobbyWebPopupCanvs_C_ShowWebPopupImpl_Params
{
	struct FWebPopupParam*                             PopupParam;                                               // (CPF_Parm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl
struct ULobbyWebPopupCanvs_C_OnPreloadWebPopupImpl_Params
{
	TArray<struct FWebPopupParam>                      Params;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId
struct ULobbyWebPopupCanvs_C_GetWebPopupFromPopupId_Params
{
	struct FString*                                    PopupId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	class UWebPopup_C*                                 WebPopup;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl
struct ULobbyWebPopupCanvs_C_ChangeWebPopupUriImpl_Params
{
	struct FString*                                    PopupId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString*                                    Uri;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl
struct ULobbyWebPopupCanvs_C_OnCloseWebPopupImpl_Params
{
	struct FString*                                    PopupId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID
struct ULobbyWebPopupCanvs_C_CloseWebPopupByID_Params
{
	struct FString*                                    WebPopupID;                                               // (CPF_Parm, CPF_ZeroConstructor)
	bool*                                              bForceRemoveParent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup
struct ULobbyWebPopupCanvs_C_RemoveWebPopup_Params
{
	class UWebPopup_C**                                Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup
struct ULobbyWebPopupCanvs_C_AddWebPopup_Params
{
	class UWebPopup_C**                                Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup
struct ULobbyWebPopupCanvs_C_CanShowWebPopup_Params
{
	struct FString*                                    PopupId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl
struct ULobbyWebPopupCanvs_C_CreateWebPopupImpl_Params
{
	struct FWebPopupParam*                             Param;                                                    // (CPF_Parm)
	bool*                                              bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bReuse;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup
struct ULobbyWebPopupCanvs_C_CloseWebPopup_Params
{
	struct FString*                                    PopupId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup
struct ULobbyWebPopupCanvs_C_ShowWebPopup_Params
{
	struct FWebPopupParam*                             Param;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup
struct ULobbyWebPopupCanvs_C_PreloadWebPopup_Params
{
	TArray<struct FWebPopupParam>*                     WebPopupParams;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct
struct ULobbyWebPopupCanvs_C_Construct_Params
{
};

// Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs
struct ULobbyWebPopupCanvs_C_ExecuteUbergraph_LobbyWebPopupCanvs_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
