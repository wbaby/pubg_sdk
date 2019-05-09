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

// Function AkAudio.AkAmbientSound.StopAmbientSound
struct AAkAmbientSound_StopAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.StartAmbientSound
struct AAkAmbientSound_StartAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.IsCurrentlyPlaying
struct AAkAmbientSound_IsCurrentlyPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.StopPlayingID
struct UAkComponent_StopPlayingID_Params
{
	int                                                PlayingID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.Stop
struct UAkComponent_Stop_Params
{
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
	struct FString                                     SwitchGroup;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SwitchState;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
	bool                                               bStopWhenOwnerDestroyed;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.SetRTPCValue
struct UAkComponent_SetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.SetActiveListeners
struct UAkComponent_SetActiveListeners_Params
{
	int                                                in_uListenerMask;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
	struct FString                                     Trigger;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function AkAudio.AkComponent.PostAssociatedAkEvent
struct UAkComponent_PostAssociatedAkEvent_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
	struct FString                                     in_EventName;                                             // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEvent
struct UAkComponent_PostAkEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     in_EventName;                                             // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.IsCurrentlyPlaying
struct UAkComponent_IsCurrentlyPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.CalculateRelativeSpeed
struct UAkComponent_CalculateRelativeSpeed_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AkAudio.AkComponent.CalculateDynamicReverb
struct UAkComponent_CalculateDynamicReverb_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
