#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// 0x0030 (0x0278 - 0x0248)
class ULobbyWebPopupCanvs_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                WebPopupCavas;                                            // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UWebPopup_C*>                         PanelAddedWebPopupArray;                                  // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UWebPopup_C*>                         PreCreatePopupArray;                                      // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C");
		return ptr;
	}


	bool HasChildren();
	void CreateWebPopupAndAddPanel(struct FWebPopupParam* Param, bool* bShow, bool* bReuse, class UWebPopup_C** WebPopup);
	void ShowWebPopupImpl(struct FWebPopupParam* PopupParam);
	void OnPreloadWebPopupImpl(TArray<struct FWebPopupParam>* Params);
	void GetWebPopupFromPopupId(struct FString* PopupId, class UWebPopup_C** WebPopup);
	void ChangeWebPopupUriImpl(struct FString* PopupId, struct FString* Uri);
	void OnCloseWebPopupImpl(struct FString* PopupId);
	void CloseWebPopupByID(struct FString* WebPopupID, bool* bForceRemoveParent);
	void RemoveWebPopup(class UWebPopup_C** Widget);
	void AddWebPopup(class UWebPopup_C** Widget);
	void CanShowWebPopup(struct FString* PopupId, bool* Result);
	void CreateWebPopupImpl(struct FWebPopupParam* Param, bool* bShow, bool* bReuse);
	void CloseWebPopup(struct FString* PopupId);
	void ShowWebPopup(struct FWebPopupParam* Param);
	void PreloadWebPopup(TArray<struct FWebPopupParam>* WebPopupParams);
	void Construct();
	void ExecuteUbergraph_LobbyWebPopupCanvs(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
