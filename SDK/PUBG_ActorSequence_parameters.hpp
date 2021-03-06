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

// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UActorSequencePlayer_Stop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
struct UActorSequencePlayer_StartPlayingNextTick_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UActorSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
struct UActorSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewEndTime;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UActorSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UActorSequencePlayer_PlayReverse_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UActorSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.Play
struct UActorSequencePlayer_Play_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UActorSequencePlayer_Pause_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UActorSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UActorSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
struct UActorSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
struct UActorSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
struct UActorSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetLength
struct UActorSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UActorSequencePlayer_GetBoundObjects_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                            // (CPF_Parm)
	TArray<class UObject*>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UActorSequencePlayer_ChangePlaybackDirection_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
