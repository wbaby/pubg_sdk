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

// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// 0x0086 (0x0476 - 0x03F0)
class ATslCaptureLobby_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class ALobbyViewMode_C*                            ViewModeStudio;                                           // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslWeapon*                                  TslWeapon;                                                // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	struct FTransform                                  UiCameraTM;                                               // 0x0410(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  ViewModeTM;                                               // 0x0440(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLeft : 1;                                                // 0x0470(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRight : 1;                                               // 0x0471(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUp : 1;                                                  // 0x0472(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bDown : 1;                                                // 0x0473(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AddView : 1;                                              // 0x0474(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MinusView : 1;                                            // 0x0475(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C");
		return ptr;
	}


	void InpActEvt_Backslash_K2Node_InputKeyEvent_26(struct FKey* Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_25(struct FKey* Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_24(struct FKey* Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_23(struct FKey* Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_22(struct FKey* Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_21(struct FKey* Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_20(struct FKey* Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_19(struct FKey* Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_18(struct FKey* Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_17(struct FKey* Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_16(struct FKey* Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_15(struct FKey* Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_14(struct FKey* Key);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_TslCaptureLobby(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
