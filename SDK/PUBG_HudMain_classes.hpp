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

// WidgetBlueprintGeneratedClass HudMain.HudMain_C
// 0x0080 (0x0448 - 0x03C8)
class UHudMain_C : public UHudMainBaseWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                HideOnObserverSpectating;                                 // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ButtonClickedDispatcher;                                  // 0x03D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class UHitNotifyWidget_C*                          HitNotify;                                                // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FColorBlindColorSet                         ColorBlindColorSet_SpetatingName;                         // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                ReplayGetTimeHandler;                                     // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FWidgetTransform                            ObserverSpectatingDownPos;                                // 0x0408(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FWidgetTransform                            ObserverSpectatingUpPos;                                  // 0x0424(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              LastOptionToggleTime;                                     // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SholderPressedTime;                                       // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudMain.HudMain_C");
		return ptr;
	}


	void OnKey_ThrowableItemWheelReleased();
	void OnKey_ThrowableItemWheelPressed();
	void OnKey_HealItemWheelReleased();
	void OnKey_HealItemWheelPressed();
	void MapIconShowNameOnly();
	void MapIconShowIconOnly();
	void MapIconShowBoth();
	void MapIconShow(bool* bShowIcon, bool* bShowName);
	void OnToggleAnticheatCenterBar();
	void OnKey_EmoteWheelReleased();
	void OnKey_EmoteWheelPressed();
	bool OnInit_Delegate(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Replay(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Input(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Widget(class ATslBaseHUD** TslBaseHUD);
	struct FEventReply OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void SetObserverSpectatingUp();
	void SetObserverSpectatingDown();
	void ShouldShowReplayMenu(bool* bShow);
	void BindEventForShowReplayTimeline();
	void ShowReplayTimeLine(bool* bShow);
	void SetHUDForIngameReplayMenu();
	void BindEventForMapClosing();
	void OnKey_ReplayMenuOrEscape();
	void InitForReplay();
	void OnToggleOption();
	void OnMapHide();
	void OnMapShow();
	void OnKey_MapReleased();
	void OnKey_MapPressed();
	void OnShowCarePackageItemList();
	void IsShowMapOrInventory(bool* bIsShow);
	void OnTogglePlayerList();
	void IsCharacterAlive(bool* IsAlive);
	void OnNitifyHit(float* DamagePercent);
	void OnKey_SystemMenuOrEscape();
	void OnToggleMap();
	void OnPossessPawnChange();
	void Construct();
	void HideMapForReplay();
	void CheckReplayTimer();
	void CreateCheckReplayTimer();
	void ExecuteUbergraph_HudMain(int* EntryPoint);
	void ButtonClickedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
