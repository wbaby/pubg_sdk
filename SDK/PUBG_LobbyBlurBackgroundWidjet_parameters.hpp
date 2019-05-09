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

// Function UMG.UserWidget.UnregisterInputComponent
struct ULobbyBlurBackgroundWidjet_C_UnregisterInputComponent_Params
{
};

// Function UMG.UserWidget.Tick
struct ULobbyBlurBackgroundWidjet_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float                                              InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct ULobbyBlurBackgroundWidjet_C_StopListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct ULobbyBlurBackgroundWidjet_C_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct ULobbyBlurBackgroundWidjet_C_StopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.StopAllAnimations
struct ULobbyBlurBackgroundWidjet_C_StopAllAnimations_Params
{
};

// Function UMG.UserWidget.SetPositionInViewport
struct ULobbyBlurBackgroundWidjet_C_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bRemoveDPIScale;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetPlaybackSpeed
struct ULobbyBlurBackgroundWidjet_C_SetPlaybackSpeed_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetPadding
struct ULobbyBlurBackgroundWidjet_C_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.UserWidget.SetOwningPlayer
struct ULobbyBlurBackgroundWidjet_C_SetOwningPlayer_Params
{
	class APlayerController*                           LocalPlayerController;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetOwningLocalPlayer
struct ULobbyBlurBackgroundWidjet_C_SetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct ULobbyBlurBackgroundWidjet_C_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionPriority
struct ULobbyBlurBackgroundWidjet_C_SetInputActionPriority_Params
{
	int                                                NewPriority;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct ULobbyBlurBackgroundWidjet_C_SetInputActionBlocking_Params
{
	bool                                               bShouldBlock;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetForegroundColor
struct ULobbyBlurBackgroundWidjet_C_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        // (CPF_Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct ULobbyBlurBackgroundWidjet_C_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                     // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct ULobbyBlurBackgroundWidjet_C_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct ULobbyBlurBackgroundWidjet_C_SetAnchorsInViewport_Params
{
	struct FAnchors                                    Anchors;                                                  // (CPF_Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct ULobbyBlurBackgroundWidjet_C_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.ReverseAnimation
struct ULobbyBlurBackgroundWidjet_C_ReverseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.RemoveFromViewport
struct ULobbyBlurBackgroundWidjet_C_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.RegisterInputComponent
struct ULobbyBlurBackgroundWidjet_C_RegisterInputComponent_Params
{
};

// Function UMG.UserWidget.PreConstruct
struct ULobbyBlurBackgroundWidjet_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PlaySound
struct ULobbyBlurBackgroundWidjet_C_PlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationTo
struct ULobbyBlurBackgroundWidjet_C_PlayAnimationTo_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StartAtTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndAtTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimation
struct ULobbyBlurBackgroundWidjet_C_PlayAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StartAtTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PauseAnimation
struct ULobbyBlurBackgroundWidjet_C_PauseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnTouchStarted
struct ULobbyBlurBackgroundWidjet_C_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct ULobbyBlurBackgroundWidjet_C_OnTouchMoved_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct ULobbyBlurBackgroundWidjet_C_OnTouchGesture_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               GestureEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct ULobbyBlurBackgroundWidjet_C_OnTouchEnded_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct ULobbyBlurBackgroundWidjet_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct ULobbyBlurBackgroundWidjet_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct ULobbyBlurBackgroundWidjet_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct ULobbyBlurBackgroundWidjet_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct ULobbyBlurBackgroundWidjet_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct ULobbyBlurBackgroundWidjet_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct ULobbyBlurBackgroundWidjet_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.UserWidget.OnMouseButtonUp
struct ULobbyBlurBackgroundWidjet_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct ULobbyBlurBackgroundWidjet_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct ULobbyBlurBackgroundWidjet_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct ULobbyBlurBackgroundWidjet_C_OnMotionDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FMotionEvent                                InMotionEvent;                                            // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct ULobbyBlurBackgroundWidjet_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct ULobbyBlurBackgroundWidjet_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct ULobbyBlurBackgroundWidjet_C_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FCharacterEvent                             InCharacterEvent;                                         // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnFocusReceived
struct ULobbyBlurBackgroundWidjet_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct ULobbyBlurBackgroundWidjet_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (CPF_Parm)
};

// Function UMG.UserWidget.OnDrop
struct ULobbyBlurBackgroundWidjet_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragOver
struct ULobbyBlurBackgroundWidjet_C_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragLeave
struct ULobbyBlurBackgroundWidjet_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragEnter
struct ULobbyBlurBackgroundWidjet_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragDetected
struct ULobbyBlurBackgroundWidjet_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragCancelled
struct ULobbyBlurBackgroundWidjet_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnControllerButtonReleased
struct ULobbyBlurBackgroundWidjet_C_OnControllerButtonReleased_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnControllerButtonPressed
struct ULobbyBlurBackgroundWidjet_C_OnControllerButtonPressed_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnControllerAnalogValueChanged
struct ULobbyBlurBackgroundWidjet_C_OnControllerAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnAnimationStarted
struct ULobbyBlurBackgroundWidjet_C_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationFinished
struct ULobbyBlurBackgroundWidjet_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct ULobbyBlurBackgroundWidjet_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.ListenForInputAction
struct ULobbyBlurBackgroundWidjet_C_ListenForInputAction_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bConsume;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct ULobbyBlurBackgroundWidjet_C_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct ULobbyBlurBackgroundWidjet_C_IsListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsInViewport
struct ULobbyBlurBackgroundWidjet_C_IsInViewport_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsInteractable
struct ULobbyBlurBackgroundWidjet_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsAnyAnimationPlaying
struct ULobbyBlurBackgroundWidjet_C_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct ULobbyBlurBackgroundWidjet_C_IsAnimationPlaying_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct ULobbyBlurBackgroundWidjet_C_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayer
struct ULobbyBlurBackgroundWidjet_C_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningLocalPlayer
struct ULobbyBlurBackgroundWidjet_C_GetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetIsVisible
struct ULobbyBlurBackgroundWidjet_C_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetAnimationCurrentTime
struct ULobbyBlurBackgroundWidjet_C_GetAnimationCurrentTime_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetAnchorsInViewport
struct ULobbyBlurBackgroundWidjet_C_GetAnchorsInViewport_Params
{
	struct FAnchors                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.GetAlignmentInViewport
struct ULobbyBlurBackgroundWidjet_C_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.FinishStoppedSequencePlayers
struct ULobbyBlurBackgroundWidjet_C_FinishStoppedSequencePlayers_Params
{
};

// Function UMG.UserWidget.Destruct
struct ULobbyBlurBackgroundWidjet_C_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct ULobbyBlurBackgroundWidjet_C_Construct_Params
{
};

// Function UMG.UserWidget.AddToViewport
struct ULobbyBlurBackgroundWidjet_C_AddToViewport_Params
{
	int                                                ZOrder;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct ULobbyBlurBackgroundWidjet_C_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
