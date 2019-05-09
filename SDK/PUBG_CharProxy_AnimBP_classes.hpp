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

// AnimBlueprintGeneratedClass CharProxy_AnimBP.CharProxy_AnimBP_C
// 0x5DD4 (0x6284 - 0x04B0)
class UCharProxy_AnimBP_C : public UTslInventoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_825C3AE34510DAC702F38299520320E5;  // 0x04B8(0x0130)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05E8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662;    // 0x05F0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172;  // 0x0790(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1F1853924178BAEA6BEACCB192D84949;// 0x08C0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E5C510214B9D93BD292810BFE2F603D1;// 0x0908(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77;// 0x0950(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8FC1604343ED2A23C11EAEB5261125E0;// 0x0A30(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5432A2504DCB7C5C33D17E850B0953B1;// 0x0A78(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D;// 0x0AC0(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_406BD3B743A02018F5ECE0B6152CF4CC;// 0x0BE8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21B205254447B5FE68F94B84047A1376;// 0x0CC8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_203D8C8B449C7B836D3E24B6FE69D850;// 0x0D18(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF;// 0x0D68(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D52F2FC34283A3A47745B6B886AFFBB0;// 0x0E48(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E97E81B42424702F70AC7A0BE1DAC7B;// 0x0F28(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7A7BFE2C46B8961489CB07A5A54B844B;// 0x0F78(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13BC291546E37382B9421CB005024781;// 0x0FC8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4FEB3CBB4993C735E5697B9ABA86D593;// 0x1018(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7EF5FE2D4969E9806EE6038352FFCA29;// 0x1068(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4DAEEB1A49A12A56C2AA19A7FEF06CFF;// 0x10B8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1128(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_217FCB10470A39214309EBB1129EC727;    // 0x1130(0x01A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A06990484B3FC26028D44FA5ACB4179D;// 0x12D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B8FF85A748D62EC445CF759565663F02;// 0x1340(0x0070)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_24E7A2C345D59A37751D55ACF23B7355;  // 0x13B0(0x0130)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D;// 0x14E0(0x0140)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FFC361E947B0482F78E47096C02B32C4;// 0x1620(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_074320674063AC07AB26F283D6D78E58;// 0x1668(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680;// 0x16B0(0x0140)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9;// 0x17F0(0x00E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9A2FC77A4F553199FE35D8B9FB312960;  // 0x18D0(0x0130)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_64036C624695CCAE871C91A12B7E4BD6;  // 0x1A00(0x0130)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3;// 0x1B30(0x0128)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E;// 0x1C58(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BFBC4F03438CEF46794AF49E56D43629;// 0x1D60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C591DE54F0AB6A9C9ADEEB4FDDC4C62;// 0x1DE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B23A39644DB5ECB2C2CC0A9BBA7BD3B7;// 0x1E60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4789EB84B94BAF324DEDE8E04D6F50B;// 0x1EE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B9B424241FB104B11A537B7349DA4C7;// 0x1F60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3DA5C7214658D193C32CA1B3EDEC5B06;// 0x1FE0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92D324C64C8D97B7EC404CBE29647A6A;// 0x2060(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8C6BE6834B8224190077FA9A0125327F;// 0x20D0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7913876244FB5B565F3A1995825A2839;// 0x21B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD4;// 0x2220(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_04463918456C9EE24D2FC6BA60D5888A;// 0x2268(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_03098CEB4560DEA557CDB4A432C2B741;// 0x22D8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D493424D42CF2DC582D781A0C47C3BFC;// 0x23B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD3;// 0x2428(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_464FCB144FE9F7DD18711892CC5132BC;// 0x2470(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3EA0D8134E453388078DF7956E1EE968;// 0x24E0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1A21FA3437F9F7B351CEDAEB541E857;// 0x25C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD2;// 0x2630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1EB49A3E4A3043701C76A29320DF628B;// 0x2678(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A16EDEE466CB854EB90319FD188BC55;// 0x26E8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD2252F14ECBEB3C7ED9A8BCA6D0D021;// 0x2758(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_22F0D7B94E96A178C615A99283D38A74;// 0x27C8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F588AE94089767D8A9EA6AA0DBA117A;// 0x28A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD;// 0x2918(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_42B4671A4DA1A6449F28E6BF77BB3235;// 0x2960(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DE260CEA407C68776D9118B2960C17E9;// 0x2A40(0x00D0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FC292CB34C9D970E666EF9B7433D62D3;// 0x2B10(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_631C88D546201C974F742CB8806E8F09;// 0x2E18(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E9C191E14BB06C296AAC56B0AB1FA6BF;// 0x3120(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5991C3C04B715B36A0D33080B66FBECE;// 0x3428(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_01099A7D4A5ABA33AFBA468333D3C0E6;// 0x3730(0x0308)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C5CD9ED54ED82C595A0FE5993B0D51A7;// 0x3A38(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0E4D3D22478115959F38A99EB1EFED42;// 0x3A80(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5AC0BDB14D2A3D1267886E90B77FE3C8;// 0x3AC8(0x0308)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_138D096848F6627DCB3C9496E0576FF0;// 0x3DD0(0x0140)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B60838F74D3948F45299BAA39E5A42CA;// 0x3F10(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0AAD8A9C4B28F64A540A3FA5A66A33DD;// 0x3F58(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88EF657744D7CD0A7FDC0899BF7388B1;// 0x3FA0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CF4C69E94D4584561F0E05BD3E8362E5;// 0x4080(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E4F411C2440952ED340FA18691589094;// 0x4160(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C5CC2124BFDF72A2E770B838AB7F6EE;// 0x4240(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BD6709DD4B5C02B97A30ADA130680965;// 0x4290(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32A421124D76CB4FA4D07B8B33404E2F;// 0x43D0(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88CAAB864B27793D6A4FEA9278275EBA;// 0x4510(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D1F2A2F94C6F6B4125EA27959FC98302;// 0x4580(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A84BCBEA47A42CFCC1746B9714A69C80;// 0x45D0(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9CE93AA14E65AE0F24AC659FCD3CDBB6;// 0x48D8(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_784B5B1A4FE48049FF3706AADCE816F3;// 0x4BE0(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_241AE0874FD9B2E6CFF20FBFA731C9BB;// 0x4EE8(0x0308)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B28D304546719889502F7196BE77331D;// 0x51F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48F8697745D40D58C66DF0A99B77D1B7;// 0x5270(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AA6112D4D3576942566988274BF8537;// 0x52F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB4308DA4AABC54CC57CA8849CF9FD4D;// 0x5370(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B669BF064CA73609C8747CBC24DFFA67;// 0x53F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF4764054176C39B518808A6ADE577B5;// 0x5460(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_09EDA3AB4B94830C91DD21B77FC031A2;// 0x54A8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FC5FEA4E4757AF43D7DA82B1DAEEA210;// 0x54F8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_50319A28442CEC6A66F09AAA1CF432E7;// 0x5540(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4C9B2CCE4DB510CFA8E9CD9B5715C2FE;// 0x5588(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27EF191A40B139062F7EE1B35E0F5853;// 0x55D0(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26AC071F48330830E366B3ABF7151241;// 0x5710(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4D78DCDC49DAE824B3D93692F28215C9;      // 0x5780(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_92BF24D7422E4FF37C7292874E8128C4;      // 0x57F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_45540D0F4B3D1253461381A0E8211501;// 0x5860(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B1B8D05047C0276E40EC4982E8DCD52A;// 0x58A8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1ACF15E14242FCF6F35B54AD108C5E4D;// 0x5988(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CBC1D0164B60BC6744CC67A7498B6C73;// 0x5A68(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DEE412844DF63DD57177199BCCB4D6C7;// 0x5AB8(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0;// 0x5B98(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_8D65CA8E4C2DF91736AC45B7731017E9;      // 0x5C78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8CEB5EA94DE47DD2F9566D9864274BC1;// 0x5CC0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BC8D319540A5FD23C5CA519E8C2FFA0D;// 0x5D30(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF5F1D0D4999D3FC20A9ABBDD916501E;// 0x5DA0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60D457F0437BD0941E743F97374335F4;// 0x5E10(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E444141446032D2C667E3B21195FB53;// 0x5E80(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB5FD9AC41A1DAD6D3BA2581D0A1FA47;// 0x5EF0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFCF09BC463F7C0AC6A052A0EB3DA6AD;// 0x5F60(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_04EA736E43AC456809982C905F923F52;// 0x5FD0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6735DA1E474C3C86505F22BF5AD37830;// 0x6040(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_276D5CDF43F85F28142267B089375167;// 0x60B0(0x0070)
	unsigned char                                      UnknownData02[0x1];                                       // 0x6120(0x0001) UNKNOWN PROPERTY: EnumProperty CharProxy_AnimBP.CharProxy_AnimBP_C.AnimWeaponType
	unsigned char                                      UnknownData03[0x7];                                       // 0x6121(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             GripBlendspace;                                           // 0x6128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Yaw;                                                      // 0x6130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Pitch;                                                    // 0x6134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Aimstate;                                                 // 0x6138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendTime;                                                // 0x613C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PistolOffset;                                             // 0x6140(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GripType;                                                 // 0x614C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlinkAlpha;                                               // 0x6150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x6154(0x0001) UNKNOWN PROPERTY: EnumProperty CharProxy_AnimBP.CharProxy_AnimBP_C.WeaponClassEnum
	unsigned char                                      UnknownData05[0x3];                                       // 0x6155(0x0003) MISSED OFFSET
	float                                              LH_GripIndex;                                             // 0x6158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x615C(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             LH_GripBS;                                                // 0x6160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Position;                                                 // 0x6168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x616C(0x0004) MISSED OFFSET
	class ALobbyCharacter*                             LobbyCharacterRerefence;                                  // 0x6170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsLobbyReady : 1;                                         // 0x6178(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x6179(0x0007) MISSED OFFSET
	TArray<class UAnimSequence*>                       AnimNotReady;                                             // 0x6180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UAnimSequence*>                       AnimReady;                                                // 0x6190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UAnimSequence*>                       AnimNotReadyToReady;                                      // 0x61A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UAnimSequence*>                       AnimReadyToNotReady;                                      // 0x61B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FVector                                     Wind;                                                     // 0x61C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     InitialWind;                                              // 0x61CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // 0x61D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x61E0(0x0001) UNKNOWN PROPERTY: EnumProperty CharProxy_AnimBP.CharProxy_AnimBP_C.CameraState
	unsigned char                                      UnknownData10[0x7];                                       // 0x61E1(0x0007) MISSED OFFSET
	class ALobbyHUD*                                   LobbyHUDRef;                                              // 0x61E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bShowLobbyAnimation : 1;                                  // 0x61F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x61F1(0x0003) MISSED OFFSET
	float                                              NewVar_1;                                                 // 0x61F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     AxisFix;                                                  // 0x61F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x6204(0x0004) MISSED OFFSET
	class UCurveFloat*                                 LobbyAdjust;                                              // 0x6208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTslWeaponAnimInfo                          CachedWeaponAnimInfo;                                     // 0x6210(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAnimSequence*                               AnimWeapon_Default;                                       // 0x6230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Pistol;                                        // 0x6238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_SR;                                            // 0x6240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Shotgun;                                       // 0x6248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_SMG;                                           // 0x6250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_LMG;                                           // 0x6258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Melee;                                         // 0x6260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_DMR;                                           // 0x6268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Carbine;                                       // 0x6270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Rifle;                                         // 0x6278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AdjustedIKLH;                                             // 0x6280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CharProxy_AnimBP.CharProxy_AnimBP_C");
		return ptr;
	}


	void ProcessLobbyCharacter(class ALobbyCharacter** LobbyCharRef);
	void UpdateBlink();
	void GetAnimWeaponIKLeft(struct FTransform* IKLeft);
	void GetAnimWeaponType();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_138D096848F6627DCB3C9496E0576FF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_BD6709DD4B5C02B97A30ADA130680965();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_32A421124D76CB4FA4D07B8B33404E2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_A84BCBEA47A42CFCC1746B9714A69C80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_9CE93AA14E65AE0F24AC659FCD3CDBB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_784B5B1A4FE48049FF3706AADCE816F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_241AE0874FD9B2E6CFF20FBFA731C9BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_B28D304546719889502F7196BE77331D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_22F0D7B94E96A178C615A99283D38A74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_48F8697745D40D58C66DF0A99B77D1B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_4AA6112D4D3576942566988274BF8537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_BB4308DA4AABC54CC57CA8849CF9FD4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_27EF191A40B139062F7EE1B35E0F5853();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_A1A21FA3437F9F7B351CEDAEB541E857();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_3EA0D8134E453388078DF7956E1EE968();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_8CEB5EA94DE47DD2F9566D9864274BC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_BC8D319540A5FD23C5CA519E8C2FFA0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_FF5F1D0D4999D3FC20A9ABBDD916501E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_60D457F0437BD0941E743F97374335F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_7E444141446032D2C667E3B21195FB53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_DB5FD9AC41A1DAD6D3BA2581D0A1FA47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_CFCF09BC463F7C0AC6A052A0EB3DA6AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_04EA736E43AC456809982C905F923F52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_6735DA1E474C3C86505F22BF5AD37830();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_276D5CDF43F85F28142267B089375167();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_D493424D42CF2DC582D781A0C47C3BFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_5AC0BDB14D2A3D1267886E90B77FE3C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_03098CEB4560DEA557CDB4A432C2B741();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_01099A7D4A5ABA33AFBA468333D3C0E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_5991C3C04B715B36A0D33080B66FBECE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_7913876244FB5B565F3A1995825A2839();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_8C6BE6834B8224190077FA9A0125327F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_3DA5C7214658D193C32CA1B3EDEC5B06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_E9C191E14BB06C296AAC56B0AB1FA6BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_631C88D546201C974F742CB8806E8F09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_FC292CB34C9D970E666EF9B7433D62D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_1B9B424241FB104B11A537B7349DA4C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_B4789EB84B94BAF324DEDE8E04D6F50B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_5C591DE54F0AB6A9C9ADEEB4FDDC4C62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByBool_DE260CEA407C68776D9118B2960C17E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void OnReady_Event_1(bool bReady);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_9F588AE94089767D8A9EA6AA0DBA117A();
	void OnLobbyEmotePlay_Event_1(struct FName* EmoteName);
	void ExecuteUbergraph_CharProxy_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
