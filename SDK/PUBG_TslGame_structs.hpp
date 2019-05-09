#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TslGame.EPopupButtonID
enum class EPopupButtonID
{
	EPopupButtonID__Cancel_Or_No   = 0,
	EPopupButtonID__Yes_Or_OK      = 1,
	EPopupButtonID__EPopupButtonID_MAX = 2
};


// Enum TslGame.ESystemMessageType
enum class ESystemMessageType
{
	ESystemMessageType__Debug      = 0,
	ESystemMessageType__Notify     = 1,
	ESystemMessageType__Warning    = 2,
	ESystemMessageType__Error      = 3,
	ESystemMessageType__Important  = 4,
	ESystemMessageType__NotifyCommand = 5,
	ESystemMessageType__ESystemMessageType_MAX = 6
};


// Enum TslGame.EDamageReason
enum class EDamageReason
{
	EDamageReason__None            = 0,
	EDamageReason__HeadShot        = 1,
	EDamageReason__TorsoShot       = 2,
	EDamageReason__PelvisShot      = 3,
	EDamageReason__ArmShot         = 4,
	EDamageReason__LegShot         = 5,
	EDamageReason__NonSpecific     = 6,
	EDamageReason__EDamageReason_MAX = 7
};


// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory
{
	EDamageTypeCategory__Damage_None = 0,
	EDamageTypeCategory__Damage_Instant = 1,
	EDamageTypeCategory__Damage_Gun = 2,
	EDamageTypeCategory__Damage_Melee = 3,
	EDamageTypeCategory__Damage_Punch = 4,
	EDamageTypeCategory__Damage_ZombiePunch = 5,
	EDamageTypeCategory__Damage_Groggy = 6,
	EDamageTypeCategory__Damage_BlueZone = 7,
	EDamageTypeCategory__Damage_VehicleHit = 8,
	EDamageTypeCategory__Damage_VehicleCrashHit = 9,
	EDamageTypeCategory__Damage_Molotov = 10,
	EDamageTypeCategory__Damage_Explosion = 11,
	EDamageTypeCategory__Damage_Explosion_Grenade = 12,
	EDamageTypeCategory__Damage_Explosion_RedZone = 13,
	EDamageTypeCategory__Damage_Explosion_Vehicle = 14,
	EDamageTypeCategory__Damage_Instant_Fall = 15,
	EDamageTypeCategory__Damage_Drown = 16,
	EDamageTypeCategory__Damage_BleedOut = 17,
	EDamageTypeCategory__Damage_MAX = 18
};


// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID
{
	EWeaponAttachmentSlotID__None  = 0,
	EWeaponAttachmentSlotID__Muzzle = 1,
	EWeaponAttachmentSlotID__LowerRail = 2,
	EWeaponAttachmentSlotID__UpperRail = 3,
	EWeaponAttachmentSlotID__Magazine = 4,
	EWeaponAttachmentSlotID__Stock = 5,
	EWeaponAttachmentSlotID__Angled = 6,
	EWeaponAttachmentSlotID__EWeaponAttachmentSlotID_MAX = 7
};


// Enum TslGame.ETargetingType
enum class ETargetingType
{
	ETargetingType__Targeting_None = 0,
	ETargetingType__Targeting_Aiming = 1,
	ETargetingType__Targeting_Scoping = 2,
	ETargetingType__Targeting_MAX  = 3
};


// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction
{
	ETslOvercastAction__Initialized = 0,
	ETslOvercastAction__Prolonged  = 1,
	ETslOvercastAction__CreateThunder = 2,
	ETslOvercastAction__ETslOvercastAction_MAX = 3
};


// Enum TslGame.EServerStatType
enum class EServerStatType
{
	UE                             = 0,
	NET                            = 1,
	EServerStatType_MAX            = 2
};


// Enum TslGame.EQualityType
enum class EQualityType
{
	EQualityType__EMainQuality     = 0,
	EQualityType__EViewDistanceQuality = 1,
	EQualityType__EShadowQuality   = 2,
	EQualityType__EAntiAliasingQuality = 3,
	EQualityType__ETextureQuality  = 4,
	EQualityType__EVisualEffectQuality = 5,
	EQualityType__EPostProcessingQuality = 6,
	EQualityType__EFoliageQuality  = 7,
	EQualityType__EQualityType_MAX = 8
};


// Enum TslGame.ERatingRankType
enum class ERatingRankType
{
	ERatingRankType__None          = 0,
	ERatingRankType__Bronze        = 1,
	ERatingRankType__Silver        = 2,
	ERatingRankType__Gold          = 3,
	ERatingRankType__Platinum      = 4,
	ERatingRankType__Diamond       = 5,
	ERatingRankType__Elite         = 6,
	ERatingRankType__Master        = 7,
	ERatingRankType__GrandMaster   = 8,
	ERatingRankType__ERatingRankType_MAX = 9
};


// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType
{
	EThrownWeaponType__Thrown_Grenade = 0,
	EThrownWeaponType__Thrown_Molotov = 1,
	EThrownWeaponType__Thrown_Other = 2,
	EThrownWeaponType__Thrown_MAX  = 3
};


// Enum TslGame.EPowerUpType
enum class EPowerUpType
{
	PowerUp_None                   = 0,
	Powerup_Bandage                = 1,
	PowerUp_FirstAid               = 2,
	Powerup_Medkit                 = 3,
	PowerUp_EnergyDrink            = 4,
	Powerup_Painkillers            = 5,
	PowerUp_Adrenaline             = 6,
	PowerUp_MAX                    = 7,
	EPowerUpType_MAX               = 8
};


// Enum TslGame.ECastAnim
enum class ECastAnim
{
	ECastAnim__None                = 0,
	ECastAnim__Bandage             = 1,
	ECastAnim__FirstAid            = 2,
	ECastAnim__Medkit              = 3,
	ECastAnim__EnergyDrink         = 4,
	ECastAnim__Painkiller          = 5,
	ECastAnim__Adrenaline          = 6,
	ECastAnim__Door                = 7,
	ECastAnim__ECastAnim_MAX       = 8
};


// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects
{
	ECharacterNegativeEffects__Blind = 0,
	ECharacterNegativeEffects__Burning = 1,
	ECharacterNegativeEffects__Total = 2,
	ECharacterNegativeEffects__ECharacterNegativeEffects_MAX = 3
};


// Enum TslGame.ESubjectToReport
enum class ESubjectToReport
{
	ESubjectToReport__None         = 0,
	ESubjectToReport__Killer       = 1,
	ESubjectToReport__Spectating_Player = 2,
	ESubjectToReport__Replay_Player = 3,
	ESubjectToReport__Team_Member  = 4,
	ESubjectToReport__ESubjectToReport_MAX = 5
};


// Enum TslGame.EWelcomeState
enum class EWelcomeState
{
	EWelcomeState__CopyrightAndWarning = 0,
	EWelcomeState__PressAKey       = 1,
	EWelcomeState__NowLoading      = 2,
	EWelcomeState__EWelcomeState_MAX = 3
};


// Enum TslGame.EDamageFieldType
enum class EDamageFieldType
{
	EDamageFieldType__Default      = 0,
	EDamageFieldType__DirectTick   = 1,
	EDamageFieldType__EDamageFieldType_MAX = 2
};


// Enum TslGame.EEffectSpreadState
enum class EEffectSpreadState
{
	EEffectSpreadState__ESS_InitialTrace = 0,
	EEffectSpreadState__ESS_InitialProcess = 1,
	EEffectSpreadState__ESS_Spreading = 2,
	EEffectSpreadState__ESS_SpreadDone = 3,
	EEffectSpreadState__ESS_Ending = 4,
	EEffectSpreadState__ESS_MAX    = 5
};


// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector
{
	ETslFenceSelector__None        = 0,
	ETslFenceSelector__Use         = 1,
	ETslFenceSelector__Use01       = 2,
	ETslFenceSelector__Use02       = 3,
	ETslFenceSelector__Use03       = 4,
	ETslFenceSelector__ETslFenceSelector_MAX = 5
};


// Enum TslGame.EReactionType
enum class EReactionType
{
	EReactionType__Reaciton_None   = 0,
	EReactionType__Reaction_Physics = 1,
	EReactionType__Reaction_Destructible = 2,
	EReactionType__EReactionType_MAX = 3
};


// Enum TslGame.EWarModeCarePackageKitType
enum class EWarModeCarePackageKitType
{
	EWarModeCarePackageKitType__CarepackageKit_Off = 0,
	EWarModeCarePackageKitType__CarepackageKit_Basic = 1,
	EWarModeCarePackageKitType__CarepackageKit_ARKit = 2,
	EWarModeCarePackageKitType__CarepackageKit_SRKit = 3,
	EWarModeCarePackageKitType__CarepackageKit_MAX = 4
};


// Enum TslGame.ETslGameOptionKeyBindingType
enum class ETslGameOptionKeyBindingType
{
	ETslGameOptionKeyBindingType__None = 0,
	ETslGameOptionKeyBindingType__Action = 1,
	ETslGameOptionKeyBindingType__Axis = 2,
	ETslGameOptionKeyBindingType__ETslGameOptionKeyBindingType_MAX = 3
};


// Enum TslGame.ETslGameOptionSupplementaryType
enum class ETslGameOptionSupplementaryType
{
	ETslGameOptionSupplementaryType__None = 0,
	ETslGameOptionSupplementaryType__KeyboardLayout = 1,
	ETslGameOptionSupplementaryType__PreviewImage = 2,
	ETslGameOptionSupplementaryType__PreviewCrosshair = 3,
	ETslGameOptionSupplementaryType__VolumeUnitMeter = 4,
	ETslGameOptionSupplementaryType__ETslGameOptionSupplementaryType_MAX = 5
};


// Enum TslGame.EOutGameMontageState
enum class EOutGameMontageState
{
	EOutGameMontageState__Default  = 0,
	EOutGameMontageState__Playing  = 1,
	EOutGameMontageState__Interrupted = 2,
	EOutGameMontageState__Finished = 3,
	EOutGameMontageState__EOutGameMontageState_MAX = 4
};


// Enum TslGame.EObserverHudAnimType
enum class EObserverHudAnimType
{
	EObserverHudAnimType__TeamWipeOutAnim = 0,
	EObserverHudAnimType__PersonalKillingSpreeAnim = 1,
	EObserverHudAnimType__TeamTotalKillingSpreeAnim = 2,
	EObserverHudAnimType__EObserverHudAnimType_MAX = 3
};


// Enum TslGame.EObserverPlayerListType
enum class EObserverPlayerListType
{
	EObserverPlayerListType__Kill  = 0,
	EObserverPlayerListType__Survivor = 1,
	EObserverPlayerListType__Score = 2,
	EObserverPlayerListType__Max   = 3,
	EObserverPlayerListType__EObserverPlayerListType_MAX = 4
};


// Enum TslGame.ETslParticleCullType
enum class ETslParticleCullType
{
	ETslParticleCullType__None     = 0,
	ETslParticleCullType__Distance = 1,
	ETslParticleCullType__Frustum  = 2,
	ETslParticleCullType__LastRenderedTime = 3,
	ETslParticleCullType__SameTransform = 4,
	ETslParticleCullType__NearbyTransform = 5,
	ETslParticleCullType__DistAndFrustumAndNear = 6,
	ETslParticleCullType__All      = 7,
	ETslParticleCullType__ETslParticleCullType_MAX = 8
};


// Enum TslGame.ETslParticleGroupPriority
enum class ETslParticleGroupPriority
{
	ETslParticleGroupPriority__High = 0,
	ETslParticleGroupPriority__Low = 1,
	ETslParticleGroupPriority__ETslParticleGroupPriority_MAX = 2
};


// Enum TslGame.ECustomDamageZoneType
enum class ECustomDamageZoneType
{
	ECustomDamageZoneType__Head    = 0,
	ECustomDamageZoneType__UpperBody = 1,
	ECustomDamageZoneType__LowerBody = 2,
	ECustomDamageZoneType__Arms    = 3,
	ECustomDamageZoneType__Legs    = 4,
	ECustomDamageZoneType__ECustomDamageZoneType_MAX = 5
};


// Enum TslGame.ECustomDamageWeaponClass
enum class ECustomDamageWeaponClass
{
	ECustomDamageWeaponClass__Bullet = 0,
	ECustomDamageWeaponClass__Melee = 1,
	ECustomDamageWeaponClass__ECustomDamageWeaponClass_MAX = 2
};


// Enum TslGame.EThrowableState
enum class EThrowableState
{
	EThrowableState__Idle          = 0,
	EThrowableState__PinOff        = 1,
	EThrowableState__Cooking       = 2,
	EThrowableState__Throw         = 3,
	EThrowableState__Dropped       = 4,
	EThrowableState__EThrowableState_MAX = 5
};


// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType
{
	EProjectileExplosionStartType__NotStart = 0,
	EProjectileExplosionStartType__Impact = 1,
	EProjectileExplosionStartType__Delay = 2,
	EProjectileExplosionStartType__ImpactOrDelay = 3,
	EProjectileExplosionStartType__EProjectileExplosionStartType_MAX = 4
};


// Enum TslGame.EProjectileExplodeState
enum class EProjectileExplodeState
{
	EProjectileExplodeState__NotExplode = 0,
	EProjectileExplodeState__ImpactExplode = 1,
	EProjectileExplodeState__TimerExplode = 2,
	EProjectileExplodeState__EProjectileExplodeState_MAX = 3
};


// Enum TslGame.EProjectileExplosionRotationType
enum class EProjectileExplosionRotationType
{
	EProjectileExplosionRotationType__ProjectileUpVector = 0,
	EProjectileExplosionRotationType__WorldUpVector = 1,
	EProjectileExplosionRotationType__EProjectileExplosionRotationType_MAX = 2
};


// Enum TslGame.EMolotovSimulationType
enum class EMolotovSimulationType
{
	EMolotovSimulationType__Molotov_SimulationImpact = 0,
	EMolotovSimulationType__Molotov_SimulationProjectile = 1,
	EMolotovSimulationType__Molotov_SimulationFragment = 2,
	EMolotovSimulationType__Molotov_SimulationVolumetric = 3,
	EMolotovSimulationType__Molotov_MAX = 4
};


// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType
{
	ETslReferenceObjType__GameMode = 0,
	ETslReferenceObjType__Character = 1,
	ETslReferenceObjType__ETslReferenceObjType_MAX = 2
};


// Enum TslGame.EReplayTimelineMode
enum class EReplayTimelineMode
{
	EReplayTimelineMode__ReplayPlay = 0,
	EReplayTimelineMode__ReplayEditor = 1,
	EReplayTimelineMode__ReplayRender = 2,
	EReplayTimelineMode__EReplayTimelineMode_MAX = 3
};


// Enum TslGame.EConditionOfDeath
enum class EConditionOfDeath
{
	EConditionOfDeath__HeatShot    = 0,
	EConditionOfDeath__DBNO        = 1,
	EConditionOfDeath__DBNOByHeadShot = 2,
	EConditionOfDeath__None        = 3,
	EConditionOfDeath__EConditionOfDeath_MAX = 4
};


// Enum TslGame.ETslWheelWidgetMouseCursorDirectionType
enum class ETslWheelWidgetMouseCursorDirectionType
{
	ETslWheelWidgetMouseCursorDirectionType__ABSOLUTE_COORD = 0,
	ETslWheelWidgetMouseCursorDirectionType__AREA_RESTRICTED_COORD = 1,
	ETslWheelWidgetMouseCursorDirectionType__CIRCULAR_RESTRICTED_COORD = 2,
	ETslWheelWidgetMouseCursorDirectionType__ETslWheelWidgetMouseCursorDirectionType_MAX = 3
};


// Enum TslGame.ETslWheelWidgetSelectType
enum class ETslWheelWidgetSelectType
{
	ETslWheelWidgetSelectType__BY_CLICK = 0,
	ETslWheelWidgetSelectType__BY_RELEASE = 1,
	ETslWheelWidgetSelectType__BY_MAX = 2
};


// Enum TslGame.EBluezoneState
enum class EBluezoneState
{
	EBluezoneState__None           = 0,
	EBluezoneState__Wait           = 1,
	EBluezoneState__Release        = 2,
	EBluezoneState__EBluezoneState_MAX = 3
};


// Enum TslGame.EEquipableItemIconVisibility
enum class EEquipableItemIconVisibility
{
	EEquipableItemIconVisibility__Always = 0,
	EEquipableItemIconVisibility__WhenEquipped = 1,
	EEquipableItemIconVisibility__EEquipableItemIconVisibility_MAX = 2
};


// Enum TslGame.EMinimapFocus
enum class EMinimapFocus
{
	EMinimapFocus__CharacterFocus  = 0,
	EMinimapFocus__NextPlayzoneFocus = 1,
	EMinimapFocus__None            = 2,
	EMinimapFocus__EMinimapFocus_MAX = 3
};


// Enum TslGame.EMarkStates
enum class EMarkStates
{
	EMarkStates__Normal            = 0,
	EMarkStates__Groggy            = 1,
	EMarkStates__Dead              = 2,
	EMarkStates__Vehicle           = 3,
	EMarkStates__Parachute         = 4,
	EMarkStates__Quitter           = 5,
	EMarkStates__EMarkStates_MAX   = 6
};


// Enum TslGame.EBinaryStepperType
enum class EBinaryStepperType
{
	EBinaryStepperType__OFF        = 0,
	EBinaryStepperType__ON         = 1,
	EBinaryStepperType__EBinaryStepperType_MAX = 2
};


// Enum TslGame.EGuideKeyType
enum class EGuideKeyType
{
	EGuideKeyType__None            = 0,
	EGuideKeyType__PickUp          = 1,
	EGuideKeyType__PickUpAndEquip  = 2,
	EGuideKeyType__PickUpAndPickUpAmount = 3,
	EGuideKeyType__Unequip         = 4,
	EGuideKeyType__DetachAll       = 5,
	EGuideKeyType__DetachAndDetachAll = 6,
	EGuideKeyType__Drop            = 7,
	EGuideKeyType__DropAndEquip    = 8,
	EGuideKeyType__DropAndDropAmount = 9,
	EGuideKeyType__DropAndDropAll  = 10,
	EGuideKeyType__Equip           = 11,
	EGuideKeyType__EquipAndQuickEquip = 12,
	EGuideKeyType__XQuickEquip     = 13,
	EGuideKeyType__XHoldQuickEquip = 14,
	EGuideKeyType__Swap            = 15,
	EGuideKeyType__Use             = 16,
	EGuideKeyType__Confirm         = 17,
	EGuideKeyType__Cancel          = 18,
	EGuideKeyType__SwitchSlot      = 19,
	EGuideKeyType__EGuideKeyType_MAX = 20
};


// Enum TslGame.EGuideLineType
enum class EGuideLineType
{
	EGuideLineType__Switch         = 0,
	EGuideLineType__Upper          = 1,
	EGuideLineType__Lower          = 2,
	EGuideLineType__EGuideLineType_MAX = 3
};


// Enum TslGame.EPopupStyle
enum class EPopupStyle
{
	EPopupStyle__Ok_Cancel         = 0,
	EPopupStyle__Ok                = 1,
	EPopupStyle__Yes_No            = 2,
	EPopupStyle__EPopupStyle_MAX   = 3
};


// Enum TslGame.EEquippedWeaponRTPC
enum class EEquippedWeaponRTPC
{
	EEquippedWeaponRTPC__None      = 0,
	EEquippedWeaponRTPC__HandBomb_Bottle = 1,
	EEquippedWeaponRTPC__HandBomb_Metal = 2,
	EEquippedWeaponRTPC__Melee     = 3,
	EEquippedWeaponRTPC__Pistol    = 4,
	EEquippedWeaponRTPC__SMG       = 5,
	EEquippedWeaponRTPC__AR        = 6,
	EEquippedWeaponRTPC__SR        = 7,
	EEquippedWeaponRTPC__Max       = 8,
	EEquippedWeaponRTPC__EEquippedWeaponRTPC_MAX = 9
};


// Enum TslGame.EForceRefreshDummy
enum class EForceRefreshDummy
{
	EForceRefreshDummy__Refresh1   = 0,
	EForceRefreshDummy__Refresh2   = 1,
	EForceRefreshDummy__EForceRefreshDummy_MAX = 2
};


// Enum TslGame.EViewModeCategory
enum class EViewModeCategory
{
	EViewModeCategory__None        = 0,
	EViewModeCategory__Weapon      = 1,
	EViewModeCategory__Parachute   = 2,
	EViewModeCategory__Character   = 3,
	EViewModeCategory__EViewModeCategory_MAX = 4
};


// Enum TslGame.ESystemMenuButtonType
enum class ESystemMenuButtonType
{
	ESystemMenuButtonType__RESUME  = 0,
	ESystemMenuButtonType__SETTINGS = 1,
	ESystemMenuButtonType__TEAM_MANAGEMENT = 2,
	ESystemMenuButtonType__KEY_GUIDE = 3,
	ESystemMenuButtonType__RESTART_LOBBY = 4,
	ESystemMenuButtonType__LEAVE_MATCH = 5,
	ESystemMenuButtonType__EXIT_TO_DESKTOP = 6,
	ESystemMenuButtonType__ESystemMenuButtonType_MAX = 7
};


// Enum TslGame.ERankGuideType
enum class ERankGuideType
{
	ERankGuideType__ForElementaryRank = 0,
	ERankGuideType__ForExpertRank  = 1,
	ERankGuideType__ERankGuideType_MAX = 2
};


// Enum TslGame.EUserRank
enum class EUserRank
{
	EUserRank__ElementaryRank      = 0,
	EUserRank__IntermediateRank    = 1,
	EUserRank__HighRank            = 2,
	EUserRank__ExpertRank          = 3,
	EUserRank__EUserRank_MAX       = 4
};


// Enum TslGame.EProjectileParticleClass
enum class EProjectileParticleClass
{
	EProjectileParticleClass__PPC_None = 0,
	EProjectileParticleClass__PPC_Frag = 1,
	EProjectileParticleClass__PPC_Flash = 2,
	EProjectileParticleClass__PPC_Smoke = 3,
	EProjectileParticleClass__PPC_Molotov = 4,
	EProjectileParticleClass__PPC_Other = 5,
	EProjectileParticleClass__PPC_MAX = 6
};


// Enum TslGame.EReticleType
enum class EReticleType
{
	EReticleType__RedDot           = 0,
	EReticleType__HoloSight        = 1,
	EReticleType__Scope2x          = 2,
	EReticleType__Scope3x          = 3,
	EReticleType__Scope4x          = 4,
	EReticleType__Scope6x          = 5,
	EReticleType__Scope8x          = 6,
	EReticleType__EReticleType_MAX = 7
};


// Enum TslGame.EKeyHintType
enum class EKeyHintType
{
	EKeyHintType__Menu             = 0,
	EKeyHintType__Parachuting      = 1,
	EKeyHintType__Character        = 2,
	EKeyHintType__Driver           = 3,
	EKeyHintType__Rider            = 4,
	EKeyHintType__WeaponUse        = 5,
	EKeyHintType__WeaponChange     = 6,
	EKeyHintType__ADS              = 7,
	EKeyHintType__Aim              = 8,
	EKeyHintType__ADS_8x15x        = 9,
	EKeyHintType__ADS_6x           = 10,
	EKeyHintType__ADS_1x2x3x       = 11,
	EKeyHintType__ADS_IronSight    = 12,
	EKeyHintType__Throwing         = 13,
	EKeyHintType__Heal             = 14,
	EKeyHintType__Swimming         = 15,
	EKeyHintType__TeamSpectating   = 16,
	EKeyHintType__KillerSpectating = 17,
	EKeyHintType__WorldMap         = 18,
	EKeyHintType__None             = 19,
	EKeyHintType__FreefallNew      = 20,
	EKeyHintType__ParachuteNew     = 21,
	EKeyHintType__EKeyHintType_MAX = 22
};


// Enum TslGame.EObserverOutlineType
enum class EObserverOutlineType
{
	SpectatedCharacter             = 0,
	SpectatedCharacterTeam         = 1,
	SpectatedCharacterEnemy        = 2,
	WithoutSpectatedCharacter      = 3,
	WithoutSpectatedTeamCharacter  = 4,
	InteractionFocusingColor       = 5,
	EObserverOutlineType_MAX       = 6
};


// Enum TslGame.EOptionExposeType
enum class EOptionExposeType
{
	EOptionExposeType__All         = 0,
	EOptionExposeType__PcOnly      = 1,
	EOptionExposeType__XBoxOnly    = 2,
	EOptionExposeType__PS4Only     = 3,
	EOptionExposeType__PcAndXBox   = 4,
	EOptionExposeType__PcAndPS4    = 5,
	EOptionExposeType__XBoxAndPS4  = 6,
	EOptionExposeType__None        = 7,
	EOptionExposeType__EOptionExposeType_MAX = 8
};


// Enum TslGame.EWeatherChange
enum class EWeatherChange
{
	EWeatherChange__NoChange       = 0,
	EWeatherChange__Rainy          = 1,
	EWeatherChange__Foggy          = 2,
	EWeatherChange__EWeatherChange_MAX = 3
};


// Enum TslGame.EMinimapColorType
enum class EMinimapColorType
{
	EMinimapColorType__DESATURATED = 0,
	EMinimapColorType__SATURATED   = 1,
	EMinimapColorType__EMinimapColorType_MAX = 2
};


// Enum TslGame.EDamageZoneType
enum class EDamageZoneType
{
	EDamageZoneType__Head          = 0,
	EDamageZoneType__Torso         = 1,
	EDamageZoneType__Arm           = 2,
	EDamageZoneType__Pelvis        = 3,
	EDamageZoneType__Leg           = 4,
	EDamageZoneType__EDamageZoneType_MAX = 5
};


// Enum TslGame.ERedZoneGenerateType
enum class ERedZoneGenerateType
{
	ERedZoneGenerateType__None     = 0,
	ERedZoneGenerateType__Uniform_Distribution = 1,
	ERedZoneGenerateType__Ringtaw  = 2,
	ERedZoneGenerateType__Outsider = 3,
	ERedZoneGenerateType__RingtawOrOutsider = 4,
	ERedZoneGenerateType__ERedZoneGenerateType_MAX = 5
};


// Enum TslGame.ETslHudType
enum class ETslHudType
{
	ETslHudType__None              = 0,
	ETslHudType__CharacterHud      = 1,
	ETslHudType__SpectatorHud      = 2,
	ETslHudType__ObserverHud       = 3,
	ETslHudType__ReplayHud         = 4,
	ETslHudType__ETslHudType_MAX   = 5
};


// Enum TslGame.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes
{
	EAnimatableCustomizableTypes__Hair = 0,
	EAnimatableCustomizableTypes__Outer = 1,
	EAnimatableCustomizableTypes__Legs = 2,
	EAnimatableCustomizableTypes__EAnimatableCustomizableTypes_MAX = 3
};


// Enum TslGame.EGameEndState
enum class EGameEndState
{
	EGameEndState__None            = 0,
	EGameEndState__CereMony        = 1,
	EGameEndState__Cinematic       = 2,
	EGameEndState__MatchFinish     = 3,
	EGameEndState__EGameEndState_MAX = 4
};


// Enum TslGame.ELobbyBlurChangingStates
enum class ELobbyBlurChangingStates
{
	ELobbyBlurChangingStates__AlwaysOff = 0,
	ELobbyBlurChangingStates__AlwaysOn = 1,
	ELobbyBlurChangingStates__ELobbyBlurChangingStates_MAX = 2
};


// Enum TslGame.ELobbyCameraStates
enum class ELobbyCameraStates
{
	ELobbyCameraStates__XBox_Home  = 0,
	ELobbyCameraStates__Main       = 1,
	ELobbyCameraStates__Main01     = 2,
	ELobbyCameraStates__Menu       = 3,
	ELobbyCameraStates__Custom     = 4,
	ELobbyCameraStates__Custom01   = 5,
	ELobbyCameraStates__EventPass_Milestone = 6,
	ELobbyCameraStates__EventPass_Milestone01 = 7,
	ELobbyCameraStates__EventPass_Missions = 8,
	ELobbyCameraStates__ViewMode_Character = 9,
	ELobbyCameraStates__ViewMode_Weapon = 10,
	ELobbyCameraStates__ViewMode_Parachute = 11,
	ELobbyCameraStates__EventPass_Milestone_0_Particle = 12,
	ELobbyCameraStates__None       = 13,
	ELobbyCameraStates__ELobbyCameraStates_MAX = 14
};


// Enum TslGame.EUiShowType
enum class EUiShowType
{
	EUiShowType__AlwaysShow        = 0,
	EUiShowType__TpsOnlyShow       = 1,
	EUiShowType__FpsOnlyShow       = 2,
	EUiShowType__AlwaysHide        = 3,
	EUiShowType__EUiShowType_MAX   = 4
};


// Enum TslGame.EParachuteCutoffState
enum class EParachuteCutoffState
{
	EParachuteCutoffState__Cutoff_None = 0,
	EParachuteCutoffState__Cutoff_Manual = 1,
	EParachuteCutoffState__Cutoff_Automatic = 2,
	EParachuteCutoffState__Cutoff_Ready = 3,
	EParachuteCutoffState__Cutoff_MAX = 4
};


// Enum TslGame.ESkydiveState
enum class ESkydiveState
{
	ESkydiveState__Skydive_None    = 0,
	ESkydiveState__Skydive_Freefall = 1,
	ESkydiveState__Skydive_ParachuteDeploying = 2,
	ESkydiveState__Skydive_ParachuteDeployed = 3,
	ESkydiveState__Skydive_ParachuteCollapsing = 4,
	ESkydiveState__Skydive_MAX     = 5
};


// Enum TslGame.EGamepadInputResponseTypes
enum class EGamepadInputResponseTypes
{
	EGamepadInputResponseTypes__Pressed = 0,
	EGamepadInputResponseTypes__Released = 1,
	EGamepadInputResponseTypes__Tap = 2,
	EGamepadInputResponseTypes__Hold = 3,
	EGamepadInputResponseTypes__DoubleTap = 4,
	EGamepadInputResponseTypes__EGamepadInputResponseTypes_MAX = 5
};


// Enum TslGame.EGamepadPresets
enum class EGamepadPresets
{
	EGamepadPresets__ControllerTypeA = 0,
	EGamepadPresets__ControllerTypeB = 1,
	EGamepadPresets__ControllerTypeC = 2,
	EGamepadPresets__EGamepadPresets_MAX = 3
};


// Enum TslGame.EKeyGuideShowCases
enum class EKeyGuideShowCases
{
	EKeyGuideShowCases__Reload     = 0,
	EKeyGuideShowCases__ExitVehicle = 1,
	EKeyGuideShowCases__EKeyGuideShowCases_MAX = 2
};


// Enum TslGame.ETslInputModes
enum class ETslInputModes
{
	ETslInputModes__Toggle         = 0,
	ETslInputModes__Hold           = 1,
	ETslInputModes__DoubleTap      = 2,
	ETslInputModes__ETslInputModes_MAX = 3
};


// Enum TslGame.EGameplayClientReplay
enum class EGameplayClientReplay
{
	EGameplayClientReplay__Replay  = 0,
	EGameplayClientReplay__Killcam = 1,
	EGameplayClientReplay__EGameplayClientReplay_MAX = 2
};


// Enum TslGame.EGameplayFunctionalities
enum class EGameplayFunctionalities
{
	EGameplayFunctionalities__FreeLookInterp = 0,
	EGameplayFunctionalities__EGameplayFunctionalities_MAX = 1
};


// Enum TslGame.EInputModeSettingActions
enum class EInputModeSettingActions
{
	EInputModeSettingActions__Crouch = 0,
	EInputModeSettingActions__Prone = 1,
	EInputModeSettingActions__Walk = 2,
	EInputModeSettingActions__Sprint = 3,
	EInputModeSettingActions__HoldRotation = 4,
	EInputModeSettingActions__HoldBreath = 5,
	EInputModeSettingActions__Peek = 6,
	EInputModeSettingActions__Map  = 7,
	EInputModeSettingActions__ADS  = 8,
	EInputModeSettingActions__Aim  = 9,
	EInputModeSettingActions__HoldAngled = 10,
	EInputModeSettingActions__EInputModeSettingActions_MAX = 11
};


// Enum TslGame.EKeyBindingSlot
enum class EKeyBindingSlot
{
	EKeyBindingSlot__FirstKey      = 0,
	EKeyBindingSlot__SecondKey     = 1,
	EKeyBindingSlot__EKeyBindingSlot_MAX = 2
};


// Enum TslGame.EReportDetailCauseType
enum class EReportDetailCauseType
{
	EReportDetailCauseType__AutoAim = 0,
	EReportDetailCauseType__NoRecoil = 1,
	EReportDetailCauseType__EspOrPenetration = 2,
	EReportDetailCauseType__Speedhack = 3,
	EReportDetailCauseType__EReportDetailCauseType_MAX = 4
};


// Enum TslGame.EReportedSessionType
enum class EReportedSessionType
{
	EReportedSessionType__PublicOrCustomGame = 0,
	EReportedSessionType__Killcam  = 1,
	EReportedSessionType__Replay   = 2,
	EReportedSessionType__EReportedSessionType_MAX = 3
};


// Enum TslGame.EReportCause
enum class EReportCause
{
	EReportCause__Default          = 0,
	EReportCause__Cheat            = 1,
	EReportCause__TeamKill         = 2,
	EReportCause__Teaming          = 3,
	EReportCause__InappropriateID  = 4,
	EReportCause__VerbalHarassment = 5,
	EReportCause__Griefing         = 6,
	EReportCause__EReportCause_MAX = 7
};


// Enum TslGame.ItemPackageType
enum class EItemPackageType
{
	ItemPackageType__RootBox       = 0,
	ItemPackageType__CarePackage   = 1,
	ItemPackageType__DroppedPackage = 2,
	ItemPackageType__ItemPackageType_MAX = 3
};


// Enum TslGame.ECarePackageIconType
enum class ECarePackageIconType
{
	ECarePackageIconType__Normal   = 0,
	ECarePackageIconType__Flying   = 1,
	ECarePackageIconType__Opened   = 2,
	ECarePackageIconType__ECarePackageIconType_MAX = 3
};


// Enum TslGame.ECharacterIconType
enum class ECharacterIconType
{
	ECharacterIconType__Normal     = 0,
	ECharacterIconType__Vehicle    = 1,
	ECharacterIconType__Parachute  = 2,
	ECharacterIconType__Die        = 3,
	ECharacterIconType__Groggy     = 4,
	ECharacterIconType__Quitter    = 5,
	ECharacterIconType__Observer   = 6,
	ECharacterIconType__ECharacterIconType_MAX = 7
};


// Enum TslGame.EReportUiType
enum class EReportUiType
{
	EReportUiType__Normal          = 0,
	EReportUiType__Respawn         = 1,
	EReportUiType__EReportUiType_MAX = 2
};


// Enum TslGame.EZombieModePlayerState
enum class EZombieModePlayerState
{
	EZombieModePlayerState__None   = 0,
	EZombieModePlayerState__Human  = 1,
	EZombieModePlayerState__ReadyToRevive = 2,
	EZombieModePlayerState__Zombie = 3,
	EZombieModePlayerState__EZombieModePlayerState_MAX = 4
};


// Enum TslGame.ETeamChangeZombieMode
enum class ETeamChangeZombieMode
{
	ETeamChangeZombieMode__None    = 0,
	ETeamChangeZombieMode__LeaveTeam = 1,
	ETeamChangeZombieMode__JoinTeam = 2,
	ETeamChangeZombieMode__ETeamChangeZombieMode_MAX = 3
};


// Enum TslGame.EFollowCameraMode
enum class EFollowCameraMode
{
	EFollowCameraMode__CharacterCamera = 0,
	EFollowCameraMode__VehicleCamera = 1,
	EFollowCameraMode__AircraftCamera = 2,
	EFollowCameraMode__ParachutingCamera = 3,
	EFollowCameraMode__FallingWithParachuteCamera = 4,
	EFollowCameraMode__EFollowCameraMode_MAX = 5
};


// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode
{
	EObserverCameraMode__FixedCamera = 0,
	EObserverCameraMode__FreeCamera = 1,
	EObserverCameraMode__PlayerCamera = 2,
	EObserverCameraMode__FollowCamera = 3,
	EObserverCameraMode__EObserverCameraMode_MAX = 4
};


// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType
{
	EObserverAuthorityType__None   = 0,
	EObserverAuthorityType__FromBeginning = 1,
	EObserverAuthorityType__AfterDeath = 2,
	EObserverAuthorityType__AfterExtermination = 3,
	EObserverAuthorityType__EagleEye = 4,
	EObserverAuthorityType__EObserverAuthorityType_MAX = 5
};


// Enum TslGame.EGameModeType
enum class EGameModeType
{
	EGameModeType__BattleRoyale    = 0,
	EGameModeType__War             = 1,
	EGameModeType__Zombie          = 2,
	EGameModeType__Conquest        = 3,
	EGameModeType__Training        = 4,
	EGameModeType__None            = 5,
	EGameModeType__EGameModeType_MAX = 6
};


// Enum TslGame.EValueType
enum class EValueType
{
	EValueType__Float              = 0,
	EValueType__Int                = 1,
	EValueType__String             = 2,
	EValueType__Bool               = 3,
	EValueType__EValueType_MAX     = 4
};


// Enum TslGame.ETeamVehicleType
enum class ETeamVehicleType
{
	ETeamVehicleType__Team_None    = 0,
	ETeamVehicleType__Team_Vehicle = 1,
	ETeamVehicleType__Team_MAX     = 2
};


// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel
{
	ENearClippingLevel__Default    = 0,
	ENearClippingLevel__Low        = 1,
	ENearClippingLevel__Middle     = 2,
	ENearClippingLevel__High       = 3,
	ENearClippingLevel__ENearClippingLevel_MAX = 4
};


// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType
{
	EThingSpotGroupType__GroupA    = 0,
	EThingSpotGroupType__GroupB    = 1,
	EThingSpotGroupType__GroupC    = 2,
	EThingSpotGroupType__GroupD    = 3,
	EThingSpotGroupType__GroupE    = 4,
	EThingSpotGroupType__GroupF    = 5,
	EThingSpotGroupType__GroupG    = 6,
	EThingSpotGroupType__GroupH    = 7,
	EThingSpotGroupType__GroupI    = 8,
	EThingSpotGroupType__GroupJ    = 9,
	EThingSpotGroupType__GroupK    = 10,
	EThingSpotGroupType__GroupL    = 11,
	EThingSpotGroupType__GroupM    = 12,
	EThingSpotGroupType__GroupN    = 13,
	EThingSpotGroupType__EThingSpotGroupType_MAX = 14
};


// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType
{
	EPhysMaterialType__Unknown     = 0,
	EPhysMaterialType__Asphalt     = 1,
	EPhysMaterialType__Dirt        = 2,
	EPhysMaterialType__Water       = 3,
	EPhysMaterialType__Wood        = 4,
	EPhysMaterialType__Stone       = 5,
	EPhysMaterialType__Metal       = 6,
	EPhysMaterialType__EPhysMaterialType_MAX = 7
};


// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType
{
	EEquipableItemSoundType__None  = 0,
	EEquipableItemSoundType__Vest  = 1,
	EEquipableItemSoundType__LongCoat = 2,
	EEquipableItemSoundType__HipSack = 3,
	EEquipableItemSoundType__Cloth = 4,
	EEquipableItemSoundType__BackPack = 5,
	EEquipableItemSoundType__MilitaryShoes = 6,
	EEquipableItemSoundType__Sneakers = 7,
	EEquipableItemSoundType__EEquipableItemSoundType_MAX = 8
};


// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup
{
	EEquipableItemSoundGroup__Default = 0,
	EEquipableItemSoundGroup__Shoes = 1,
	EEquipableItemSoundGroup__EEquipableItemSoundGroup_MAX = 2
};


// Enum TslGame.EColorBlindType
enum class EColorBlindType
{
	EColorBlindType__Normal        = 0,
	EColorBlindType__Deuteranopia  = 1,
	EColorBlindType__Protanopia    = 2,
	EColorBlindType__Tritanopia    = 3,
	EColorBlindType__EColorBlindType_MAX = 4
};


// Enum TslGame.EFrameRateLimitType
enum class EFrameRateLimitType
{
	EFrameRateLimitType__Unlimited = 0,
	EFrameRateLimitType__Fixed     = 1,
	EFrameRateLimitType__Fixed01   = 2,
	EFrameRateLimitType__Customizable = 3,
	EFrameRateLimitType__DisplayBased = 4,
	EFrameRateLimitType__EFrameRateLimitType_MAX = 5
};


// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType
{
	ETslPhysMaterialType__Unknown  = 0,
	ETslPhysMaterialType__Concrete = 1,
	ETslPhysMaterialType__Dirt     = 2,
	ETslPhysMaterialType__Water    = 3,
	ETslPhysMaterialType__Metal    = 4,
	ETslPhysMaterialType__Wood     = 5,
	ETslPhysMaterialType__Grass    = 6,
	ETslPhysMaterialType__Glass    = 7,
	ETslPhysMaterialType__Flesh    = 8,
	ETslPhysMaterialType__ETslPhysMaterialType_MAX = 9
};


// Enum TslGame.ETppAimCameraPosition
enum class ETppAimCameraPosition
{
	ETppAimCameraPosition__LatestAimPosition = 0,
	ETppAimCameraPosition__LastPeekingPosition = 1,
	ETppAimCameraPosition__ResetToRightShoulderPosition = 2,
	ETppAimCameraPosition__ResetToLeftShoulderPosition = 3,
	ETppAimCameraPosition__ETppAimCameraPosition_MAX = 4
};


// Enum TslGame.EAccessorySlot
enum class EAccessorySlot
{
	EAccessorySlot__Slot_Primary   = 0,
	EAccessorySlot__Slot_Secondary = 1,
	EAccessorySlot__Slot_SideArm   = 2,
	EAccessorySlot__Slot_Melee     = 3,
	EAccessorySlot__Slot_Thrown    = 4,
	EAccessorySlot__Slot_None      = 5,
	EAccessorySlot__Slot_MAX       = 6
};


// Enum TslGame.ELobbyCharacterCameraType
enum class ELobbyCharacterCameraType
{
	ELobbyCharacterCameraType__None = 0,
	ELobbyCharacterCameraType__WholeBodyCamera = 1,
	ELobbyCharacterCameraType__HeadCamera = 2,
	ELobbyCharacterCameraType__BodyCamera = 3,
	ELobbyCharacterCameraType__LegCamera = 4,
	ELobbyCharacterCameraType__FootCamera = 5,
	ELobbyCharacterCameraType__Max = 6,
	ELobbyCharacterCameraType__ELobbyCharacterCameraType_MAX = 7
};


// Enum TslGame.EWeaponClass
enum class EWeaponClass
{
	EWeaponClass__Class_None       = 0,
	EWeaponClass__Class_Pistol     = 1,
	EWeaponClass__Class_SMG        = 2,
	EWeaponClass__Class_Rifle      = 3,
	EWeaponClass__Class_Carbine    = 4,
	EWeaponClass__Class_Shotgun    = 5,
	EWeaponClass__Class_Sniper     = 6,
	EWeaponClass__Class_DMR        = 7,
	EWeaponClass__Class_LMG        = 8,
	EWeaponClass__Class_Melee      = 9,
	EWeaponClass__Class_Throwable  = 10,
	EWeaponClass__Class_Shield     = 11,
	EWeaponClass__Class_MAX        = 12
};


// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType
{
	EAttachmentCalculateType__Addition = 0,
	EAttachmentCalculateType__Multiply = 1,
	EAttachmentCalculateType__EAttachmentCalculateType_MAX = 2
};


// Enum TslGame.EFiringMode
enum class EFiringMode
{
	EFiringMode__Normal            = 0,
	EFiringMode__Burst             = 1,
	EFiringMode__FullAuto          = 2,
	EFiringMode__EFiringMode_MAX   = 3
};


// Enum TslGame.EWeaponHand
enum class EWeaponHand
{
	EWeaponHand__Left              = 0,
	EWeaponHand__Right             = 1,
	EWeaponHand__Total             = 2,
	EWeaponHand__EWeaponHand_MAX   = 3
};


// Enum TslGame.EPlatoonType
enum class EPlatoonType
{
	EPlatoonType__PlatoonA         = 0,
	EPlatoonType__PlatoonB         = 1,
	EPlatoonType__EPlatoonType_MAX = 2
};


// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType
{
	EAnimWeaponType__None          = 0,
	EAnimWeaponType__Rifle         = 1,
	EAnimWeaponType__Pistol        = 2,
	EAnimWeaponType__Throwable     = 3,
	EAnimWeaponType__Melee         = 4,
	EAnimWeaponType__Shield        = 5,
	EAnimWeaponType__EAnimWeaponType_MAX = 6
};


// Enum TslGame.EHitDirection
enum class EHitDirection
{
	EHitDirection__Hit_Front       = 0,
	EHitDirection__Hit_Back        = 1,
	EHitDirection__Hit_Left        = 2,
	EHitDirection__Hit_Right       = 3,
	EHitDirection__Hit_MAX         = 4
};


// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour
{
	ECameraViewBehaviour__FpsAndTps = 0,
	ECameraViewBehaviour__FpsOnly  = 1,
	ECameraViewBehaviour__TpsOnly  = 2,
	ECameraViewBehaviour__ECameraViewBehaviour_MAX = 3
};


// Enum TslGame.EPlayerStartType
enum class EPlayerStartType
{
	EPlayerStartType__OnePlace     = 0,
	EPlayerStartType__SeveralPlace = 1,
	EPlayerStartType__EPlayerStartType_MAX = 2
};


// Enum TslGame.EMatchStartType
enum class EMatchStartType
{
	EMatchStartType__Normal        = 0,
	EMatchStartType__Airborne      = 1,
	EMatchStartType__EMatchStartType_MAX = 2
};


// Enum TslGame.EGender
enum class EGender
{
	EGender__Male                  = 0,
	EGender__Female                = 1,
	EGender__EGender_MAX           = 2
};


// Enum TslGame.EKillcamDisplayCode
enum class EKillcamDisplayCode
{
	EKillcamDisplayCode__NotVisible = 0,
	EKillcamDisplayCode__OptionDisabled = 1,
	EKillcamDisplayCode__Recording = 2,
	EKillcamDisplayCode__Playable  = 3,
	EKillcamDisplayCode__Replay    = 4,
	EKillcamDisplayCode__FailToLoad = 5,
	EKillcamDisplayCode__DemoFailure = 6,
	EKillcamDisplayCode__DetectedUnusualMovement = 7,
	EKillcamDisplayCode__EKillcamDisplayCode_MAX = 8
};


// Enum TslGame.ENoReloadGuideType
enum class ENoReloadGuideType
{
	ENoReloadGuideType__Alwyas     = 0,
	ENoReloadGuideType__WhenCurrentWeapon = 1,
	ENoReloadGuideType__ENoReloadGuideType_MAX = 2
};


// Enum TslGame.ESurfaceEffect
enum class ESurfaceEffect
{
	ESurfaceEffect__S_None         = 0,
	ESurfaceEffect__S_Concrete_Roll = 1,
	ESurfaceEffect__S_Concrete_Skid = 2,
	ESurfaceEffect__S_Concrete_Spin = 3,
	ESurfaceEffect__S_Dirt_Roll    = 4,
	ESurfaceEffect__S_Dirt_Skid    = 5,
	ESurfaceEffect__S_Dirt_Spin    = 6,
	ESurfaceEffect__S_Water_Roll   = 7,
	ESurfaceEffect__S_Water_Skid   = 8,
	ESurfaceEffect__S_Water_Spin   = 9,
	ESurfaceEffect__S_Metal_Roll   = 10,
	ESurfaceEffect__S_Metal_Skid   = 11,
	ESurfaceEffect__S_Metal_Spin   = 12,
	ESurfaceEffect__S_Wood_Roll    = 13,
	ESurfaceEffect__S_Wood_Skid    = 14,
	ESurfaceEffect__S_Wood_Spin    = 15,
	ESurfaceEffect__S_Rock_Roll    = 16,
	ESurfaceEffect__S_Rock_Skid    = 17,
	ESurfaceEffect__S_Rock_Spin    = 18,
	ESurfaceEffect__S_Grass_Roll   = 19,
	ESurfaceEffect__S_Grass_Skid   = 20,
	ESurfaceEffect__S_Grass_Spin   = 21,
	ESurfaceEffect__S_Sand_Roll    = 22,
	ESurfaceEffect__S_Sand_Skid    = 23,
	ESurfaceEffect__S_Sand_Spin    = 24,
	ESurfaceEffect__S_Concrete_Brake = 25,
	ESurfaceEffect__S_Dirt_Brake   = 26,
	ESurfaceEffect__S_Water_Brake  = 27,
	ESurfaceEffect__S_Metal_Brake  = 28,
	ESurfaceEffect__S_Wood_Brake   = 29,
	ESurfaceEffect__S_Rock_Brake   = 30,
	ESurfaceEffect__S_Grass_Brake  = 31,
	ESurfaceEffect__S_Sand_Brake   = 32,
	ESurfaceEffect__S_Snow_Brake   = 33,
	ESurfaceEffect__S_SnowRock_Brake = 34,
	ESurfaceEffect__S_Ice_Brake    = 35,
	ESurfaceEffect__S_Common_BrakeDisc = 36,
	ESurfaceEffect__S_Concrete_Punctured_Roll = 37,
	ESurfaceEffect__S_Concrete_Punctured_Skid = 38,
	ESurfaceEffect__S_Concrete_Punctured_Spin = 39,
	ESurfaceEffect__S_Concrete_Punctured_Brake = 40,
	ESurfaceEffect__S_Snow_Roll    = 41,
	ESurfaceEffect__S_Snow_Skid    = 42,
	ESurfaceEffect__S_Snow_Spin    = 43,
	ESurfaceEffect__S_SnowRock_Roll = 44,
	ESurfaceEffect__S_SnowRock_Skid = 45,
	ESurfaceEffect__S_SnowRock_Spin = 46,
	ESurfaceEffect__S_Ice_Roll     = 47,
	ESurfaceEffect__S_Ice_Skid     = 48,
	ESurfaceEffect__S_Ice_Spin     = 49,
	ESurfaceEffect__S_MAX          = 50
};


// Enum TslGame.EHitCheckType
enum class EHitCheckType
{
	EHitCheckType__HitCheck_Once   = 0,
	EHitCheckType__HitCheck_Multi  = 1,
	EHitCheckType__HitCheck_MAX    = 2
};


// Enum TslGame.EWidgetShowType
enum class EWidgetShowType
{
	EWidgetShowType__Show          = 0,
	EWidgetShowType__Hide          = 1,
	EWidgetShowType__Toggle        = 2,
	EWidgetShowType__EWidgetShowType_MAX = 3
};


// Enum TslGame.EMovementDirection
enum class EMovementDirection
{
	EMovementDirection__F_Direction = 0,
	EMovementDirection__L_Direction = 1,
	EMovementDirection__R_Direction = 2,
	EMovementDirection__B_Direction = 3,
	EMovementDirection__FL_Direction = 4,
	EMovementDirection__FR_Direction = 5,
	EMovementDirection__BL_Direction = 6,
	EMovementDirection__BR_Direction = 7,
	EMovementDirection__EMovementDirection_MAX = 8
};


// Enum TslGame.EAnimStanceType
enum class EAnimStanceType
{
	AnimType_Stand                 = 0,
	AnimType_Crouch                = 1,
	AnimType_Prone                 = 2,
	AnimType_MAX                   = 3
};


// Enum TslGame.ERaycastDirection
enum class ERaycastDirection
{
	ERaycastDirection__Forward     = 0,
	ERaycastDirection__Down_45_Degrees = 1,
	ERaycastDirection__Down        = 2,
	ERaycastDirection__ERaycastDirection_MAX = 3
};


// Enum TslGame.EAnimStance
enum class EAnimStance
{
	EAnimStance__Stand             = 0,
	EAnimStance__Crouch            = 1,
	EAnimStance__Prone             = 2,
	EAnimStance__Groggy            = 3,
	EAnimStance__EAnimStance_MAX   = 4
};


// Enum TslGame.EAttackType
enum class EAttackType
{
	EAttackType__None              = 0,
	EAttackType__Weapon            = 1,
	EAttackType__VehicleCrash      = 2,
	EAttackType__VehicleExplosion  = 3,
	EAttackType__Fall              = 4,
	EAttackType__BlueZone          = 5,
	EAttackType__RedZone           = 6,
	EAttackType__EAttackType_MAX   = 7
};


// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType
{
	EPlayerMoveType__OnFoot        = 0,
	EPlayerMoveType__OnSwim        = 1,
	EPlayerMoveType__OnVehicle     = 2,
	EPlayerMoveType__OnParachute   = 3,
	EPlayerMoveType__OnFreefall    = 4,
	EPlayerMoveType__EPlayerMoveType_MAX = 5
};


// Enum TslGame.ECastableItemType
enum class ECastableItemType
{
	ECastableItemType__None        = 0,
	ECastableItemType__Bandage     = 1,
	ECastableItemType__FirstAid    = 2,
	ECastableItemType__Medkit      = 3,
	ECastableItemType__EnergyDrink = 4,
	ECastableItemType__Painkiller  = 5,
	ECastableItemType__Adrenaline  = 6,
	ECastableItemType__GasCan      = 7,
	ECastableItemType__ECastableItemType_MAX = 8
};


// Enum TslGame.ECastLevel
enum class ECastLevel
{
	ECastLevel__None               = 0,
	ECastLevel__NoRestriction      = 1,
	ECastLevel__Restriction        = 2,
	ECastLevel__ECastLevel_MAX     = 3
};


// Enum TslGame.ECastPriority
enum class ECastPriority
{
	ECastPriority__None            = 0,
	ECastPriority__Low             = 1,
	ECastPriority__Normal          = 2,
	ECastPriority__High            = 3,
	ECastPriority__Max             = 4,
	ECastPriority__ECastPriority_MAX = 5
};


// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState
{
	ELandingSoundSwitchState__None = 0,
	ELandingSoundSwitchState__Light = 1,
	ELandingSoundSwitchState__Heavy = 2,
	ELandingSoundSwitchState__VeryHeavy = 3,
	ELandingSoundSwitchState__ELandingSoundSwitchState_MAX = 4
};


// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod
{
	EBuffOverlapSolveMethod__IgnoreLater = 0,
	EBuffOverlapSolveMethod__Overwrite = 1,
	EBuffOverlapSolveMethod__RestartTimer = 2,
	EBuffOverlapSolveMethod__Stack = 3,
	EBuffOverlapSolveMethod__EBuffOverlapSolveMethod_MAX = 4
};


// Enum TslGame.ECastCancelReason
enum class ECastCancelReason
{
	ECastCancelReason__Invalid     = 0,
	ECastCancelReason__CasterAiming = 1,
	ECastCancelReason__CasterArming = 2,
	ECastCancelReason__CasterApnea = 3,
	ECastCancelReason__CasterFallingLong = 4,
	ECastCancelReason__CasterFiring = 5,
	ECastCancelReason__CasterGroggy = 6,
	ECastCancelReason__CasterGroggyOnZeroTimeCast = 7,
	ECastCancelReason__CasterHipped = 8,
	ECastCancelReason__CasterInvalid = 9,
	ECastCancelReason__CasterNotAlive = 10,
	ECastCancelReason__CasterPickedUpDroppedItem = 11,
	ECastCancelReason__CasterPickedUpItemFromPackage = 12,
	ECastCancelReason__CasterReloading = 13,
	ECastCancelReason__CasterRolling = 14,
	ECastCancelReason__CasterTargeting = 15,
	ECastCancelReason__CasterUnarmAttacking = 16,
	ECastCancelReason__CasterVault = 17,
	ECastCancelReason__CastObjectInvalid = 18,
	ECastCancelReason__CastObjectNotExecutable = 19,
	ECastCancelReason__FailedCasterMovementDistCheckOnClient = 20,
	ECastCancelReason__FailedCasterMovementDistCheckOnServer = 21,
	ECastCancelReason__FailedCasterAndCastObjDistCheckOnClient = 22,
	ECastCancelReason__FailedCasterAndCastObjDistCheckOnServer = 23,
	ECastCancelReason__CharacterBeingRevivedDead = 24,
	ECastCancelReason__ManualCancel = 25,
	ECastCancelReason__NewCastOnClient = 26,
	ECastCancelReason__NewCastOnServer = 27,
	ECastCancelReason__VehicleLanding = 28,
	ECastCancelReason__VehicleSeatChanged = 29,
	ECastCancelReason__VehicleMoving = 30,
	ECastCancelReason__VehicleUpsideDown = 31,
	ECastCancelReason__ECastCancelReason_MAX = 32
};


// Enum TslGame.ETslControllerType
enum class ETslControllerType
{
	ETslControllerType__Mouse      = 0,
	ETslControllerType__GamePad    = 1,
	ETslControllerType__Total      = 2,
	ETslControllerType__ETslControllerType_MAX = 3
};


// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType
{
	ELobbyItemPointSellingType__Normal = 0,
	ELobbyItemPointSellingType__WeeklyDouble = 1,
	ELobbyItemPointSellingType__ELobbyItemPointSellingType_MAX = 2
};


// Enum TslGame.ELobbyItemPlatform
enum class ELobbyItemPlatform
{
	ELobbyItemPlatform__PC_Steam   = 0,
	ELobbyItemPlatform__PC_NonSteam = 1,
	ELobbyItemPlatform__Xbox       = 2,
	ELobbyItemPlatform__ELobbyItemPlatform_MAX = 3
};


// Enum TslGame.ELobbyItemTier
enum class ELobbyItemTier
{
	ELobbyItemTier__Basic          = 0,
	ELobbyItemTier__Common         = 1,
	ELobbyItemTier__Classic        = 2,
	ELobbyItemTier__Special        = 3,
	ELobbyItemTier__Rare           = 4,
	ELobbyItemTier__Elite          = 5,
	ELobbyItemTier__Epic           = 6,
	ELobbyItemTier__Legendary      = 7,
	ELobbyItemTier__Ultimate       = 8,
	ELobbyItemTier__Event          = 9,
	ELobbyItemTier__ELobbyItemTier_MAX = 10
};


// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory
{
	ELobbyItemCategory__Belt       = 0,
	ELobbyItemCategory__Body       = 1,
	ELobbyItemCategory__Eyes       = 2,
	ELobbyItemCategory__Feet       = 3,
	ELobbyItemCategory__Head       = 4,
	ELobbyItemCategory__Jacket     = 5,
	ELobbyItemCategory__Legs       = 6,
	ELobbyItemCategory__Mask       = 7,
	ELobbyItemCategory__Hands      = 8,
	ELobbyItemCategory__Box        = 9,
	ELobbyItemCategory__Key        = 10,
	ELobbyItemCategory__WeaponSkin = 11,
	ELobbyItemCategory__ParachuteSkin = 12,
	ELobbyItemCategory__HelmetSkin = 13,
	ELobbyItemCategory__BackpackSkin = 14,
	ELobbyItemCategory__TorsoArmorSkin = 15,
	ELobbyItemCategory__Multislot  = 16,
	ELobbyItemCategory__ELobbyItemCategory_MAX = 17
};


// Enum TslGame.EItemCategory
enum class EItemCategory
{
	EItemCategory__None            = 0,
	EItemCategory__Equipment       = 1,
	EItemCategory__Weapon          = 2,
	EItemCategory__Attachment      = 3,
	EItemCategory__Ammunition      = 4,
	EItemCategory__Use             = 5,
	EItemCategory__Skin            = 6,
	EItemCategory__EItemCategory_MAX = 7
};


// Enum TslGame.EWeaponGripLeftHand
enum class EWeaponGripLeftHand
{
	EWeaponGripLeftHand__NormalRifle = 0,
	EWeaponGripLeftHand__Foregrip1 = 1,
	EWeaponGripLeftHand__Foregrip2 = 2,
	EWeaponGripLeftHand__Thompson  = 3,
	EWeaponGripLeftHand__EWeaponGripLeftHand_MAX = 4
};


// Enum TslGame.EVoiceTransmissionType
enum class EVoiceTransmissionType
{
	EVoiceTransmissionType__None   = 0,
	EVoiceTransmissionType__ToAll  = 1,
	EVoiceTransmissionType__ToChannel = 2,
	EVoiceTransmissionType__EVoiceTransmissionType_MAX = 3
};


// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState
{
	EVivoxResponseState__NotRequested = 0,
	EVivoxResponseState__Requested = 1,
	EVivoxResponseState__Fail      = 2,
	EVivoxResponseState__Success   = 3,
	EVivoxResponseState__EVivoxResponseState_MAX = 4
};


// Enum TslGame.EVoiceChannelType
enum class EVoiceChannelType
{
	EVoiceChannelType__None        = 0,
	EVoiceChannelType__All         = 1,
	EVoiceChannelType__GlobalOnly  = 2,
	EVoiceChannelType__TeamOnly    = 3,
	EVoiceChannelType__EVoiceChannelType_MAX = 4
};


// Enum TslGame.EVoiceChannelJoinState
enum class EVoiceChannelJoinState
{
	EVoiceChannelJoinState__NotJoined = 0,
	EVoiceChannelJoinState__Joining = 1,
	EVoiceChannelJoinState__Leaving = 2,
	EVoiceChannelJoinState__Joined = 3,
	EVoiceChannelJoinState__EVoiceChannelJoinState_MAX = 4
};


// Enum TslGame.EVoiceLoginState
enum class EVoiceLoginState
{
	EVoiceLoginState__NotLoggedin  = 0,
	EVoiceLoginState__Loggingin    = 1,
	EVoiceLoginState__Loggedin     = 2,
	EVoiceLoginState__EVoiceLoginState_MAX = 3
};


// Enum TslGame.EVoiceConnectionState
enum class EVoiceConnectionState
{
	EVoiceConnectionState__NotConnected = 0,
	EVoiceConnectionState__Connecting = 1,
	EVoiceConnectionState__Connected = 2,
	EVoiceConnectionState__EVoiceConnectionState_MAX = 3
};


// Enum TslGame.EBeginningState
enum class EBeginningState
{
	EBeginningState__Invalid       = 0,
	EBeginningState__Normal        = 1,
	EBeginningState__StartIsland   = 2,
	EBeginningState__Airplane      = 3,
	EBeginningState__Skydiving     = 4,
	EBeginningState__Parachuting   = 5,
	EBeginningState__EBeginningState_MAX = 6
};


// Enum TslGame.ETracerDisplayMode
enum class ETracerDisplayMode
{
	ETracerDisplayMode__TracerDM_None = 0,
	ETracerDisplayMode__TracerDM_Particle = 1,
	ETracerDisplayMode__TracerDM_Mesh = 2,
	ETracerDisplayMode__TracerDM_Billboard = 3,
	ETracerDisplayMode__TracerDM_MAX = 4
};


// Enum TslGame.EScopeType
enum class EScopeType
{
	EScopeType__Main               = 0,
	EScopeType__Right              = 1,
	EScopeType__Total              = 2,
	EScopeType__None               = 3,
	EScopeType__EScopeType_MAX     = 4
};


// Enum TslGame.EStatTrakState
enum class EStatTrakState
{
	EStatTrakState__Run            = 0,
	EStatTrakState__Locked         = 1,
	EStatTrakState__Error          = 2,
	EStatTrakState__EStatTrakState_MAX = 3
};


// Enum TslGame.ESkinApplicationType
enum class ESkinApplicationType
{
	ESkinApplicationType__Application_InOrder = 0,
	ESkinApplicationType__Application_Slot = 1,
	ESkinApplicationType__Application_MAX = 2
};


// Enum TslGame.ESkinMeshType
enum class ESkinMeshType
{
	ESkinMeshType__SkeletalMesh    = 0,
	ESkinMeshType__AsyncStaticMesh = 1,
	ESkinMeshType__StaticMesh      = 2,
	ESkinMeshType__ESkinMeshType_MAX = 3
};


// Enum TslGame.ESkinCategory
enum class ESkinCategory
{
	ESkinCategory__Skin_None       = 0,
	ESkinCategory__Skin_Equipment  = 1,
	ESkinCategory__Skin_Parachute  = 2,
	ESkinCategory__Skin_Weapon     = 3,
	ESkinCategory__Skin_MeleeWeapon = 4,
	ESkinCategory__Skin_Vehicle    = 5,
	ESkinCategory__Skin_MAX        = 6
};


// Enum TslGame.EMasteryItemType
enum class EMasteryItemType
{
	EMasteryItemType__Charm        = 0,
	EMasteryItemType__Mesh         = 1,
	EMasteryItemType__EMasteryItemType_MAX = 2
};


// Enum TslGame.EVaultAnimType
enum class EVaultAnimType
{
	EVaultAnimType__VaultNone      = 0,
	EVaultAnimType__Vault200_Stationary = 1,
	EVaultAnimType__Vault200_Mobile = 2,
	EVaultAnimType__Vault200_Narrow = 3,
	EVaultAnimType__Vault160_Stationary = 4,
	EVaultAnimType__Vault160_Mobile = 5,
	EVaultAnimType__Vault160_Narrow = 6,
	EVaultAnimType__Vault120_Stationary = 7,
	EVaultAnimType__Vault120_Mobile = 8,
	EVaultAnimType__Vault120_Slide = 9,
	EVaultAnimType__Vault120_Narrow = 10,
	EVaultAnimType__Vault90_Stationary = 11,
	EVaultAnimType__Vault90_Mobile = 12,
	EVaultAnimType__Vault90_Slide  = 13,
	EVaultAnimType__Vault90_Narrow = 14,
	EVaultAnimType__Climb200_Stationary = 15,
	EVaultAnimType__Climb200_Mobile = 16,
	EVaultAnimType__Climb200_Slide = 17,
	EVaultAnimType__Climb200_Narrow = 18,
	EVaultAnimType__Climb160_Stationary = 19,
	EVaultAnimType__Climb160_Mobile = 20,
	EVaultAnimType__Climb160_Slide = 21,
	EVaultAnimType__Climb160_Narrow = 22,
	EVaultAnimType__Climb120_Stationary = 23,
	EVaultAnimType__Climb120_Mobile = 24,
	EVaultAnimType__Climb120_Slide = 25,
	EVaultAnimType__Climb120_Narrow = 26,
	EVaultAnimType__Climb90_Stationary = 27,
	EVaultAnimType__Climb90_Mobile = 28,
	EVaultAnimType__Climb90_Slide  = 29,
	EVaultAnimType__Climb90_Narrow = 30,
	EVaultAnimType__Vault90Roll    = 31,
	EVaultAnimType__Vault120Window = 32,
	EVaultAnimType__Vault60_Stationary = 33,
	EVaultAnimType__Vault60_Mobile = 34,
	EVaultAnimType__Vault60_Slide  = 35,
	EVaultAnimType__Vault60_Narrow = 36,
	EVaultAnimType__Climb60_Stationary = 37,
	EVaultAnimType__Climb60_Mobile = 38,
	EVaultAnimType__Climb60_Narrow = 39,
	EVaultAnimType__EVaultAnimType_MAX = 40
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod
{
	EWeaponReloadMethod__Magazine  = 0,
	EWeaponReloadMethod__OneByOne  = 1,
	EWeaponReloadMethod__OneByOneAndClip = 2,
	EWeaponReloadMethod__EWeaponReloadMethod_MAX = 3
};


// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec
{
	EWeaponReloadAnimExec__Tactical = 0,
	EWeaponReloadAnimExec__Charge  = 1,
	EWeaponReloadAnimExec__Single  = 2,
	EWeaponReloadAnimExec__Loop    = 3,
	EWeaponReloadAnimExec__EWeaponReloadAnimExec_MAX = 4
};


// Enum TslGame.EWeaponState
enum class EWeaponState
{
	EWeaponState__Idle             = 0,
	EWeaponState__Firing           = 1,
	EWeaponState__Reloading        = 2,
	EWeaponState__EWeaponState_MAX = 3
};


// Enum TslGame.EWeaponTransitionState
enum class EWeaponTransitionState
{
	EWeaponTransitionState__Stable = 0,
	EWeaponTransitionState__Arming_Right = 1,
	EWeaponTransitionState__UnArming_Right = 2,
	EWeaponTransitionState__Arming_Left = 3,
	EWeaponTransitionState__UnArming_Left = 4,
	EWeaponTransitionState__EWeaponTransitionState_MAX = 5
};


// Enum TslGame.ESlotOffsetType
enum class ESlotOffsetType
{
	ESlotOffsetType__NoOffset      = 0,
	ESlotOffsetType__BagLevel1     = 1,
	ESlotOffsetType__BagLevel2     = 2,
	ESlotOffsetType__BagLevel3     = 3,
	ESlotOffsetType__ESlotOffsetType_MAX = 4
};


// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType
{
	EItemSpotGroupType__GroupA     = 0,
	EItemSpotGroupType__GroupB     = 1,
	EItemSpotGroupType__GroupC     = 2,
	EItemSpotGroupType__GroupD     = 3,
	EItemSpotGroupType__GroupE     = 4,
	EItemSpotGroupType__GroupF     = 5,
	EItemSpotGroupType__GroupG     = 6,
	EItemSpotGroupType__GroupH     = 7,
	EItemSpotGroupType__GroupI     = 8,
	EItemSpotGroupType__GroupJ     = 9,
	EItemSpotGroupType__EItemSpotGroupType_MAX = 10
};


// Enum TslGame.EItemSpotType
enum class EItemSpotType
{
	EItemSpotType__TypeA           = 0,
	EItemSpotType__TypeB           = 1,
	EItemSpotType__TypeC           = 2,
	EItemSpotType__TypeD           = 3,
	EItemSpotType__TypeE           = 4,
	EItemSpotType__TypeF           = 5,
	EItemSpotType__EItemSpotType_MAX = 6
};


// Enum TslGame.EEquipSlotID
enum class EEquipSlotID
{
	EEquipSlotID__Head             = 0,
	EEquipSlotID__Eyes             = 1,
	EEquipSlotID__Mask             = 2,
	EEquipSlotID__Torso            = 3,
	EEquipSlotID__TorsoArmor       = 4,
	EEquipSlotID__Outer            = 5,
	EEquipSlotID__Backpack         = 6,
	EEquipSlotID__Hands            = 7,
	EEquipSlotID__Legs             = 8,
	EEquipSlotID__Feet             = 9,
	EEquipSlotID__Belt             = 10,
	EEquipSlotID__WeaponPrimary    = 11,
	EEquipSlotID__WeaponSecondary  = 12,
	EEquipSlotID__WeaponMelee      = 13,
	EEquipSlotID__WeaponThrowable  = 14,
	EEquipSlotID__MaxOrNone        = 15,
	EEquipSlotID__EEquipSlotID_MAX = 16
};


// Enum TslGame.ECheatType
enum class ECheatType
{
	SpeedHack                      = 0,
	SpeedHack_UE                   = 1,
	IgnoreWall_Hit                 = 2,
	IgnoreWall_Sight               = 3,
	ItemPackage                    = 4,
	CarePackageMount               = 5,
	HitLag                         = 6,
	Aimbot                         = 7,
	InvalidImpact                  = 8,
	InvalidImpactZ                 = 9,
	InvalidImpact_Gun_C            = 10,
	InvalidOrigin_Gun              = 11,
	InvalidOrigin_Melee            = 12,
	InvalidOrigin_Punch            = 13,
	InvalidOrigin_Throwable        = 14,
	InvalidRange                   = 15,
	InvalidRange2                  = 16,
	InvalidSequence                = 17,
	InvalidAmmo                    = 18,
	InvalidReviving                = 19,
	InvalidKick                    = 20,
	InvalidA0                      = 21,
	InvalidB0                      = 22,
	InvalidB1                      = 23,
	InvalidB101                    = 24,
	InvalidH0                      = 25,
	InvalidOrigin_Gun_C            = 26,
	InvalidD0                      = 27,
	InvalidD1                      = 28,
	InvalidS0                      = 29,
	InvalidS1                      = 30,
	InvalidH1                      = 31,
	InvalidH2                      = 32,
	InvalidH3                      = 33,
	InvalidC0                      = 34,
	InvalidC1                      = 35,
	InvalidC2                      = 36,
	InvalidC3                      = 37,
	InvalidC4                      = 38,
	InvalidC5                      = 39,
	InvalidC6                      = 40,
	InvalidC7                      = 41,
	InvalidT0                      = 42,
	InvalidT1                      = 43,
	InvalidT2                      = 44,
	CHKSUM_GUN                     = 45,
	CHKSUM_PUNCH                   = 46,
	CHKSUM_MELEE                   = 47,
	CHKSUM_VEHICLE                 = 48,
	CHKSUM_A0                      = 49,
	CHKSUM_T0                      = 50,
	CHKSUM_S0                      = 51,
	CHKSUM_D0                      = 52,
	CHKSUM_V0                      = 53,
	CHKSUM_W0                      = 54,
	CHKSUM_T1                      = 55,
	CHKSUM_D1                      = 56,
	CHKSUM_CD                      = 57,
	CHKSUM_LC                      = 58,
	CHKSUM_V1                      = 59,
	CHKSUM_P0                      = 60,
	CHKSUM_BP                      = 61,
	CHKSUM_G0                      = 62,
	CHKSUM_G1                      = 63,
	CHKSUM_H2                      = 64,
	CHKSUM_H3                      = 65,
	VHC_RI                         = 66,
	VHC_SC                         = 67,
	VHC_MG                         = 68,
	VHC_MG_FF                      = 69,
	VHC_MG_FC                      = 70,
	VHC_MG_SW                      = 71,
	VHC_MG_OS                      = 72,
	VHC_MG_BC                      = 73,
	VHC_MGB                        = 74,
	VHC_MGB_FF                     = 75,
	VHC_MGB_FC                     = 76,
	VHC_MGB_OS                     = 77,
	VHC_MGB_BC                     = 78,
	VHC_KILL                       = 79,
	VHC_ED                         = 80,
	CP_RZ                          = 81,
	CP_RZD                         = 82,
	KGB_FP                         = 83,
	KGB_AF                         = 84,
	KGB_AH                         = 85,
	KGB_AH_NA                      = 86,
	ESP1                           = 87,
	ESP2                           = 88,
	ESP3                           = 89,
	SimilarHit                     = 90,
	DoubleKill                     = 91,
	B0Log                          = 92,
	ECheatType_MAX                 = 93
};


// Enum TslGame.EEmoteAnimType
enum class EEmoteAnimType
{
	EEmoteAnimType__EmoteFullBody  = 0,
	EEmoteAnimType__EmoteUpperBody = 1,
	EEmoteAnimType__EmoteArm       = 2,
	EEmoteAnimType__EEmoteAnimType_MAX = 3
};


// Enum TslGame.EConstraintSlotType
enum class EConstraintSlotType
{
	EConstraintSlotType__Block     = 0,
	EConstraintSlotType__Hide      = 1,
	EConstraintSlotType__Max       = 2,
	EConstraintSlotType__EConstraintSlotType_MAX = 3
};


// Enum TslGame.EDurabilityConsumeType
enum class EDurabilityConsumeType
{
	EDurabilityConsumeType__TotalDamage = 0,
	EDurabilityConsumeType__AbsorbDamage = 1,
	EDurabilityConsumeType__EDurabilityConsumeType_MAX = 2
};


// Enum TslGame.EParachuteLandingSurfaceType
enum class EParachuteLandingSurfaceType
{
	EParachuteLandingSurfaceType__Surface_None = 0,
	EParachuteLandingSurfaceType__Surface_Vertical = 1,
	EParachuteLandingSurfaceType__Surface_Horizontal = 2,
	EParachuteLandingSurfaceType__Surface_MAX = 3
};


// Enum TslGame.ELoadingScreenType
enum class ELoadingScreenType
{
	ELoadingScreenType__NONE       = 0,
	ELoadingScreenType__ICE_BRAKE  = 1,
	ELoadingScreenType__RULE_SET   = 2,
	ELoadingScreenType__WEAPON     = 3,
	ELoadingScreenType__ATTACHMENT = 4,
	ELoadingScreenType__EQUIPMENT  = 5,
	ELoadingScreenType__ITEM       = 6,
	ELoadingScreenType__VEHICLE    = 7,
	ELoadingScreenType__SYSTEM     = 8,
	ELoadingScreenType__DEFAULT    = 9,
	ELoadingScreenType__EXPOSE_WITH_HIGHEST_PRIORITY = 10,
	ELoadingScreenType__ELoadingScreenType_MAX = 11
};


// Enum TslGame.ECharFlagsNormal
enum class ECharFlagsNormal
{
	ECharFlagsNormal__IsGroggying  = 0,
	ECharFlagsNormal__IsActiveRagdollActive = 1,
	ECharFlagsNormal__HasShieldEquipped = 2,
	ECharFlagsNormal__IsBurning    = 3,
	ECharFlagsNormal__IsFlashed    = 4,
	ECharFlagsNormal__IsOutsideBluezone = 5,
	ECharFlagsNormal__ECharFlagsNormal_MAX = 6
};


// Enum TslGame.ECharFlagsSkipOwner
enum class ECharFlagsSkipOwner
{
	ECharFlagsSkipOwner__WantsToRun = 0,
	ECharFlagsSkipOwner__WantsToSprint = 1,
	ECharFlagsSkipOwner__WantsToSprintingAuto = 2,
	ECharFlagsSkipOwner__WantsToRollingLeft = 3,
	ECharFlagsSkipOwner__WantsToRollingRight = 4,
	ECharFlagsSkipOwner__AimStateActive = 5,
	ECharFlagsSkipOwner__IsThirdPerson = 6,
	ECharFlagsSkipOwner__IsReviving = 7,
	ECharFlagsSkipOwner__IgnoreRotation = 8,
	ECharFlagsSkipOwner__IsWeaponObstructed = 9,
	ECharFlagsSkipOwner__IsCoatEquipped = 10,
	ECharFlagsSkipOwner__IsThrowHigh = 11,
	ECharFlagsSkipOwner__WantsToCancelVault = 12,
	ECharFlagsSkipOwner__IsScopingRemote = 13,
	ECharFlagsSkipOwner__IsAimingRemote = 14,
	ECharFlagsSkipOwner__IsFirstPersonRemote = 15,
	ECharFlagsSkipOwner__IsInVehicleRemote = 16,
	ECharFlagsSkipOwner__IsPeekLeftRemote = 17,
	ECharFlagsSkipOwner__IsPeekRightRemote = 18,
	ECharFlagsSkipOwner__IsHoldingAngled = 19,
	ECharFlagsSkipOwner__ECharFlagsSkipOwner_MAX = 20
};


// Enum TslGame.EPunchDamageType
enum class EPunchDamageType
{
	PunchDamage_Light              = 0,
	PunchDamage_Heavy              = 1,
	PunchDamage_MAX                = 2
};


// Enum TslGame.EMovementType
enum class EMovementType
{
	M_StandWalk                    = 0,
	M_StandRun                     = 1,
	M_StandSprint                  = 2,
	M_CrouchWalk                   = 3,
	M_CrouchRun                    = 4,
	M_CrouchSprint                 = 5,
	M_ProneWalk                    = 6,
	M_ProneRun                     = 7,
	M_ProneSprint                  = 8,
	M_StandScope                   = 9,
	M_CrouchScope                  = 10,
	M_ProneScope                   = 11,
	M_StandAim                     = 12,
	M_CrouchAim                    = 13,
	M_ProneAim                     = 14,
	M_Swim                         = 15,
	M_UnderwaterSwim               = 16,
	M_DBNO                         = 17,
	M_MAX                          = 18
};


// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType
{
	EPreoccupiedTeamType__NEUTRAL  = 0,
	EPreoccupiedTeamType__RED      = 1,
	EPreoccupiedTeamType__BLUE     = 2,
	EPreoccupiedTeamType__EPreoccupiedTeamType_MAX = 3
};


// Enum TslGame.ECaptureState
enum class ECaptureState
{
	ECaptureState__ENeutural       = 0,
	ECaptureState__EConfusion      = 1,
	ECaptureState__ECaptured       = 2,
	ECaptureState__ECaptureState_MAX = 3
};


// Enum TslGame.EFlareDeploymentType
enum class EFlareDeploymentType
{
	EFlareDeploymentType__Deploy_None = 0,
	EFlareDeploymentType__Deploy_InWhite = 1,
	EFlareDeploymentType__Deploy_InBlue = 2,
	EFlareDeploymentType__Deploy_Outside = 3,
	EFlareDeploymentType__Deploy_MAX = 4
};


// Enum TslGame.EAttachParent
enum class EAttachParent
{
	EAttachParent__None            = 0,
	EAttachParent__Character       = 1,
	EAttachParent__WeaponGun       = 2,
	EAttachParent__EAttachParent_MAX = 3
};


// Enum TslGame.EDroppedItemMeshType
enum class EDroppedItemMeshType
{
	EDroppedItemMeshType__StaticItem = 0,
	EDroppedItemMeshType__ProjectileItem = 1,
	EDroppedItemMeshType__EDroppedItemMeshType_MAX = 2
};


// Enum TslGame.EFlashbangDebuffCurveValueTypes
enum class EFlashbangDebuffCurveValueTypes
{
	EFlashbangDebuffCurveValueTypes__Blindness_Duration_Direct = 0,
	EFlashbangDebuffCurveValueTypes__Blindness_Duration_Indirect = 1,
	EFlashbangDebuffCurveValueTypes__Tinnitus_Level = 2,
	EFlashbangDebuffCurveValueTypes__EFlashbangDebuffCurveValueTypes_MAX = 3
};


// Enum TslGame.EBluezoneType
enum class EBluezoneType
{
	EBluezoneType__Normal          = 0,
	EBluezoneType__Fast            = 1,
	EBluezoneType__EBluezoneType_MAX = 2
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState
{
	EPlayerAuthState__None         = 0,
	EPlayerAuthState__Login        = 1,
	EPlayerAuthState__Logout       = 2,
	EPlayerAuthState__EPlayerAuthState_MAX = 3
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase
{
	EInteractionPhase__First       = 0,
	EInteractionPhase__Second      = 1,
	EInteractionPhase__EInteractionPhase_MAX = 2
};


// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType
{
	ELobbyItemBundleType__Bundle   = 0,
	ELobbyItemBundleType__Generator = 1,
	ELobbyItemBundleType__ELobbyItemBundleType_MAX = 2
};


// Enum TslGame.EItemSpawnType
enum class EItemSpawnType
{
	EItemSpawnType__FixedRatioAndAdjustableTotalNumber = 0,
	EItemSpawnType__AdjustableRatioAndFixedTotalNumber = 1,
	EItemSpawnType__AdjustableRatioAndAdjustableTotalNumber = 2,
	EItemSpawnType__EItemSpawnType_MAX = 3
};


// Enum TslGame.ELocationType
enum class ELocationType
{
	ELocationType__LANDMARK        = 0,
	ELocationType__EXTRA_LANDMARK  = 1,
	ELocationType__CITY            = 2,
	ELocationType__CITY_DETAIL     = 3,
	ELocationType__TOWN            = 4,
	ELocationType__COMPOUNDS       = 5,
	ELocationType__EXTRA           = 6,
	ELocationType__TEST_SHOW_ALL   = 7,
	ELocationType__ELocationType_MAX = 8
};


// Enum TslGame.EClimate
enum class EClimate
{
	Climate_Normal                 = 0,
	Climate_Hot                    = 1,
	Climate_Cold                   = 2,
	Climate_Warm                   = 3,
	Climate_Humid                  = 4,
	Climate_HotAndHumid            = 5,
	Climate_ColdAndHumid           = 6,
	Climate_WarmAndHumid           = 7,
	Climate_Dry                    = 8,
	Climate_HotAndDry              = 9,
	Climate_ColdAndDry             = 10,
	Climate_WarmAndDry             = 11,
	Climate_MAX                    = 12
};


// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState
{
	ELobbyLinkState__Disconnect    = 0,
	ELobbyLinkState__WaitInitialize = 1,
	ELobbyLinkState__WaitStart     = 2,
	ELobbyLinkState__Gaming        = 3,
	ELobbyLinkState__Finished      = 4,
	ELobbyLinkState__ELobbyLinkState_MAX = 5
};


// Enum TslGame.ELobbyCharacterAnimationType
enum class ELobbyCharacterAnimationType
{
	ELobbyCharacterAnimationType__Default = 0,
	ELobbyCharacterAnimationType__Wardrobe = 1,
	ELobbyCharacterAnimationType__Appearance = 2,
	ELobbyCharacterAnimationType__ELobbyCharacterAnimationType_MAX = 3
};


// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel
{
	EParameterLUTChannel__R        = 0,
	EParameterLUTChannel__G        = 1,
	EParameterLUTChannel__B        = 2,
	EParameterLUTChannel__A        = 3,
	EParameterLUTChannel__RGBA     = 4,
	EParameterLUTChannel__Undefined = 5,
	EParameterLUTChannel__EParameterLUTChannel_MAX = 6
};


// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType
{
	EMaterialParameterType__Bool   = 0,
	EMaterialParameterType__Scalar = 1,
	EMaterialParameterType__Vector = 2,
	EMaterialParameterType__Texture = 3,
	EMaterialParameterType__Undefined = 4,
	EMaterialParameterType__EMaterialParameterType_MAX = 5
};


// Enum TslGame.ERandomPointSelect
enum class ERandomPointSelect
{
	ERandomPointSelect__NavPoint   = 0,
	ERandomPointSelect__NavPointInRadius = 1,
	ERandomPointSelect__ReachableNavPointInRadius = 2,
	ERandomPointSelect__ERandomPointSelect_MAX = 3
};


// Enum TslGame.ENpcDirection
enum class ENpcDirection
{
	ENpcDirection__Forward         = 0,
	ENpcDirection__Backward        = 1,
	ENpcDirection__Left            = 2,
	ENpcDirection__Right           = 3,
	ENpcDirection__ForwardRight    = 4,
	ENpcDirection__BackwardRight   = 5,
	ENpcDirection__BackwardLeft    = 6,
	ENpcDirection__ForwardLeft     = 7,
	ENpcDirection__ENpcDirection_MAX = 8
};


// Enum TslGame.ENpcWalkingSpeedType
enum class ENpcWalkingSpeedType
{
	ENpcWalkingSpeedType__Idle     = 0,
	ENpcWalkingSpeedType__Walk     = 1,
	ENpcWalkingSpeedType__Run      = 2,
	ENpcWalkingSpeedType__Sprint   = 3,
	ENpcWalkingSpeedType__ENpcWalkingSpeedType_MAX = 4
};


// Enum TslGame.ENpcCharacterStateType
enum class ENpcCharacterStateType
{
	ENpcCharacterStateType__Default = 0,
	ENpcCharacterStateType__Respawn = 1,
	ENpcCharacterStateType__Fire1  = 2,
	ENpcCharacterStateType__Fire2  = 3,
	ENpcCharacterStateType__Fire3  = 4,
	ENpcCharacterStateType__Knockback = 5,
	ENpcCharacterStateType__Knockdown = 6,
	ENpcCharacterStateType__Getup  = 7,
	ENpcCharacterStateType__ENpcCharacterStateType_MAX = 8
};


// Enum TslGame.ERandomType
enum class ERandomType
{
	ERandomType__Random            = 0,
	ERandomType__Shuffle           = 1,
	ERandomType__Ascending         = 2,
	ERandomType__Descending        = 3,
	ERandomType__ERandomType_MAX   = 4
};


// Enum TslGame.ECustomAnimDataType
enum class ECustomAnimDataType
{
	ECustomAnimDataType__CustomAnimData = 0,
	ECustomAnimDataType__AnimSequence = 1,
	ECustomAnimDataType__ECustomAnimDataType_MAX = 2
};


// Enum TslGame.ECustomAnimSlotType
enum class ECustomAnimSlotType
{
	ECustomAnimSlotType__FullBody  = 0,
	ECustomAnimSlotType__UpperBody = 1,
	ECustomAnimSlotType__FullBodyInstance = 2,
	ECustomAnimSlotType__UpperBodyInstance = 3,
	ECustomAnimSlotType__LowerBody = 4,
	ECustomAnimSlotType__ECustomAnimSlotType_MAX = 5
};


// Enum TslGame.ERetriggerCounter
enum class ERetriggerCounter
{
	ERetriggerCounter__First       = 0,
	ERetriggerCounter__Sec         = 1,
	ERetriggerCounter__Third       = 2,
	ERetriggerCounter__Fourth      = 3,
	ERetriggerCounter__ERetriggerCounter_MAX = 4
};


// Enum TslGame.EPathDebugType
enum class EPathDebugType
{
	EPathDebugType__None           = 0,
	EPathDebugType__Location       = 1,
	EPathDebugType__SelectNpc      = 2,
	EPathDebugType__EPathDebugType_MAX = 3
};


// Enum TslGame.EDoorState
enum class EDoorState
{
	EDoorState__Closed             = 0,
	EDoorState__Closing            = 1,
	EDoorState__Opened             = 2,
	EDoorState__Opening            = 3,
	EDoorState__EDoorState_MAX     = 4
};


// Enum TslGame.EHornSoundType
enum class EHornSoundType
{
	EHornSoundType__HornOn         = 0,
	EHornSoundType__HornOff        = 1,
	EHornSoundType__InstantHorn    = 2,
	EHornSoundType__EHornSoundType_MAX = 3
};


// Enum TslGame.EVehicleAnimType
enum class EVehicleAnimType
{
	EVehicleAnimType__DefaultDriver = 0,
	EVehicleAnimType__DefaultPassenger = 1,
	EVehicleAnimType__BuggyDriver  = 2,
	EVehicleAnimType__BuggyPassenger = 3,
	EVehicleAnimType__DaciaDriver  = 4,
	EVehicleAnimType__DaciaPassengerFR = 5,
	EVehicleAnimType__DaciaPassengerBL = 6,
	EVehicleAnimType__DaciaPassengerBC = 7,
	EVehicleAnimType__DaciaPassengerBR = 8,
	EVehicleAnimType__UazDriver    = 9,
	EVehicleAnimType__UazPassengerFR = 10,
	EVehicleAnimType__UazPassengerBL = 11,
	EVehicleAnimType__UazPassengerBC = 12,
	EVehicleAnimType__UazPassengerBR = 13,
	EVehicleAnimType__BoatDriver   = 14,
	EVehicleAnimType__BoatPassengerFR = 15,
	EVehicleAnimType__BoatPassengerBL = 16,
	EVehicleAnimType__BoatPassengerBC = 17,
	EVehicleAnimType__BoatPassengerBR = 18,
	EVehicleAnimType__MotoDriver   = 19,
	EVehicleAnimType__MotoPassenger = 20,
	EVehicleAnimType__MotoSidecar  = 21,
	EVehicleAnimType__MotoDriverSidecar = 22,
	EVehicleAnimType__MotoPassengerSidecar = 23,
	EVehicleAnimType__AircraftPassenger = 24,
	EVehicleAnimType__JetskiDriver = 25,
	EVehicleAnimType__JetskiPassenger = 26,
	EVehicleAnimType__PickupTruckDriver = 27,
	EVehicleAnimType__PickupTruckPassengerFR = 28,
	EVehicleAnimType__PickupTruckPassengerBL_Open = 29,
	EVehicleAnimType__PickupTruckPassengerBR_Open = 30,
	EVehicleAnimType__PickupTruckPassengerBL_Closed = 31,
	EVehicleAnimType__PickupTruckPassengerBR_Closed = 32,
	EVehicleAnimType__MinibusDriver = 33,
	EVehicleAnimType__MinibusPassengerFR = 34,
	EVehicleAnimType__MinibusPassengerML = 35,
	EVehicleAnimType__MinibusPassengerMR = 36,
	EVehicleAnimType__MinibusPassengerBL = 37,
	EVehicleAnimType__MinibusPassengerBR = 38,
	EVehicleAnimType__MiradoDriver = 39,
	EVehicleAnimType__MiradoFR     = 40,
	EVehicleAnimType__MiradoRL     = 41,
	EVehicleAnimType__MiradoRR     = 42,
	EVehicleAnimType__ScooterPassenger = 43,
	EVehicleAnimType__TukDriver    = 44,
	EVehicleAnimType__RonyDriver   = 45,
	EVehicleAnimType__Snowmobile_Passenger = 46,
	EVehicleAnimType__YetiDriver   = 47,
	EVehicleAnimType__YetiPassenger = 48,
	EVehicleAnimType__LadaNivaDriver = 49,
	EVehicleAnimType__BRDM_Driver  = 50,
	EVehicleAnimType__BRDM_Passenger = 51,
	EVehicleAnimType__EVehicleAnimType_MAX = 52
};


// Enum TslGame.ERiderType
enum class ERiderType
{
	ERiderType__Driver             = 0,
	ERiderType__Passenger          = 1,
	ERiderType__ERiderType_MAX     = 2
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType
{
	EThingGroupSpawnType__None     = 0,
	EThingGroupSpawnType__Probability = 1,
	EThingGroupSpawnType__TotalCount = 2,
	EThingGroupSpawnType__EThingGroupSpawnType_MAX = 3
};


// Enum TslGame.EWheelContactType
enum class EWheelContactType
{
	WCT_Static                     = 0,
	WCT_Roll                       = 1,
	WCT_LatSlip                    = 2,
	WCT_LongSlip                   = 3,
	WCT_MAX                        = 4
};


// Enum TslGame.EAnimShieldState
enum class EAnimShieldState
{
	EAnimShieldState__SS_Hip       = 0,
	EAnimShieldState__SS_Block     = 1,
	EAnimShieldState__SS_ADS       = 2,
	EAnimShieldState__SS_MAX       = 3
};


// Enum TslGame.EAnimPawnState
enum class EAnimPawnState
{
	EAnimPawnState__PS_OnFoot      = 0,
	EAnimPawnState__PS_VehicleDriver = 1,
	EAnimPawnState__PS_VehiclePassenger = 2,
	EAnimPawnState__PS_Freefall    = 3,
	EAnimPawnState__PS_Parachute   = 4,
	EAnimPawnState__PS_Swim        = 5,
	EAnimPawnState__PS_DBNO        = 6,
	EAnimPawnState__PS_Reviving    = 7,
	EAnimPawnState__PS_Flying      = 8,
	EAnimPawnState__PS_ActiveRagdoll = 9,
	EAnimPawnState__PS_MAX         = 10
};


// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType
{
	EDamageVictimActorType__Character = 0,
	EDamageVictimActorType__Vehicle = 1,
	EDamageVictimActorType__Wheel  = 2,
	EDamageVictimActorType__DestructibleActor = 3,
	EDamageVictimActorType__EDamageVictimActorType_MAX = 4
};


// Enum TslGame.EHoldButtonWidgetType
enum class EHoldButtonWidgetType
{
	EHoldButtonWidgetType__EHoldButtonWidgetType_X = 0,
	EHoldButtonWidgetType__EHoldButtonWidgetType_Y = 1,
	EHoldButtonWidgetType__EHoldButtonWidgetType_A = 2,
	EHoldButtonWidgetType__EHoldButtonWidgetType_B = 3,
	EHoldButtonWidgetType__EHoldButtonWidgetType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TslGame.TslWidgetConfig
// 0x0030
struct FTslWidgetConfig
{
	struct FStringAssetReference                       WidgetClassReference;                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bDefaultShow : 1;                                         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseMouse : 1;                                            // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCloseByEscape : 1;                                       // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRemovedByHiding : 1;                                     // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUsePcOnly : 1;                                           // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseConsoleOnly : 1;                                      // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCharacterHudUi : 1;                                      // 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSpectatorHudUi : 1;                                      // 0x001B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bObserverHudUi : 1;                                       // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReplayHudUi : 1;                                         // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	TArray<struct FString>                             HideWidgetList;                                           // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslWidgetState
// 0x0040
struct FTslWidgetState
{
	struct FTslWidgetConfig                            Config;                                                   // 0x0000(0x0030)
	class UUserWidget*                                 Widget;                                                   // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.RankingInfo
// 0x0030
struct FRankingInfo
{
	int                                                TeamId;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                IncreaseRanking;                                          // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Score;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Order;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     TeamName;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bIsTeamElimination : 1;                                   // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsConnection : 1;                                        // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NearClippingLevelOverZ
// 0x0008
struct FNearClippingLevelOverZ
{
	float                                              Z;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.NearClippingLevelOverZ.Level
};

// ScriptStruct TslGame.PostProcessEffectParameter
// 0x0018
struct FPostProcessEffectParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslChatStyle
// 0x0980 (0x0988 - 0x0008)
struct FTslChatStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextEntryStyle;                                           // 0x0008(0x0870) (CPF_Edit)
	struct FSlateBrush                                 BackingBrush;                                             // 0x0878(0x0090) (CPF_Edit)
	struct FSlateColor                                 BoxBorderColor;                                           // 0x0908(0x0028) (CPF_Edit)
	struct FSlateColor                                 TextColor;                                                // 0x0930(0x0028) (CPF_Edit)
	struct FSlateSound                                 RxMessgeSound;                                            // 0x0958(0x0018) (CPF_Edit)
	struct FSlateSound                                 TxMessgeSound;                                            // 0x0970(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.DamageFieldLayout
// 0x0018
struct FDamageFieldLayout
{
	float                                              CreationDelay;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   LocationOffset;                                           // 0x0004(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.DoorBreakingStateLegacy
// 0x0001
struct FDoorBreakingStateLegacy
{
	unsigned char                                      bIsBrokenTop : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bIsBrokenCenter : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsBrokenBottom : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsDM : 1;                                                // 0x0000(0x0001)
};

// ScriptStruct TslGame.DecalEffectData
// 0x0038
struct FDecalEffectData
{
	class UMaterial*                                   Material;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 Size;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FFloatRange                                 NormalFadeAngle;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              FadeScreenSize;                                           // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeStartDelay;                                           // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomInput : 1;                                      // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomRoll : 1;                                       // 0x0035(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bReversal : 1;                                            // 0x0036(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DecalEffectDataSet
// 0x0430
struct FDecalEffectDataSet
{
	struct FDecalEffectData                            DefaultDecal;                                             // 0x0000(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            ConcreteDecal;                                            // 0x0038(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            RockDecal;                                                // 0x0070(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            DirtDecal;                                                // 0x00A8(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            WaterDecal;                                               // 0x00E0(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            MetalDecal;                                               // 0x0118(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            WoodDecal;                                                // 0x0150(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            GlassDecal;                                               // 0x0188(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            GrassDecal;                                               // 0x01C0(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            FleshDecal;                                               // 0x01F8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            MudDecal;                                                 // 0x0230(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            CropsDecal;                                               // 0x0268(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            CactusDecal;                                              // 0x02A0(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            PaperDecal;                                               // 0x02D8(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            RubberDecal;                                              // 0x0310(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            FabricDecal;                                              // 0x0348(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            SnowDecal;                                                // 0x0380(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            SnowRockDecal;                                            // 0x03B8(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            IceDecal;                                                 // 0x03F0(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bHideOnMovableObjects : 1;                                // 0x0428(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleReactionData
// 0x000C
struct FVehicleReactionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VehicleReactionData.ReactionType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinSpeed;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RadialDamageReactionData
// 0x000C
struct FRadialDamageReactionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.RadialDamageReactionData.ReactionType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinDamage;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DamageDataByCategory
// 0x000C
struct FDamageDataByCategory
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.DamageDataByCategory.DamageType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DamageFactor;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PointDamageReactionData
// 0x0020
struct FPointDamageReactionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.PointDamageReactionData.ReactionType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinDamage;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FDamageDataByCategory>               DamageDataByCategory;                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.MatchPreparerClass
// 0x0010
struct FMatchPreparerClass
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MatchPreparerClass.Type
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      Class;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ModeStringParameter
// 0x0020
struct FModeStringParameter
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.CustomGameUpdateCharacterInfo
// 0x000C
struct FCustomGameUpdateCharacterInfo
{
	float                                              ReviveCastingTime;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierGroggyDamagePerSecond;                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierPunchDamage;                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LimitCustomStringParameter
// 0x0018
struct FLimitCustomStringParameter
{
	struct FString                                     CustomStringParameter;                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              MinLimit;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLimit;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RedZoneCustomOption
// 0x001C
struct FRedZoneCustomOption
{
	unsigned char                                      bIsActive : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MultiplierRedZoneExplosionDensity;                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneStartTime;                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneEndTime;                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneExplosionDelay;                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneDuration;                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneArea;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BlueZoneCustomOption
// 0x0024
struct FBlueZoneCustomOption
{
	int                                                PhaseNum;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartDelay;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarningDuration;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleaseDuration;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasDamagePerSecond;                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiusRate;                                               // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadRatio;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandRatio;                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CircleAlgorithm;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PlayerStartsUserCount
// 0x0010
struct FPlayerStartsUserCount
{
	int                                                PlayerCount;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class ATslPlayerStart*                             PlayerStart;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PointInfo
// 0x0008
struct FPointInfo
{
	int                                                TeamCount;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                RoundPoint;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.Teams
// 0x0018
struct FTeams
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class ATeam*>                               Members;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslBpRewardRule
// 0x0058 (0x0060 - 0x0008)
struct FTslBpRewardRule : public FTableRowBase
{
	float                                              OverallGain;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlayTimeGain;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RankingGain;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KillGain;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageGain;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ExpectedMatchParticipantsNum;                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SessionWarmingUpTimeInMinutes;                            // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AvgMatchInProgressTimeInMinutes;                          // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AvgTotalKillsInSession;                                   // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AvgTotalDamageInSession;                                  // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SurvivalTimeFactor;                                       // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TeamSpectatingTimeFactor;                                 // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BasePlayTimeInMinutes;                                    // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EarlyPlayTimeSlopePerMinutes;                             // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LaterPlayTimeSlopePerMinutes;                             // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TotalBpAmountForRankingPerHour;                           // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RankingDistributionFunctionWeight;                        // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RankingBonusWinner;                                       // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RankingBonusTop10;                                        // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TotalBpAmountForKillPerHour;                              // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TotalBpAmountForDamagePerHour;                            // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BattleRoyalePoisionGasData
// 0x0040
struct FBattleRoyalePoisionGasData
{
	float                                              StartDelay;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarningDuration;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleaseDuration;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiusRate;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomRadiusRate;                                         // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasDamagePerSecond;                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpreadRatio;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageMagnifierForDistance;                               // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageMagnifier;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LandRatio;                                                // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CircleAlgorithm;                                          // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                FastPlayerCount;                                          // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FastWarningDuration;                                      // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FastReleaseDuration;                                      // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 DamageMagnifierCurve;                                     // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ZombieCustomizationData
// 0x0028
struct FZombieCustomizationData
{
	struct FString                                     StringOptionKey;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ZombieCustomizationData.Gender
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FString>                             ZombieOptionValues;                                       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslActionInputCallbackConfig
// 0x0018
struct FTslActionInputCallbackConfig
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CallbackName;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bConsume : 1;                                             // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslAxisInputCallbackConfig
// 0x0020
struct FTslAxisInputCallbackConfig
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       CallbackName;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bConsume : 1;                                             // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder
// 0x0018
struct FUmgWidgetBinder
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Parent;                                                   // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Animation
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Animation : public FUmgWidgetBinder
{
	class UWidgetAnimation*                            CachedAnimation;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Panel
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Panel : public FUmgWidgetBinder
{
	class UPanelWidget*                                CachedPanel;                                              // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_CanvasPanel
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_CanvasPanel : public FUmgWidgetBinder_Panel
{
	class UCanvasPanel*                                CachedCanvasPanel;                                        // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Gerneral
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Gerneral : public FUmgWidgetBinder
{
	class UWidget*                                     CachedWidget;                                             // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_TextBlock
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_TextBlock : public FUmgWidgetBinder
{
	class UTextBlock*                                  CachedTextBlock;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Image
// 0x0010 (0x0028 - 0x0018)
struct FUmgWidgetBinder_Image : public FUmgWidgetBinder
{
	class UImage*                                      CachedImage;                                              // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CachedMaterial;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslInputKey
// 0x0020
struct FTslInputKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.TslGameOptionDuplicateProhibitedKeyBinderData
// 0x0018
struct FTslGameOptionDuplicateProhibitedKeyBinderData
{
	struct FName                                       DuplicateProhibitedTabName;                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       DuplicateProhibitedCategoryName;                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       DuplicateProhibitedItemName;                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslGameOptionKeyBindingDesc
// 0x0038
struct FTslGameOptionKeyBindingDesc
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameOptionKeyBindingDesc.Type
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       InputName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InputAxisScale;                                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FKey>                                ForbiddenKeys;                                            // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FTslGameOptionDuplicateProhibitedKeyBinderData> DuplicateProhibitionData;                                 // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslGamepadInputKey
// 0x0028
struct FTslGamepadInputKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGamepadInputKey.ResponseType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ResponseTime;                                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBlockDuplicatedKeyAction : 1;                            // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslGamepadInputKeySet
// 0x0010
struct FTslGamepadInputKeySet
{
	TArray<struct FTslGamepadInputKey>                 GamepadInputKeys;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.StartModeProperties
// 0x0050
struct FStartModeProperties
{
	float                                              TimeLimitSeconds;                                         // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastRespawnTimeSeconds;                                   // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        TeamIds;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<int>                                        TeamIndices;                                              // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FString>                             TeamLeaderNames;                                          // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FString>                             TeamLeaderClanNames;                                      // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                TeamCount;                                                // 0x0048(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HealthColorData
// 0x0018
struct FHealthColorData
{
	struct FFloatInterval                              HealthPercentRange;                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HornPlayInfo
// 0x0008
struct FHornPlayInfo
{
	unsigned char                                      bMakeSureDirty : 1;                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.HornPlayInfo.HornSoundType
	unsigned char                                      UnknownData01[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              KeyPressedTime;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HornSoundInfo
// 0x0010
struct FHornSoundInfo
{
	class UAkAudioEvent*                               HornOnSound;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               HornOffSound;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslKeyHintData
// 0x0010
struct FTslKeyHintData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslKeyHintData.KeyHintType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslKeyHintChecker*                          KeyHintChecker;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeatherLevelInfo
// 0x0020
struct FWeatherLevelInfo
{
	struct FString                                     WeatherId;                                                // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Weight;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       WeatherLevel;                                             // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomActionKeyData
// 0x0018
struct FCustomActionKeyData
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.CustomAxisKeyData
// 0x0020
struct FCustomAxisKeyData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.CustomMouseSensitiveData
// 0x0010
struct FCustomMouseSensitiveData
{
	struct FName                                       MouseSensitiveName;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastConvertedMouseSensitivity;                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomGamePadSensitiveData
// 0x0010
struct FCustomGamePadSensitiveData
{
	struct FName                                       GamePadSensitiveName;                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GamePadSensitivity;                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastConvertedGamePadSensitivity;                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomInputSettings
// 0x00D8
struct FCustomInputSettings
{
	TArray<struct FCustomActionKeyData>                ActionKeyList;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomAxisKeyData>                  AxisKeyList;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bIsUsingPerScopeMouseSensitivity : 1;                     // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsUsingPerScopeGamepadSensitivity : 1;                   // 0x0021(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	TArray<struct FCustomMouseSensitiveData>           MouseSensitiveList;                                       // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomGamePadSensitiveData>         GamePadSensitiveList;                                     // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0048(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.CustomInputSettings.SensitiveMap
	float                                              MouseVerticalSensitivityMultiplierAdjusted;               // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bInvertMouse : 1;                                         // 0x009C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bInvertGamePadY : 1;                                      // 0x009D(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bInvertGamePadX : 1;                                      // 0x009E(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	float                                              GamePadDeadZone;                                          // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GamepadVerticalSensitivityMultiplier;                     // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              StartRunningSensitivity;                                  // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GamePadDeadZone_Left;                                     // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableAimAccPad : 1;                                     // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x27];                                      // 0x00B1(0x0027) MISSED OFFSET
};

// ScriptStruct TslGame.TslPersistantData
// 0x0140
struct FTslPersistantData
{
	struct FCustomInputSettings                        CustomInputSettings;                                      // 0x0000(0x00D8) (CPF_Config)
	unsigned char                                      bUseForceFeedback : 1;                                    // 0x00D8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00D9(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPersistantData.GamepadPresetType
	unsigned char                                      UnknownData01[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	float                                              ForceFeedbackMultiplier;                                  // 0x00DC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FpsCameraFov;                                             // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              Gamma;                                                    // 0x00E4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsMasterSoundMute : 1;                                   // 0x00E8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsEffectSoundMute : 1;                                   // 0x00E9(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsUISoundMute : 1;                                       // 0x00EA(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsBGMSoundMute : 1;                                      // 0x00EB(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsEnabledHrtfRemoteWeaponSound : 1;                      // 0x00EC(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	struct FString                                     CultureName;                                              // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bIconKillfeedEnabled : 1;                                 // 0x0100(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	int                                                ColorBlindType;                                           // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     CrosshairColorString;                                     // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FColor                                      CustomCrosshairColor;                                     // 0x0118(0x0004) (CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseKeyHint : 1;                                          // 0x011C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x011D(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPersistantData.TppAimCamPosRecoveryType
	unsigned char                                      UnknownData05[0x2];                                       // 0x011E(0x0002) MISSED OFFSET
	float                                              ForwardRunningSensitivity;                                // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MasterSoundVolume;                                        // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              EffectSoundVolume;                                        // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UISoundVolume;                                            // 0x012C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BGMSoundVolume;                                           // 0x0130(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0134(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPersistantData.HGsFiringMode
	unsigned char                                      UnknownData07[0x1];                                       // 0x0135(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPersistantData.SMGsFiringMode
	unsigned char                                      UnknownData08[0x1];                                       // 0x0136(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPersistantData.ARsFiringMode
	unsigned char                                      UnknownData09[0x1];                                       // 0x0137(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPersistantData.DMRsFiringMode
	unsigned char                                      bUseRes4K : 1;                                            // 0x0138(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bAutoReloadOnOutOfAmmoFire : 1;                           // 0x0139(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bShowCompassShade : 1;                                    // 0x013A(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslMenuItemStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FTslMenuItemStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0090) (CPF_Edit)
	struct FSlateBrush                                 LeftArrowImage;                                           // 0x0098(0x0090) (CPF_Edit)
	struct FSlateBrush                                 RightArrowImage;                                          // 0x0128(0x0090) (CPF_Edit)
};

// ScriptStruct TslGame.TslMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FTslMenuSoundsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 StartGameSound;                                           // 0x0008(0x0018) (CPF_Edit)
	struct FSlateSound                                 ExitGameSound;                                            // 0x0020(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.TslMenuStyle
// 0x0210 (0x0218 - 0x0008)
struct FTslMenuStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HeaderBackgroundBrush;                                    // 0x0008(0x0090) (CPF_Edit)
	struct FSlateBrush                                 LeftBackgroundBrush;                                      // 0x0098(0x0090) (CPF_Edit)
	struct FSlateBrush                                 RightBackgroundBrush;                                     // 0x0128(0x0090) (CPF_Edit)
	struct FSlateSound                                 MenuEnterSound;                                           // 0x01B8(0x0018) (CPF_Edit)
	struct FSlateSound                                 MenuBackSound;                                            // 0x01D0(0x0018) (CPF_Edit)
	struct FSlateSound                                 OptionChangeSound;                                        // 0x01E8(0x0018) (CPF_Edit)
	struct FSlateSound                                 MenuItemChangeSound;                                      // 0x0200(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.CustomAnimData
// 0x0088
struct FCustomAnimData
{
	TArray<class UAnimSequenceBase*>                   AnimSeqList;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0010(0x0038) (CPF_Edit)
	struct FAlphaBlend                                 BlendOut;                                                 // 0x0048(0x0038) (CPF_Edit)
	float                                              PlayRate;                                                 // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0084(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CustomAnimData.SlotType
	unsigned char                                      bPlayLowerBodyOnStand : 1;                                // 0x0085(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAdjustPlayRate : 1;                                      // 0x0086(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0087(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcMeleeAttackInfo
// 0x0040
struct FNpcMeleeAttackInfo
{
	struct FVector                                     RelativeLocation;                                         // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageCheckStartSeconds;                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAmount;                                             // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FireDuration;                                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideMovingSpeed;                                      // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideMovingSpeedDuration;                              // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OverrideMovingSpeedScaleCurve;                            // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.NpcMeleeAttackInfo.MovingAttackType
	unsigned char                                      bIgnoreDamageAnim : 1;                                    // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSkipPhysicsRotation : 1;                                 // 0x003A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcCustomAnimInfo
// 0x0090
struct FNpcCustomAnimInfo
{
	struct FCustomAnimData                             CustomAnimData;                                           // 0x0000(0x0088) (CPF_Transient)
	float                                              AnimDuration;                                             // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                AnimIndex;                                                // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NPCDrawMovingInfo
// 0x001C
struct FNPCDrawMovingInfo
{
	struct FVector                                     ActorLocation;                                            // 0x0000(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     MovingDir;                                                // 0x000C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              Speed;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PoseSnapshotInfo
// 0x0010
struct FPoseSnapshotInfo
{
	struct FName                                       SnapshotName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bActiveOnRendered : 1;                                    // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcItemSet
// 0x0010
struct FNpcItemSet
{
	TArray<class UClass*>                              ItemBpArray;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.NpcInfo
// 0x0030
struct FNpcInfo
{
	class UClass*                                      Pawn;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Controller;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNpcItemSet>                         ItemSetArray;                                             // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bRandomItemSet : 1;                                       // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AISpawnParameterInfo
// 0x002C
struct FAISpawnParameterInfo
{
	int                                                NpcType;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      Instigator;                                               // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bRadnomNavSpawn : 1;                                      // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Border
// 0x0010 (0x0030 - 0x0020)
struct FUmgWidgetBinder_Border : public FUmgWidgetBinder_Panel
{
	class UBorder*                                     CachedBorder;                                             // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CachedMaterial;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.OptionContentDesc
// 0x0068
struct FOptionContentDesc
{
	struct FName                                       OptionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit)
	struct FText                                       DescText;                                                 // 0x0020(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.OptionContentDesc.ExposeType
	unsigned char                                      bIsStepper : 1;                                           // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FText>                               StepperContents;                                          // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                StepperDefaultIndex;                                      // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSlider : 1;                                            // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              SliderMin;                                                // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SliderMax;                                                // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SliderDefaultValue;                                       // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSeparator : 1;                                         // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPalette : 1;                                           // 0x0065(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ParticleParameter
// 0x0018
struct FParticleParameter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      bEnableRTPC : 1;                                          // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslActorPool
// 0x0010
struct FTslActorPool
{
	TArray<class AActor*>                              ActorPoolList;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslParticleGroupInfo
// 0x0090
struct FTslParticleGroupInfo
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslParticleGroupInfo.GroupPriority
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MaxObjectCount;                                           // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslParticleGroupInfo.CullType
	unsigned char                                      UnknownData03[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRenderDuration;                                        // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSameTransformCount;                                    // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNearbyTransformCount;                                  // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6C];                                      // 0x0024(0x006C) MISSED OFFSET
};

// ScriptStruct TslGame.TslPlayerStatistics
// 0x0004
struct FTslPlayerStatistics
{
	int                                                NumKills;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PlayerAttackInfo
// 0x0058
struct FPlayerAttackInfo
{
	int                                                Shots;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0004(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.PlayerAttackInfo.HitInfoMap
};

// ScriptStruct TslGame.TslPlayerStatisticsNotReplicated
// 0x0118
struct FTslPlayerStatisticsNotReplicated
{
	float                                              MovedDistanceOnFeetMeter;                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovedDistanceOnSwimMeter;                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovedDistanceOnVehicleMeter;                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovedDistanceOnParchuteMeter;                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovedDistanceOnFreefallMeter;                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAssistToRevive;                                        // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumGunShots;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumGunShotHits;                                           // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksGivenInfos;                                        // 0x0020(0x0050) (CPF_ZeroConstructor)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksTakenInfos;                                        // 0x0070(0x0050) (CPF_ZeroConstructor)
	float                                              DamageDealtOnEnemy;                                       // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TMap<struct FString, int>                          WeaponFireCounts;                                         // 0x00C8(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplicatedThrowableItem
// 0x0010
struct FReplicatedThrowableItem
{
	class UClass*                                      ThrowableWeaponClass;                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemCount;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerStatisticsForOwner
// 0x0010
struct FTslPlayerStatisticsForOwner
{
	float                                              TotalMovedDistanceMeter;                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalGivenDamages;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongestDistanceKill;                                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HeadShots;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplicatedEquipableItem
// 0x0010
struct FReplicatedEquipableItem
{
	class UClass*                                      EquipableItemClass;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Durability;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplicatedCastableItem
// 0x0010
struct FReplicatedCastableItem
{
	class UClass*                                      CastableItemClass;                                        // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ReplicatedCastableItem.ItemType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                ItemCount;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.EmoteBitArray
// 0x0020
struct FEmoteBitArray
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct TslGame.TslPlayTime
// 0x0010
struct FTslPlayTime
{
	float                                              SurvivalTimeStart;                                        // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TeamSpectatingTimeStart;                                  // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SurvivalTimeAccumulated;                                  // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TeamSpectatingTimeAccumulated;                            // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerBpReward
// 0x0010
struct FTslPlayerBpReward
{
	float                                              BpByPlayTime;                                             // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BpByRanking;                                              // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BpByKills;                                                // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BpByDamageDealt;                                          // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerXpReward
// 0x0008
struct FTslPlayerXpReward
{
	float                                              XpBySurvivalTime;                                         // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XpByTeamSpectatingTime;                                   // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerRewardBoost
// 0x0008
struct FTslPlayerRewardBoost
{
	float                                              BpBoost;                                                  // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XpBoost;                                                  // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerRewardContext
// 0x000C
struct FTslPlayerRewardContext
{
	unsigned char                                      bIsMaxLevel : 1;                                          // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CurrentDailyXp;                                           // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DailyXpMax;                                               // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HudUiConfig
// 0x0040
struct FHudUiConfig
{
	struct FString                                     WidgetName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTslWidgetConfig                            WidgetConfig;                                             // 0x0010(0x0030) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.TslLobbySceneTravelData
// 0x0008 (0x0010 - 0x0008)
struct FTslLobbySceneTravelData : public FTableRowBase
{
	class UClass*                                      LobbySceneTravelClass;                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslBaseLobbySceneData
// 0x0080 (0x0088 - 0x0008)
struct FTslBaseLobbySceneData : public FTableRowBase
{
	struct FName                                       SceneCameraTag;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMainLevel : 1;                                         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0011(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslBaseLobbySceneData.LobbyCharacterAnimationType
	unsigned char                                      bHideMainLobbyCharacter : 1;                              // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideOtherLobbyCharacter : 1;                             // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideWeaponMasteryObjects : 1;                            // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0015(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslBaseLobbySceneData.LobbyBlurChangingStates
	unsigned char                                      bShowUmgBlur : 1;                                         // 0x0016(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	TMap<struct FString, struct FName>                 TslLobbySceneOverrideTravelNames;                         // 0x0018(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bHideDefaultParticle : 1;                                 // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FName>                               ShowParticleTags;                                         // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bCachePreviousSceneName : 1;                              // 0x0080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseOutgameVisibilityValue : 1;                           // 0x0081(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslLobbySceneData
// 0x0010 (0x0098 - 0x0088)
struct FTslLobbySceneData : public FTslBaseLobbySceneData
{
	TArray<struct FName>                               LobbyCharacterPivotTags;                                  // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslLobbyViewModeSceneData
// 0x00A0 (0x0128 - 0x0088)
struct FTslLobbyViewModeSceneData : public FTslBaseLobbySceneData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0088(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslLobbyViewModeSceneData.ViewModePivots
	unsigned char                                      UnknownData01[0x50];                                      // 0x00D8(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslLobbyViewModeSceneData.LobbyCharacterCameras
};

// ScriptStruct TslGame.TslGameOptionTargetPlatformInfo
// 0x0003
struct FTslGameOptionTargetPlatformInfo
{
	unsigned char                                      bPcPlatform : 1;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bXboxOnePlatform : 1;                                     // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bPs4Platform : 1;                                         // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslGameOptionDescriptor
// 0x0028
struct FTslGameOptionDescriptor
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       DisplayNameText;                                          // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTslGameOptionTargetPlatformInfo            TargetPlatform;                                           // 0x0020(0x0003) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslGameOptionTabDesc
// 0x0008 (0x0030 - 0x0028)
struct FTslGameOptionTabDesc : public FTslGameOptionDescriptor
{
	struct FName                                       TabName;                                                  // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslGameOptionTargetHudInfo
// 0x0002
struct FTslGameOptionTargetHudInfo
{
	unsigned char                                      bVisibleInLobby : 1;                                      // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bVisibleInGame : 1;                                       // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslGameOptionCategoryDesc
// 0x0018 (0x0040 - 0x0028)
struct FTslGameOptionCategoryDesc : public FTslGameOptionDescriptor
{
	struct FName                                       TabName;                                                  // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryName;                                             // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTslGameOptionTargetHudInfo                 TargetHud;                                                // 0x0038(0x0002) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslGameOptionItemDesc
// 0x0080 (0x00A8 - 0x0028)
struct FTslGameOptionItemDesc : public FTslGameOptionDescriptor
{
	struct FName                                       TabName;                                                  // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryName;                                             // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ItemWidgetClass;                                          // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ItemFunctionImplementationClass;                          // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0050(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameOptionItemDesc.SupplementaryWidgetType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FText                                       DescriptionText;                                          // 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTslGameOptionKeyBindingDesc                KeyBindingDesc;                                           // 0x0070(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslGameOptionCategoryInfo
// 0x0050
struct FTslGameOptionCategoryInfo
{
	struct FTslGameOptionCategoryDesc                  CategoryDesc;                                             // 0x0000(0x0040) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FTslGameOptionItemDesc>              Items;                                                    // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslGameOptionTabInfo
// 0x0040
struct FTslGameOptionTabInfo
{
	struct FTslGameOptionTabDesc                       TabDesc;                                                  // 0x0000(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FTslGameOptionCategoryInfo>          Categories;                                               // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslGameOptionHierarchy
// 0x0010
struct FTslGameOptionHierarchy
{
	TArray<struct FTslGameOptionTabInfo>               Hierarchy;                                                // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ScreenResolution
// 0x0008
struct FScreenResolution
{
	int                                                Width;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponBasicAnim
// 0x0018
struct FWeaponBasicAnim
{
	class UAnimMontage*                                PullOut;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                PutIn;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Pickup;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponData
// 0x0108
struct FWeaponData
{
	float                                              TargetingFOV;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HoldBreathFOV;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Rarity;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SocketOffset_Shoulder;                                    // 0x0010(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SocketOffset_Hand;                                        // 0x001C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bApplyGripPoseLeft : 1;                                   // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0029(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponData.WeaponGripLeft
	unsigned char                                      UnknownData01[0x1];                                       // 0x002A(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponData.WeaponClass
	unsigned char                                      UnknownData02[0x1];                                       // 0x002B(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponData.AnimationWeaponClassOverride
	unsigned char                                      bAlwaysArmed : 1;                                         // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDefaultScoreMultiplier : 1;                           // 0x002D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	float                                              ScoreMultiplierByDamage;                                  // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScoreMultiplierByKill;                                    // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Pitch;                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_YawOffset;                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Movement;                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Stand;                                       // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Crouch;                                      // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Prone;                                       // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_Range;                                          // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_NearRange;                                      // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_Power;                                          // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDynamicReverbAK : 1;                                  // 0x005C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<float>                                      IronSightZeroingDistances;                                // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              AnimationKick;                                            // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class UAnimMontage*                                RecoilMontage;                                            // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestructibleDoor : 1;                                     // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0081(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponData.ThrownType
	unsigned char                                      UnknownData07[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              WeaponEquipDuration;                                      // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponUnequipDuration;                                    // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponBoltActionTrigger;                                  // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponReadyDuration;                                      // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bForceFireAfterEquip : 1;                                 // 0x0094(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              PhysicalBodyHitImpactPower;                               // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FName                                       WeaponSensitivityOverride;                                // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x50];                                      // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty TslGame.WeaponData.RestrictedStances
	float                                              MovementModifierRunning;                                  // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierSprinting;                                // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierJumpVelocity;                             // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bBlockPeeking : 1;                                        // 0x0104(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentAssetData
// 0x0040
struct FWeaponAttachmentAssetData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentAssetData.AttachmentSlotID
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AttachmentTag;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       AttachmentMeshName;                                       // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AttachmentTemplate;                                       // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentTagPositionData
// 0x0010
struct FWeaponAttachmentTagPositionData
{
	struct FName                                       AttachmentTag;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachmentPoint;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentPositionData
// 0x0020
struct FWeaponAttachmentPositionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentPositionData.AttachmentSlotID
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AttachmentPoint;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FWeaponAttachmentTagPositionData>    AttachmentPointByTag;                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponRollAnim
// 0x0010
struct FWeaponRollAnim
{
	class UAnimMontage*                                RollLeft;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RollRight;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkinParam
// 0x0010
struct FSkinParam
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.SkinParam.SkinCategory
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       SkinName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplicatedSkinParam
// 0x0020
struct FReplicatedSkinParam
{
	class UClass*                                      SkinItemClass;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FSkinParam                                  SkinParam;                                                // 0x0008(0x0010) (CPF_Transient)
	int                                                SkinOwnerPlayerId;                                        // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplicatedMasteryItem
// 0x0004
struct FReplicatedMasteryItem
{
	uint16_t                                           CharmId;                                                  // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MeshId;                                                   // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponGunData
// 0x0008
struct FWeaponGunData
{
	int                                                BulletPerFiring;                                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenShots;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReticleBrightSceneVisibility
// 0x000C
struct FReticleBrightSceneVisibility
{
	float                                              LuminanceMultiplier;                                      // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OpacityMultiplier;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OpacityMultiplierLowResolution;                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponPPSettings
// 0x00A0
struct FWeaponPPSettings
{
	float                                              BlurLevel;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeRadiusNear;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeRadiusFar;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   ReticleRect;                                              // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReticleAngularSize;                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                ReticleTint;                                              // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReticleGamma;                                             // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UTexture*                                    ReticleTexture;                                           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UReticleSettings*                            ReticleSettings;                                          // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeLensDistortion;                                      // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeLensCA;                                              // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                ScopeLensTint;                                            // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeOuterBrightness;                                     // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DepthBlurPower;                                           // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DepthBlurWhitePoint;                                      // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DepthBlurBlackPoint;                                      // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   RelativeOffsetMap;                                        // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParallaxMovementScale;                                    // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParallaxRadiusScale;                                      // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NearClipStaticOffset;                                     // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NearClipMinClamp;                                         // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     WeaponCycleCameraOffset;                                  // 0x0084(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FReticleBrightSceneVisibility               BrightSceneVisibility;                                    // 0x0090(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.ProjectileWeaponData
// 0x0008
struct FProjectileWeaponData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ThrowableAnim
// 0x0018
struct FThrowableAnim
{
	class UAnimMontage*                                PinOff;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Cooking;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Release;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ThrowableWeaponData
// 0x00A0
struct FThrowableWeaponData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CookingSocketName;                                        // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      CookingEffectClass;                                       // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Ring;                                                     // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RingAttachSocket;                                         // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ThrowableWeaponData.ExplosionStartType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              ExplosionDelay;                                           // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FireDelay;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ActivationTimeLimit;                                      // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              StandAnim;                                                // 0x0038(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              CrouchAnim;                                               // 0x0050(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              ProneAnim;                                                // 0x0068(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SpeedCurve;                                               // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 PitchCurve;                                               // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThrowTime;                                                // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThrowCooldownDuration;                                    // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanBeCooked : 1;                                         // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ExplosionTracer
// 0x0040
struct FExplosionTracer
{
	unsigned char                                      bEnabled : 1;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           StandingTraceTargets;                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FVector2D>                           CrouchTraceTargets;                                       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FVector>                             ProneTraceTargets;                                        // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              ProxyTraceMaxLenght;                                      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProxyTraceMinLenght;                                      // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ProjectileData
// 0x0040
struct FProjectileData
{
	float                                              ProjectileLife;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ExplosionDamage;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DamageCurve;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinImpactVelocityForSound;                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenImpactSound;                                   // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                VerticalSurfaceImpactLimit;                               // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AbsPitchLimitForVerticalSurface;                          // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterHit_VelocityScalar;                                  // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterHit_GravityScalar;                                   // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestroyAtExplosion : 1;                                   // 0x0038(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bIgnoreVerticalSurfaces : 1;                              // 0x0038(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bExplodeOnDamage : 1;                                     // 0x0038(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.DoorBreakingState
// 0x0001
struct FDoorBreakingState
{
	unsigned char                                      bIsBrokenTop : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bIsBrokenCenter : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsBrokenBottom : 1;                                      // 0x0000(0x0001)
};

// ScriptStruct TslGame.NpcSpawnParam
// 0x0008
struct FNpcSpawnParam
{
	int                                                NpcType;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpawnNum;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcTimeSpawnParam
// 0x0020
struct FNpcTimeSpawnParam
{
	float                                              StartDelay;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNpcSpawnParam>                      NpcSpawnParamArray;                                       // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                NpcCount;                                                 // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SavedObPos
// 0x0018
struct FSavedObPos
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ThrowableItemProjectileSpawnParams
// 0x0050
struct FThrowableItemProjectileSpawnParams
{
	struct FTransform                                  MeshTransform;                                            // 0x0000(0x0030) (CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0030(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class ADroppedItem*                                GrabbedActor;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.BlockAction
// 0x0010
struct FBlockAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CauseOfDeathData
// 0x0018 (0x0020 - 0x0008)
struct FCauseOfDeathData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CauseOfDeathData.DamageTypeCategory
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UTexture*                                    CauseOfDeathIcon;                                         // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconRatio;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ConditionOfDeathData
// 0x0018 (0x0020 - 0x0008)
struct FConditionOfDeathData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ConditionOfDeathData.ConditionOfDeathCategory
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UTexture*                                    ConditionOfDeathIcon;                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconRatio;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_VerticalBox
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_VerticalBox : public FUmgWidgetBinder_Panel
{
	class UVerticalBox*                                CachedVerticalBox;                                        // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_WidgetSwitcher
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_WidgetSwitcher : public FUmgWidgetBinder_Panel
{
	class UWidgetSwitcher*                             CachedWidgetSwitcher;                                     // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_UserWidget
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_UserWidget : public FUmgWidgetBinder
{
	class UUserWidget*                                 CachedWidget;                                             // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_ScaleBox
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_ScaleBox : public FUmgWidgetBinder_Panel
{
	class UScaleBox*                                   CachedScaleBox;                                           // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_HorizontalBox
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_HorizontalBox : public FUmgWidgetBinder_Panel
{
	class UHorizontalBox*                              CachedHorizontalBox;                                      // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_InvalidationBox
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_InvalidationBox : public FUmgWidgetBinder_Panel
{
	class UInvalidationBox*                            CachedInvalidationBox;                                    // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslReportUserInfo
// 0x0048
struct FTslReportUserInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ClanName;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0044(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslReportUserInfo.SubjectToReport
};

// ScriptStruct TslGame.UmgWidgetBinder_Overlay
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_Overlay : public FUmgWidgetBinder_Panel
{
	class UOverlay*                                    CachedOverlay;                                            // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_SizeBox
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_SizeBox : public FUmgWidgetBinder_Panel
{
	class USizeBox*                                    CachedSizeBox;                                            // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.EmoteDBDataRow
// 0x0058 (0x0060 - 0x0008)
struct FEmoteDBDataRow : public FTableRowBase
{
	int                                                EmoteID;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       EmoteLocalizedName;                                       // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UTexture2D*                                  UITexture;                                                // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          UIMaterial;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0040(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EmoteDBDataRow.AnimType
	unsigned char                                      bIsBGM_Sound : 1;                                         // 0x0041(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsRotationAllowed : 1;                                   // 0x0042(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsLoopable : 1;                                          // 0x0043(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsRNG : 1;                                               // 0x0044(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsCooperative : 1;                                       // 0x0045(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	class UTslEmoteTraceData*                          TraceDataRef;                                             // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FPPEmoteViewPitchMin;                                     // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FPPEmoteViewPitchMax;                                     // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FPPEmoteViewYawMin;                                       // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FPPEmoteViewYawMax;                                       // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SequenceBase
// 0x0098
struct FSequenceBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0020(0x0078) MISSED OFFSET
};

// ScriptStruct TslGame.Sequence_Float
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Float : public FSequenceBase
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_RetainerBox
// 0x0008 (0x0028 - 0x0020)
struct FUmgWidgetBinder_RetainerBox : public FUmgWidgetBinder_Panel
{
	class URetainerBox*                                CachedRetainerBox;                                        // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CaptureObjectWidgetColorSet
// 0x0030
struct FCaptureObjectWidgetColorSet
{
	struct FLinearColor                                GaugeColor;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                TrackColor;                                               // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                CenterColorWhenCaptured;                                  // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CaptureObjectWidgetData
// 0x0108
struct FCaptureObjectWidgetData
{
	struct FUmgWidgetBinder_Border                     OutsideBorder_Binder;                                     // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      CircleImage_Binder;                                       // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  DistanceTextBlock_Binder;                                 // 0x0058(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  CaptureObjectNameTextBlock_Binder;                        // 0x0078(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bShowDistance : 1;                                        // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	struct FCaptureObjectWidgetColorSet                NeutralColorSet;                                          // 0x009C(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FCaptureObjectWidgetColorSet>        TeamColorSets;                                            // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FLinearColor                                CenterColorWhenNotCaptured;                               // 0x00E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class ATslGameState*                               TslGameState;                                             // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerController*                        TslPlayerController;                                      // 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ACaptureAreaActor*                           CaptureAreaActor;                                         // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SaveDataForLifegauge
// 0x0018
struct FSaveDataForLifegauge
{
	class ATslCharacter*                               ViewTargetTslCharacter;                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              HealthOrGroggyHealth;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMaxOrGroggyHealthMax;                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealAmount;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsGroggy : 1;                                            // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasEffect : 1;                                           // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DurabilityColor
// 0x0018
struct FDurabilityColor
{
	struct FFloatInterval                              DurabilityRatioRange;                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DurabilityColorSet
// 0x0010
struct FDurabilityColorSet
{
	TArray<struct FDurabilityColor>                    Colors;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.UiEffectAnimation_FloatCurve
// 0x00B0
struct FUiEffectAnimation_FloatCurve
{
	struct FSequence_Float                             FloatCurve;                                               // 0x0000(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FName>                               ParamNames;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.Sequence_Vector
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Vector : public FSequenceBase
{
	class UCurveVector*                                VectorCurve;                                              // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UiEffectAnimation_VectorCurve
// 0x00B0
struct FUiEffectAnimation_VectorCurve
{
	struct FSequence_Vector                            VectorCurve;                                              // 0x0000(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FName>                               ParamNames;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.GaugeAlphaCurveType
// 0x0010
struct FGaugeAlphaCurveType
{
	struct FFloatInterval                              DamageRange;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UCurveVector*                                ColorCurve;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MapLocationData
// 0x0028
struct FMapLocationData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MapLocationData.LocationType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       LocationName;                                             // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   Position_MC;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Spacer
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Spacer : public FUmgWidgetBinder
{
	class USpacer*                                     CachedSpacer;                                             // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ColorBlindColorData
// 0x0014
struct FColorBlindColorData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ColorBlindColorData.Type
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ColorBlindColorSet
// 0x0010
struct FColorBlindColorSet
{
	TArray<struct FColorBlindColorData>                ColorSet;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.AircraftRouteData
// 0x0040
struct FAircraftRouteData
{
	class ATslAircraftVehicle*                         Aircraft;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UImage*                                      AircraftIcon;                                             // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      ArrowHead;                                                // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      ArrowBody;                                                // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      ArrowTail;                                                // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct TslGame.FlareGunPackageDropZoneData
// 0x0020
struct FFlareGunPackageDropZoneData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UImage*                                      DropZoneCircle;                                           // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              DropZoneAlphaCurveTime;                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.OutsideTeamIconData
// 0x0020
struct FOutsideTeamIconData
{
	struct FVector2D                                   LocatoinMC;                                               // 0x0000(0x0008) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MatInst;                                                  // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ExtendedSizeConfig
// 0x0028
struct FExtendedSizeConfig
{
	float                                              MinimapSize;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ExtendedSizeConfig.MinimapFocus
	unsigned char                                      bIsBluezoneInfoIntoMap : 1;                               // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              ViewScale1D;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ViewScale_AccelerationCurve;                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 ViewScale_DecelerationCurve;                              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsExtendedSize : 1;                                      // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DamageSpectatorWidgetBinder
// 0x0070
struct FDamageSpectatorWidgetBinder
{
	struct FUmgWidgetBinder_HorizontalBox              HorizontalBox;                                            // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_SizeBox                    HeadShotSizeBoxBinder;                                    // 0x0028(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  DamageTextBinder;                                         // 0x0050(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslStickInputHelper
// 0x000C
struct FTslStickInputHelper
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlockingTime;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadZoneValue;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DirectionTextData
// 0x0028
struct FDirectionTextData
{
	struct FText                                       DirectionText;                                            // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                TextColor;                                                // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslGameOptionSupplementaryData
// 0x0028
struct FTslGameOptionSupplementaryData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameOptionSupplementaryData.Type
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     KeyStr;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslGameOptionItemStepperData
// 0x0030
struct FTslGameOptionItemStepperData
{
	struct FText                                       DisplayNameText;                                          // 0x0000(0x0018)
	struct FText                                       DetailedDescriptionText;                                  // 0x0018(0x0018)
};

// ScriptStruct TslGame.HintKeyInfo
// 0x0020
struct FHintKeyInfo
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SecondKeyName;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SecondScale;                                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideInProneStance : 1;                                   // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideInSeatStance : 1;                                    // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslKeyIconData
// 0x0030
struct FTslKeyIconData
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UTexture*                                    KeyIcon;                                                  // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    KeyIcon_PS;                                               // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconRatio;                                                // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HealItemSelectorData
// 0x0018
struct FHealItemSelectorData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.HealItemSelectorData.ItemType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  ItemTexture;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.KeyboardAndMouseActionAndAxisBindingHintInfo
// 0x0028
struct FKeyboardAndMouseActionAndAxisBindingHintInfo
{
	struct FName                                       ActionOrAxisBindingName;                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       HintDisplayName;                                          // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bHoldInput : 1;                                           // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReleaseInput : 1;                                        // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideInProneStance : 1;                                   // 0x0022(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHideInSeatStance : 1;                                    // 0x0023(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.KillQueueInfo
// 0x00F8
struct FKillQueueInfo
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct TslGame.SystemMessageInfo
// 0x0038
struct FSystemMessageInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.SystemMessageInfo.MessageType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentDeltaTime;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Message;                                                  // 0x0010(0x0018)
	int                                                EliminatorTeamNum;                                        // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EliminatedTeamNum;                                        // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsWipedOut : 1;                                          // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTeamKillMessage : 1;                                     // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DeathMessage
// 0x00D0
struct FDeathMessage
{
	struct FText                                       KillerName;                                               // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FText                                       KillerClanName;                                           // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FText                                       VictimName;                                               // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FText                                       VictimClanName;                                           // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bKillerIsOwner : 1;                                       // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bVictimIsOwner : 1;                                       // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                KillerTeamNum;                                            // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                VictimTeamNum;                                            // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UTslDamageType*                              DamageType;                                               // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FText                                       InsertMessage;                                            // 0x0078(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0090(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.DeathMessage.DamageReason
	unsigned char                                      bGroggy : 1;                                              // 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	int                                                AlivePlayerNum;                                           // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                AliveTeamNum;                                             // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FText                                       DamageCauserName;                                         // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	class UTexture*                                    DamageCauserIcon;                                         // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              DamageCauserIconRatio;                                    // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                DamageCauserLevel;                                        // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsKillerExist : 1;                                       // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsStealKilled : 1;                                       // 0x00C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsObserver : 1;                                          // 0x00CA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsObserverAndKillerIsSpectated : 1;                      // 0x00CB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsObserverAndVictimIsSpectated : 1;                      // 0x00CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsMidGameBanMessage : 1;                                 // 0x00CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RegistedPlayer
// 0x0020
struct FRegistedPlayer
{
	class ATslPlayerState*                             PlayerState;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct TslGame.SaveTeamMemberData
// 0x0018
struct FSaveTeamMemberData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TslGame.RankingItemWidgets
// 0x0010
struct FRankingItemWidgets
{
	TArray<class UWarModeRankingItemWidget*>           Items;                                                    // 0x0000(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.VehicleEffectInfo
// 0x0110
struct FVehicleEffectInfo
{
	class UClass*                                      Explosion;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamagedPercentMax;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      Damaged;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Destroyed;                                                // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EngineSound;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EngineSound_Remote;                                       // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Muffler;                                                  // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Muffler2;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Boost;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Boost2;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontTrail;                                               // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      RearTrail;                                                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Thruster;                                                 // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Thruster2;                                                // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontFoamLeft;                                            // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontFoamRight;                                           // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SpashEffectOverride;                                      // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 ImpactNormalForceRange;                                   // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UClass*                                      ImpactDefault;                                            // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactConcrete;                                           // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactDirt;                                               // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactWater;                                              // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactMetal;                                              // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactWood;                                               // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactGlass;                                              // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactGrass;                                              // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactRock;                                               // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactSand;                                               // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactFlesh;                                              // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactSnow;                                               // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactSnowRock;                                           // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactIce;                                                // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxImpactCount;                                           // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleLightSettings
// 0x0078
struct FVehicleLightSettings
{
	struct FName                                       HeadLampEmissiveParameter;                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeadLampEmissiveValue;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       TailLampEmissiveParameter;                                // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TailLampEmissiveValue;                                    // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       BoostLampEmissiveParameter;                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BoostLampEmissiveValue;                                   // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       LowFuelLampEmissiveParameter;                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LowFuelLampEmissiveValue;                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LowFuelLightPercentage;                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurveEngineOn;                                            // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurveEngineOff;                                           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EngineSwitchMaxTime;                                      // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FName                                       HeadLightIntensityParamName;                              // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeadLightIntensity_Mat;                                   // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FName                                       TailLightIntensityParamName;                              // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TailLightIntensity_Mat;                                   // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleCameraEffectSettings
// 0x0070
struct FVehicleCameraEffectSettings
{
	unsigned char                                      bCalculateVelocityAtHeadPoint : 1;                        // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AccelerationInterpSpeed;                                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CameraPointName;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   PitchToOffsetInMap;                                       // 0x0010(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   PitchToOffsetOutMap;                                      // 0x0018(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     StaticOffset;                                             // 0x0020(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ZOffset;                                                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AccelerationMovementScalar;                               // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AccelerationMovementSizeClamp;                            // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PostClampAccelerationScale;                               // 0x0038(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     AccelerationTargetScale;                                  // 0x0044(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   VelocityToFovInMap;                                       // 0x0050(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityToFovMaxOffset;                                   // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bInterpolateCameraOffset : 1;                             // 0x005C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              CameraOffsetInterpSpeed;                                  // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.VehicleDebugHit
// 0x0028
struct FVehicleDebugHit
{
	struct FVector                                     RelativeNormalImpulse;                                    // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     RelativeImpactPoint;                                      // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     AbsoluteImpactPoint;                                      // 0x0018(0x000C) (CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0024(0x0004) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TempComponentInfo
// 0x0028
struct FTempComponentInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class USceneComponent*                             ParentComponent;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             CurrentComponent;                                         // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcSpawnPointInfo
// 0x001C
struct FNpcSpawnPointInfo
{
	int                                                NpcType;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcWaveInfo
// 0x0018
struct FNpcWaveInfo
{
	float                                              InitDelay;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpawnNum;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNpcSpawnPointInfo>                  SpawnPointArray;                                          // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct TslGame.MeleeWeaponAnim
// 0x0438
struct FMeleeWeaponAnim
{
	class UAnimMontage*                                AttackAnim;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         AttackDecalEffectDataSet;                                 // 0x0008(0x0430) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.DynamicWeatherSetting
// 0x0058
struct FDynamicWeatherSetting
{
	class ATslDynamicWeather*                          DynamicWeather;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              DirectionalLightIntensity;                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              DirectionalLightTemperature;                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              DirectionalLightVolumetricScattering;                     // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              SkyLightIntensity;                                        // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UTextureCube*                                SkyLightCubemap;                                          // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	float                                              SkyLightCubemapAngle;                                     // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	float                                              SkyLightCubemapResolution;                                // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bUseBlendSkyBox : 1;                                      // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate)
	unsigned char                                      bRefreshLightSetting : 1;                                 // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate)
	unsigned char                                      bOverrideDurationTime : 1;                                // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OverrideDurationTimeMin;                                  // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              OverrideDurationTimeMax;                                  // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      bUseDistanceDepthBlur : 1;                                // 0x003C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              DepthBlurIntensity;                                       // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DepthBlurCurveAsset;                                      // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      bClearFootprints : 1;                                     // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate)
};

// ScriptStruct TslGame.DynamicWeatherReplicationData
// 0x0010
struct FDynamicWeatherReplicationData
{
	float                                              DirectionalLightIntensity;                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              DirectionalLightTemperature;                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              DirectionalLightVolumetricScattering;                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              SkyLightIntensity;                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LocalWeatherSetting
// 0x0024
struct FLocalWeatherSetting
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FLinearColor                                FogColor;                                                 // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              FogStartDistance;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              VolFogExtinctionScale;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              WeatherParticleSpawnScale;                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              SoundScale;                                               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslLocalWeatherVolume
// 0x0030
struct FTslLocalWeatherVolume
{
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FLocalWeatherSetting                        LocalWeatherSetting;                                      // 0x0008(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate)
};

// ScriptStruct TslGame.TslImpactSoundInfo
// 0x0060
struct FTslImpactSoundInfo
{
	class UAkAudioEvent*                               DefaultSoundAk;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ConcreteSoundAk;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DirtSoundAk;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WaterSoundAk;                                             // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               MetalSoundAk;                                             // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WoodSoundAk;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GrassSoundAk;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GlassSoundAk;                                             // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FleshSoundAk;                                             // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RockSoundAk;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SandSoundAk;                                              // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               MudSoundAk;                                               // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AnimUpdateRateSettings
// 0x0078
struct FAnimUpdateRateSettings
{
	unsigned char                                      bUseLookAheadMode : 1;                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bShouldUseLodMap : 1;                                     // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0008(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                BaseNonRenderedUpdateRate;                                // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                MaxEvalRateForInterpolation;                              // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MotoRollDampSettings
// 0x001C
struct FMotoRollDampSettings
{
	unsigned char                                      bVelDampening : 1;                                        // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StabilizeAirPercentage;                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StabilizeAirTorquePercentage;                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollVelDampeningContact;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollVelDampeningNoContact;                                // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollVelDampeningInterp;                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseLinearInterp : 1;                                     // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StatTrakData
// 0x0004
struct FStatTrakData
{
	int                                                NumKills;                                                 // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StatTrakDataPair
// 0x0018
struct FStatTrakDataPair
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	struct FStatTrakData                               BeginStatTrakData;                                        // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FStatTrakData                               CountStatTrakData;                                        // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
};

// ScriptStruct TslGame.VoiceConnectionInfo
// 0x0068
struct FVoiceConnectionInfo
{
	struct FString                                     ServerURL;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Domain;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIsEnableGVoice : 1;                                      // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     GVoiceServerUrl;                                          // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GVoiceAppKey;                                             // 0x0038(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GVoiceAppId;                                              // 0x0048(0x0010) (CPF_ZeroConstructor)
	int                                                GVoiceProximalMaxRange;                                   // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GVoiceDistNear;                                           // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GVoiceDistFar;                                            // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GVoiceVolPercentage;                                      // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslWeaponAnimInfo
// 0x0020
struct FTslWeaponAnimInfo
{
	unsigned char                                      bIsArmed : 1;                                             // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsGun : 1;                                               // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsHipped : 1;                                            // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeaponAnimInfo.WeaponClass
	unsigned char                                      UnknownData02[0x1];                                       // 0x0005(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeaponAnimInfo.LobbyAnimationClass
	unsigned char                                      UnknownData03[0x1];                                       // 0x0006(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeaponAnimInfo.AnimWeaponType
	unsigned char                                      UnknownData04[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	class UBlendSpace1D*                               GripBlendspace;                                           // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             LHGripBlendspace;                                         // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                GripTypeIndex;                                            // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PhysicalMaterialPenetrationConfig
// 0x0008
struct FPhysicalMaterialPenetrationConfig
{
	float                                              Resistanse;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deflection;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponPenetrationConfig
// 0x0050
struct FWeaponPenetrationConfig
{
	TMap<TEnumAsByte<EPhysicalSurface>, float>         PowerMultipliers;                                         // 0x0000(0x0050) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WheelTypeInfo
// 0x0028
struct FWheelTypeInfo
{
	unsigned char                                      AtlasIndex;                                               // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UClass*>                              WheelTypes;                                               // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class UClass*>                              ExemptedWheelTypes;                                       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.AnimSpeedInfo
// 0x0020
struct FAnimSpeedInfo
{
	float                                              F;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              L;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              R;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FL;                                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FR;                                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BL;                                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BR;                                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AnimInfo
// 0x0068
struct FAnimInfo
{
	class UBlendSpace*                                 BlendSpaceRef;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceFPPRef;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceRelaxedRef;                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceRelaxedFPPRef;                                  // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimSpeedInfo                              AnimSpeed_Walk;                                           // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimSpeedInfo                              AnimSpeed_Run;                                            // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimSpeed_Sprint;                                         // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RaycastConfigExtraOptions
// 0x0010
struct FRaycastConfigExtraOptions
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      PlayDefaultEventOnMiss : 1;                               // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTraceComplex : 1;                                        // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RaycastConfig
// 0x0038
struct FRaycastConfig
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.RaycastConfig.Direction
	unsigned char                                      bUseCustomDirection : 1;                                  // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     CustomDirVector;                                          // 0x0004(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FName                                       BoneToCastFrom;                                           // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CastDistance;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterialAudioEventData*             PhysMatData;                                              // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRaycastConfigExtraOptions                  ExtraOptions;                                             // 0x0028(0x0010) (CPF_Edit)
};

// ScriptStruct TslGame.BinaryData
// 0x0010
struct FBinaryData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ItemProjectileData
// 0x0040
struct FItemProjectileData
{
	TAssetPtr<class UStaticMesh>                       Mesh;                                                     // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              MeshScale;                                                // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Friction;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Bounciness;                                               // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinImpactVelocityForSound;                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenImpactSound;                                   // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyItemDesc
// 0x0060
struct FLobbyItemDesc
{
	unsigned char                                      bCashSellable : 1;                                        // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bPointSellable : 1;                                       // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bMarketable : 1;                                          // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bPointRefundable : 1;                                     // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     XboxConsumableId;                                         // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemDesc.Tier
	unsigned char                                      UnknownData02[0x1];                                       // 0x0019(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemDesc.Category
	unsigned char                                      UnknownData03[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bTradeUpResult : 1;                                       // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTradeUpMaterial : 1;                                     // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData05[0x10];                                      // 0x003A(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.LobbyItemDesc.Platforms
	float                                              CashSellingPrice;                                         // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0054(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemDesc.PointSellingType
	unsigned char                                      UnknownData07[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                PointSellingPrice;                                        // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PointRefundingPrice;                                      // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReticleTextureData
// 0x0040
struct FReticleTextureData
{
	float                                              ReticleAngularSize;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   ReticleCenter;                                            // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture2D*                                  ReticleTexture;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseHaloTexture : 1;                                      // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              HaloTextureScale;                                         // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     ReticleColor;                                             // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReticleScale;                                             // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrightSceneLuminanceMultiplier;                           // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrightSceneOpacityMultiplier;                             // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrightSceneOpacityMultiplierLowResolution;                // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BrightnessConfig
// 0x0020
struct FBrightnessConfig
{
	class UCurveVector*                                ReticleBrightnessSettingsCurve;                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReticleBrightnessParamX;                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReticleBrightnessParamY;                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReticleBrightnessParamZ;                                  // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ScopeGlintConfig
// 0x003C
struct FScopeGlintConfig
{
	unsigned char                                      GlintEnabled : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   GlintStartFade;                                           // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     ScopeEndPositionLS;                                       // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeRadiusLS;                                            // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GlintRadiusScreen;                                        // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeRadiusScreen;                                        // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                GlintColor;                                               // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   GlintVisibilityArcLength;                                 // 0x0034(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentData
// 0x02C8
struct FWeaponAttachmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentData.AttachmentSlotID
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AttachmentTag;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MouseSensitiveName;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MagnificationFOVMaxIncrement;                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MagnificationFOVSteps;                                    // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MagnificationFOV;                                         // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FBrightnessConfig                           ReticleBrightnessConfig;                                  // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<float>                                      ZeroingDistances;                                         // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, class UMaterialInstance*>      ReticleMaterialOverrides;                                 // 0x0060(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, class UTexture2D*>             ReticleTextureOverrides;                                  // 0x00B0(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, class UReticleSettings*>       ReticleSettingsOverrides;                                 // 0x0100(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UReticlePostprocessData*                     ScopePostprocessData;                                     // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecreaseRecoilPatternScale;                               // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadAnimationPlayRate;                                  // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleFiringBulletsSpread;                              // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleFiringSpreadBase;                                 // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleAmmoSpeed;                                        // 0x016C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilMultiplierHorizontal;                               // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilMultiplierVertical;                                 // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilRecoveryMultiplier;                                 // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayMultiplier;                                           // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimationKickMultiplier;                                  // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMultiplier;                                      // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     FPPSocketOffset;                                          // 0x018C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                GripType_MN;                                              // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BarrelLengthAdditive;                                     // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MuzzleFx;                                                 // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                        // 0x01A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     IKHandOffset;                                             // 0x01B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    IKHandRotation;                                           // 0x01BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x01C8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentData.WeaponGripLeft
	unsigned char                                      bIsSuppressor : 1;                                        // 0x01C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
	class UAkAudioEvent*                               MuzzleSound;                                              // 0x01D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadTactical;                                  // 0x01D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadTactical;                                     // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadCharge;                                    // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadCharge;                                       // 0x01F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseCustomADSAlpha : 1;                                   // 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	class UCurveVector*                                ADSAlphaVectorCurve;                                      // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUsePelletGridOverride : 1;                               // 0x0208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	TMap<int, struct FVector2D>                        PelletGridOverride;                                       // 0x0210(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              StabilitySpeedScalar;                                     // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StabilityMinForceAdditive;                                // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilEarlyExitScale;                                     // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CantedWeaponRotation;                                     // 0x026C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseReticleTypeOverride : 1;                              // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDefaultReticleCaching : 1;                            // 0x0271(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	TArray<struct FReticleTextureData>                 ReticleTextureDataArray;                                  // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScopeGlintConfig                           ScopeGlintConfig;                                         // 0x0288(0x003C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponAttachmentWeaponTagData
// 0x0300
struct FWeaponAttachmentWeaponTagData
{
	struct FName                                       WeaponTag;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FWeaponAttachmentData                       AttachmentData;                                           // 0x0028(0x02C8) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       AttachmentMeshName;                                       // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AttachmentTemplate;                                       // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.OutgameUserData
// 0x0020
struct FOutgameUserData
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TracerModeType
// 0x0008
struct FTracerModeType
{
	int                                                Mode;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Type;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponGunConfigReplacement
// 0x0118
struct FWeaponGunConfigReplacement
{
	class UClass*                                      AmmoItemClass;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             TracerClass;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenShots;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseTimeBetweenBursts : 1;                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              TimeBetweenBursts;                                        // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NoAnimReloadDuration;                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0024(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.WeaponGunConfigReplacement.FiringModes
	int                                                BurstShots;                                               // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BurstDelay;                                               // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BulletPerFiring;                                          // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FiringBulletsSpread;                                      // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsArrowProjectile : 1;                                   // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRotationFromBarrelWhenScoped : 1;                        // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x004A(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponGunConfigReplacement.ReloadMethod
	unsigned char                                      UnknownData04[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	float                                              ReloadDurationByOneInitial;                               // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationByOneLoop;                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierAim;                                      // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierScope;                                    // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponLength;                                             // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShoulderLength;                                           // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponToShoulderOffset;                                   // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponSuppressorLength;                                   // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TraceRadius;                                              // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TraceAdditiveZ;                                           // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DebugWeaponCollision : 1;                                 // 0x0074(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FVector                                     HandWeaponOffset;                                         // 0x0078(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     HandWeaponOffsetFPP;                                      // 0x0084(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualCycleAfterShot : 1;                                // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualCycleInitialStateReady : 1;                        // 0x0091(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              LongTailDelay;                                            // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseConstScope : 1;                                       // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseGridPelletSpread : 1;                                 // 0x0099(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	TMap<int, struct FVector2D>                        PelletGrid;                                               // 0x00A0(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              GridPelletSpreadHalfAngle;                                // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StabilitySpeedModifier;                                   // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StabilityForceModifier;                                   // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseReloadScalarOverride : 1;                             // 0x00FC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	float                                              ReloadSpeedScalar;                                        // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ADSTimeMultiplier;                                        // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseInertiaPitchAdditive : 1;                             // 0x0108(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              InertiaPitchAdditiveInterpSpeed;                          // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseTracerParticle : 1;                                   // 0x0110(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponDeviationConfig
// 0x0044
struct FWeaponDeviationConfig
{
	float                                              DeviationBase;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationBaseAim;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationBaseADS;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MOA;                                                      // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGain;                                      // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGainAim;                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGainADS;                                   // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMax;                                             // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMinMove;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMaxMove;                                         // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMultiplier;                                  // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMinReferenceVelocity;                        // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMaxReferenceVelocity;                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceStand;                                     // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceCrouch;                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceProne;                                     // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceJump;                                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAnimConfig
// 0x0120
struct FWeaponAnimConfig
{
	class UAnimMontage*                                Fire;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLoopedFire : 1;                                          // 0x0008(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UAnimMontage*                                Reload;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace1D*                               CharacterGripBlendspace;                                  // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             CharacterLHGripBlendspace;                                // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFire;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFireCycle;                                       // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFireSelector;                                    // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadTactical;                                  // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadCharge;                                    // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStart;                                // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStop;                                 // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneSingle;                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadTactical;                                     // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadCharge;                                       // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0078(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAnimConfig.LobbyAnimClassOverride
	unsigned char                                      bUseLobbyAnimClassOverride : 1;                           // 0x0079(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              ReloadDurationTactical;                                   // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationCharge;                                     // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationStart;                                      // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationLoop;                                       // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationMagOut;                                     // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseBoltAction : 1;                                       // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              FireCycleDelay;                                           // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FireCycleDuration;                                        // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CycleAfterReloadDelay;                                    // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCycleAfterLastShot : 1;                                  // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCycleDuringReload : 1;                                   // 0x00A1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	class UClass*                                      ShotCameraShake;                                          // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShakeIronsight;                                 // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShakeHolo;                                      // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShakeADS;                                       // 0x00C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCameraAnim*                                 CycleCameraAnim;                                          // 0x00C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilKickADS;                                            // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilKick_MovementSpeedMax;                              // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilKick_MovementMaxMultiplier;                         // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     RecoilADSSocketOffsetScale;                               // 0x00DC(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     MagDropLinearVelocity;                                    // 0x00E8(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     MagDropAngularVelocity;                                   // 0x00F4(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InertiaInterpMultiplier;                                  // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InertiaClampMultiplier;                                   // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseBurstRecoilMap : 1;                                   // 0x0108(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	struct FVector2D                                   BurstRecoilInMap;                                         // 0x010C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   BurstRecoilOutMap;                                        // 0x0114(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponArmInfo
// 0x0004
struct FWeaponArmInfo
{
	unsigned char                                      ServerUpdateSeqNum;                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             RightWeaponIndex;                                         // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             LeftWeaponIndex;                                          // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponArmInfo.State
};

// ScriptStruct TslGame.EmoteTraceCheck
// 0x001C
struct FEmoteTraceCheck
{
	struct FVector                                     InitialActorOffset;                                       // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TraceVector;                                              // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StanceTransition
// 0x0010
struct FStanceTransition
{
	class UAnimMontage*                                TransitionAnim;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CanPlayInMoving : 1;                                      // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StanceTransitionData
// 0x0060
struct FStanceTransitionData
{
	struct FStanceTransition                           StandToCrouch;                                            // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           CrouchToStand;                                            // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           StandToProne;                                             // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           ProneToStand;                                             // 0x0030(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           CrouchToProne;                                            // 0x0040(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           ProneToCrouch;                                            // 0x0050(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VaultingTask
// 0x0044
struct FVaultingTask
{
	struct FVector                                     V_Start;                                                  // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     V_Apex;                                                   // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     V_ApexAdditive;                                           // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     V_End;                                                    // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VaultingTask.InVaultType
	unsigned char                                      bEndToFall : 1;                                           // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              Direction;                                                // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlayerSpeed;                                              // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DistanceFromObject;                                       // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.OverlappingObjectInfo
// 0x0010
struct FOverlappingObjectInfo
{
	class UObject*                                     Target;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.ReplicatedSkinItem
// 0x0010
struct FReplicatedSkinItem
{
	class UClass*                                      SkinItemClass;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                SkinOwnerPlayerId;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.EquipPosition
// 0x0008
struct FEquipPosition
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipPosition.SlotID
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ConstraintSlotConfig
// 0x0010
struct FConstraintSlotConfig
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ConstraintSlotConfig.ConstraintSlotType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FEquipPosition                              EquipPosition;                                            // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x1];                                       // 0x000C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ConstraintSlotConfig.OverrideSoundType
};

// ScriptStruct TslGame.ParachuteInputData
// 0x0020
struct FParachuteInputData
{
	float                                              InForward;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InRight;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentForward;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentRight;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFast : 1;                                              // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              CurrentPitch;                                             // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentYaw;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentRoll;                                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SimulationStep
// 0x0048
struct FSimulationStep
{
	uint16_t                                           SimStep;                                                  // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x001C(0x000C) (CPF_IsPlainOldData)
	struct FParachuteInputData                         InputData;                                                // 0x0028(0x0020)
};

// ScriptStruct TslGame.SkydiveRotationSettings
// 0x0018
struct FSkydiveRotationSettings
{
	float                                              RotationTargetAlphaAmplitude;                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationTargetAlphaSpeed;                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationTargetAlphaPower;                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseExponentialInterpolation : 1;                         // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseExponentialRotationClamp : 1;                         // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              RotationSpeedExponential;                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationSpeedConstant;                                    // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveDragSettings
// 0x0014
struct FSkydiveDragSettings
{
	float                                              DragScale;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedMinMap;                                              // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedMaxMap;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForwardInputMinScalar;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForwardInputMaxScalar;                                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveLateralSettings
// 0x0020
struct FSkydiveLateralSettings
{
	float                                              LateralAccelScale;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   AccelInputInMap;                                          // 0x0004(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   AccelInputOutMap;                                         // 0x000C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLatVelocity;                                           // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   SpeedScalarOutMap;                                        // 0x0018(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.FreefallVelocitySettings
// 0x000C
struct FFreefallVelocitySettings
{
	float                                              SpeedMin;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedMax;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedDefault;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveVelocitySettings
// 0x0030
struct FSkydiveVelocitySettings
{
	struct FVector2D                                   MinMaxDiveAngle;                                          // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   SpeedScaleOutMap;                                         // 0x0008(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   InputMapScalar;                                           // 0x0010(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityTransferScalar;                                   // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   PitchScalarInMap;                                         // 0x001C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   PitchScalarOutMap;                                        // 0x0024(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinDiveAngleLateralInputScalar;                           // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveInputSettings
// 0x0028
struct FSkydiveInputSettings
{
	float                                              InputAccelSpeed;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InputBrakeSpeed;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InputLateralSpeed;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InputPitchSpeed;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InputVelocitySpeed;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      InputAccelInterpLinear : 1;                               // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      InputBrakeInterpLinear : 1;                               // 0x0015(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      InputLateralInterpLinear : 1;                             // 0x0016(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      InputPitchInterpLinear : 1;                               // 0x0017(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParaSlowInputForward;                                     // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParaSlowInputRightScalar;                                 // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParaSlowSideInputInterp;                                  // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParaFastSideInputInterp;                                  // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ParachuteGeneralSettings
// 0x00D0
struct FParachuteGeneralSettings
{
	float                                              TraceSphereRadius;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TraceSphereOffset;                                        // 0x0004(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GroundTraceStart;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GroundTraceEnd;                                           // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMin;                                    // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMax;                                    // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LiftScalarInterpSpeed;                                    // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceInterpSpeed;                                         // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LerpDTScalar;                                             // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParachuteForwardVelocityTransferTimeout;                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParachuteForwardVelocityTransferTimeoutDTScalar;          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParachuteInputBlockTime;                                  // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CapsuleOffset;                                            // 0x0038(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class USkeletalMesh*                               ParachuteSK;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ParachuteAnimInstance;                                    // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    ParachuteRelativeRotation;                                // 0x0058(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     SkydiveStateManagingWidgetName;                           // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UPhysicsAsset*                               PhysicsAssetRef;                                          // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.ParachuteGeneralSettings.CameraStateBlendMap
};

// ScriptStruct TslGame.ParachuteControlSettings
// 0x0030
struct FParachuteControlSettings
{
	float                                              YawSpeed;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxForwardPitch;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxBackwardPitch;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollSpeedMin;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollSpeedMax;                                             // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollAngleMin;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollAngleMax;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollInterpSpeed;                                          // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollTendencyRiseSpeed;                                    // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RollTendencyFallSpeed;                                    // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PitchTendencyRiseSpeed;                                   // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PitchTendencyFallSpeed;                                   // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ParachuteVelocitySettings
// 0x007C
struct FParachuteVelocitySettings
{
	float                                              ForceForwardScale;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceForwardYawScalar;                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceForwardStaticSpeed;                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMin;                                     // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMax;                                     // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMin;                                     // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMax;                                     // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DampingPitchMin;                                          // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DampingPitchMax;                                          // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DampingValueMin;                                          // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DampingValueMax;                                          // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DampingYawScalar;                                         // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   DampingDiveMapIn;                                         // 0x0030(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   DampingDiveMapOut;                                        // 0x0038(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceDownAngleMin;                                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceDownAngleMax;                                        // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMin;                                    // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMax;                                    // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMin;                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMax;                                  // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceGravityMax;                                          // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMin;                                     // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMax;                                     // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceGravityValueMin;                                     // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceGravityValueMax;                                     // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   BrakeDampingInMap;                                        // 0x006C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   BrakeDampingOutMap;                                       // 0x0074(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ParachuteDeploySettings
// 0x0010
struct FParachuteDeploySettings
{
	unsigned char                                      bUseAutoDeploy : 1;                                       // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AutoDeployAltitude;                                       // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAbsoluteAutoDeployAltitude : 1;                       // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              StartDeployAltitude;                                      // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ParachuteCutoffSettings
// 0x0050
struct FParachuteCutoffSettings
{
	float                                              ManualCutoffAltitude;                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AutoCutoffDistance;                                       // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AutoCutoffSpeedDistanceScalar;                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseManualCutInputDampening : 1;                          // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              ManualCutInputScale;                                      // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAutoCutInputDampening : 1;                            // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              AutoCutInputScale;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CutoffSpeedScalar;                                        // 0x001C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ManualCutoffCheckTime;                                    // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AutoCutoffVelocityDistance;                               // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CutoffReadyDuration;                                      // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAutoCutoffVelocityTransfer : 1;                       // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FVector                                     AutoCutoffVelocityScalar;                                 // 0x0038(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseCutoffBeforeImpact : 1;                               // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              AutoCutoffAnimTime;                                       // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshRotationResetStep;                                    // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ExtCollisionShape
// 0x0014
struct FExtCollisionShape
{
	unsigned char                                      bIsSphere : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0008(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ParachuteOverlapSettings
// 0x0020
struct FParachuteOverlapSettings
{
	struct FVector                                     LocalOffset;                                              // 0x0000(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FExtCollisionShape                          CollisionShape;                                           // 0x000C(0x0014) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.ParachuteLandingData
// 0x0030
struct FParachuteLandingData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ParachuteLandingData.LandingSurfaceType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LandingSpeedLimit;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                LocalLandingMontage;                                      // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RemoteLandingMontage;                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseRotationLock : 1;                                     // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              RotationLockTime;                                         // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                ParachuteCollapseMontage;                                 // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       LandingName;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ParachuteLandSettings
// 0x0018
struct FParachuteLandSettings
{
	TArray<struct FParachuteLandingData>               LandingTypeArray;                                         // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UAnimMontage*                                ManualDetachMontage;                                      // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveNetInterpSettings
// 0x0028
struct FSkydiveNetInterpSettings
{
	float                                              FreefallLocationInterpSpeedExp;                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParachuteLocationInterpSpeedExp;                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParachuteRotationInterpSpeedExp;                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   HeightInterpSpeedInMap;                                   // 0x000C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   HeightInterpSpeedOutMap;                                  // 0x0014(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LowAltitudeRepRate;                                       // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RemoteFreefallMeshInterpSpeed;                            // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxAllowedLandingPositionDelta;                           // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveEffects
// 0x0058
struct FSkydiveEffects
{
	class UParticleSystem*                             FreefallEffect;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ParachuteEffect;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   EffectSpeedMapIn;                                         // 0x0010(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   EffectSpeedMapOut;                                        // 0x0018(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   EffectAltitudeMapIn;                                      // 0x0020(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   EffectAltitudeMapOut;                                     // 0x0028(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   EffectDeployMapIn;                                        // 0x0030(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   EffectDeployMapOut;                                       // 0x0038(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FreefallCameraShakeClass;                                 // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ParachuteCameraShakeClass;                                // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                SkydiveCameraShakeCurve;                                  // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveAudioSettings
// 0x0078
struct FSkydiveAudioSettings
{
	float                                              AudioVol;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               FreefallLoop;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ParachuteLoop;                                            // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SkydiveStop;                                              // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       VelocityRTPCName;                                         // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       VelocityDeltaRTPCName;                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AccelRTPCName;                                            // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       BrakeRTPCName;                                            // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       PitchRTPCName;                                            // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TurnRTPCName;                                             // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AltitudeRTPCName;                                         // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityInterpSpeed;                                      // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityDeltaInterpSpeed;                                 // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AccelInterpSpeed;                                         // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrakeInterpSpeed;                                         // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PitchInterpSpeed;                                         // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnInterpSpeed;                                          // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AltitudeInterpSpeed;                                      // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkydiveDamageSettings
// 0x0048
struct FSkydiveDamageSettings
{
	unsigned char                                      bApplyLandingDamage : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   NormalInMap;                                              // 0x0004(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   NormalOutMap;                                             // 0x000C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   VelocityDotScaleInMap;                                    // 0x0014(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   VelocityDotScaleOutMap;                                   // 0x001C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   VelocityDamageInMap;                                      // 0x0024(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   VelocityDamageOutMap;                                     // 0x002C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallDamageBlockTime;                                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LoadingScreenTypePercent
// 0x0008
struct FLoadingScreenTypePercent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LoadingScreenTypePercent.LoadingScreenType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Percent;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LoadingScreenTypePercentConfig
// 0x0040
struct FLoadingScreenTypePercentConfig
{
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForElementaryRank;                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForIntermediateRank;              // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForHighRank;                      // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FLoadingScreenTypePercent>           LoadingScreenTypePercentForExpertRank;                    // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.ElementaryRankGuidePercentConfig
// 0x0010 (0x0018 - 0x0008)
struct FElementaryRankGuidePercentConfig : public FTableRowBase
{
	float                                              ShowElementaryRankPercentForElementaryRank;               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShowElementaryRankPercentForIntermediateRank;             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShowElementaryRankPercentForHighRank;                     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShowElementaryRankPercentForExpertRank;                   // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BoneBinding
// 0x0010
struct FBoneBinding
{
	struct FName                                       ImpactBone;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReactionBone;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ChineseLicensingDefaultCustomizeData
// 0x0018
struct FChineseLicensingDefaultCustomizeData
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UClass*                                      EquipableItem;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.InteractionCollisionData
// 0x0014
struct FInteractionCollisionData
{
	float                                              CapsuleHalfHeight;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CapsuleOffset;                                            // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LevelLoadingBoostParameters
// 0x0010
struct FLevelLoadingBoostParameters
{
	float                                              AsyncLoadingTimeLimit;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PriorityAsyncLoadingExtraTime;                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LevelStreamingActorsUpdateTimeLimit;                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LevelStreamingComponentsRegistrationGranularity;          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NearClippingValue
// 0x0008
struct FNearClippingValue
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.NearClippingValue.Level
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableCategoryData
// 0x0030
struct FTslGame_FCustomizableCategoryData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       Category;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FName>                               NotDuplicateCategoryNames;                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.CustomizableActionName
// 0x0028
struct FCustomizableActionName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.CustomizableAxisName
// 0x0030
struct FTslGame_FCustomizableAxisName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AxisName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              Scale;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableMouseSensitiveName
// 0x0028
struct FCustomizableMouseSensitiveName
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       MouseSensitiveName;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NamedFovRecord
// 0x0010
struct FNamedFovRecord
{
	struct FName                                       SensitiveName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FOV;                                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableGamePadSensitiveName
// 0x0030
struct FCustomizableGamePadSensitiveName
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       GamePadSensitiveName;                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GamePadSensitivity;                                       // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 GamePadCurve;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SurportQualityLevel
// 0x0020
struct FSurportQualityLevel
{
	int                                                QualityLevel;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.AimAcceleration
// 0x0008
struct FAimAcceleration
{
	class UCurveFloat*                                 RampUpTimeForTargetingCurve;                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ColorBlindType
// 0x0020
struct FColorBlindType
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ColorBlindType.Key
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.PresetColor
// 0x0038
struct FPresetColor
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     ColorString;                                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReticleColors
// 0x0018
struct FReticleColors
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ReticleColors.ReticleType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FColorBlindColorSet                         ColorSet;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.KeyInputModeName
// 0x0020
struct FKeyInputModeName
{
	struct FName                                       ModeName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.UiType
// 0x0028
struct FUiType
{
	struct FText                                       DisplayUiName;                                            // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     UiKey;                                                    // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TeamColorAndIcon
// 0x0040
struct FTeamColorAndIcon
{
	struct FColorBlindColorSet                         TeamMemberColor;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UTexture*                                    MarkerColorTextIcon;                                      // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    MarkerIcon;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    PlayerIcon;                                               // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    CompassIcon;                                              // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    IndicatorIcon;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    MapDeathIcon;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.OverrideScalabilityValue
// 0x0028
struct FOverrideScalabilityValue
{
	struct FString                                     ConsoleName;                                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.OverrideScalabilityValue.ValueType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FString>                             Values;                                                   // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.OverrideScalability
// 0x0018
struct FOverrideScalability
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.OverrideScalability.QualityType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FOverrideScalabilityValue>           OverrideScalabilityValues;                                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReportCauseData
// 0x0038
struct FReportCauseData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ReportCauseData.ReportCauseType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0019(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.ReportCauseData.DetailCauseTypeList
	unsigned char                                      UnknownData03[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ReportCauseData.ExposeType
};

// ScriptStruct TslGame.SubjectToReport
// 0x0020
struct FSubjectToReport
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.SubjectToReport.SubjectToReportType
};

// ScriptStruct TslGame.ReportDetailCauseTypeDescription
// 0x0020
struct FReportDetailCauseTypeDescription
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ReportDetailCauseTypeDescription.ReportDetailCauseType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslGamepadActionKeyData
// 0x0080
struct FTslGamepadActionKeyData
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     Comment;                                                  // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FText                                       Desc;                                                     // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FString                                     Category;                                                 // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FTslGamepadInputKey                         GamepadActionKey;                                         // 0x0058(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct TslGame.TslGamepadAxisKeyData
// 0x0040
struct FTslGamepadAxisKeyData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              Scale;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FKey                                        GamepadAxisKey;                                           // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct TslGame.TslGamepadKeyPreset
// 0x0028
struct FTslGamepadKeyPreset
{
	struct FName                                       PresetTypeName;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslGamepadActionKeyData>            ActionKeyDatas;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FTslGamepadAxisKeyData>              AxisKeyDatas;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.AimAssistData
// 0x0030
struct FAimAssistData
{
	float                                              MinDistance;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TrackingModifier;                                         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AdhesionSpeed;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeadZoneValue;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseTrackingModifierCurve : 1;                            // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UCurveFloat*                                 TrackingModifierCurve;                                    // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAdhesionSpeedCurve : 1;                               // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 AdhesionSpeedCurve;                                       // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SavedObPosMapConfig
// 0x0020
struct FSavedObPosMapConfig
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FSavedObPos>                         SavedObPos;                                               // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.AnimatableCustomizableObjectData
// 0x0018
struct FAnimatableCustomizableObjectData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.AnimatableCustomizableObjectData.ParamType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               AnimatableCustomizableObjectNames;                        // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.GamepadReportStepperDesc
// 0x0038
struct FGamepadReportStepperDesc
{
	struct FName                                       OptionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit)
	struct FText                                       DescText;                                                 // 0x0020(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.TeamColorAndName
// 0x0028
struct FTeamColorAndName
{
	struct FText                                       ColorNameText;                                            // 0x0000(0x0018) (CPF_Edit)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TextureAndRatio
// 0x0010
struct FTextureAndRatio
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Ratio;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslKillCauserData
// 0x0030
struct FTslKillCauserData
{
	class ATslPlayerState*                             KillCauserPlayerState;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UClass*                                      DamageCauserClass;                                        // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FReplicatedSkinParam                        ReplicatedSkinParam;                                      // 0x0010(0x0020) (CPF_Transient)
};

// ScriptStruct TslGame.BuffWithBoostGauge
// 0x0018
struct FBuffWithBoostGauge
{
	float                                              BoostGauge;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      Buff;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       OverlapId;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TakeHitInfo
// 0x0058
struct FTakeHitInfo
{
	float                                              ActualDamage;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslPlayerState>              PlayerInstigator;                                         // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize                         DamageOrigin;                                             // 0x0018(0x000C)
	struct FVector_NetQuantize                         RelHitLocation;                                           // 0x0024(0x000C)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageMaxRadius;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShotDirPitch;                                             // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShotDirYaw;                                               // 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPointDamage : 1;                                         // 0x003E(0x0001)
	unsigned char                                      bRadialDamage : 1;                                        // 0x003E(0x0001)
	unsigned char                                      bKilled : 1;                                              // 0x003E(0x0001)
	unsigned char                                      EnsureReplicationByte;                                    // 0x003F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AttackerWeaponName;                                       // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AttackerLocation;                                         // 0x0048(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CharacterAnim
// 0x0010
struct FCharacterAnim
{
	class UAnimMontage*                                PickUpAnim;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                DeathAnim;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomCarepackageCircleData
// 0x0008
struct FCustomCarepackageCircleData
{
	int                                                AddWhiteZoneCarepackages;                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AddOutsideZoneCarepackages;                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomCarepackageComing
// 0x0020
struct FCustomCarepackageComing
{
	struct FString                                     CallerAccountID;                                          // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst)
	struct FVector2D                                   DropPosition;                                             // 0x0010(0x0008) (CPF_IsPlainOldData)
	unsigned char                                      bCustomPackage : 1;                                       // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                PackID;                                                   // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackagedItemInfo
// 0x0010
struct FPackagedItemInfo
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.GeneralItemSpawnProb
// 0x0018
struct FGeneralItemSpawnProb
{
	float                                              ProbabilityPercent;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RegionalWeatherSetting
// 0x0024
struct FRegionalWeatherSetting
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FLinearColor                                FogColor;                                                 // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              FogStartDistance;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              VolFogExtinctionScale;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              WeatherParticleSpawnScale;                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              WindScale;                                                // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslWeatherVolume
// 0x0030
struct FTslWeatherVolume
{
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FRegionalWeatherSetting                     RegionalSetting;                                          // 0x0008(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate)
};

// ScriptStruct TslGame.LobbyFaceElementDetail
// 0x0048
struct FLobbyFaceElementDetail
{
	int                                                ColorIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_IsPlainOldData)
	TAssetPtr<class UCustomizableObject>               BodyAsset;                                                // 0x0008(0x0020) (CPF_Edit)
	TAssetPtr<class UCustomizableObject>               FaceAsset;                                                // 0x0028(0x0020) (CPF_Edit)
};

// ScriptStruct TslGame.LobbyFaceElement
// 0x0028
struct FLobbyFaceElement
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyFaceElement.Gender
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     FaceType;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyFaceElementDetail>             ColorData;                                                // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.LobbyHairElementDetail
// 0x0028
struct FLobbyHairElementDetail
{
	int                                                ColorIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_IsPlainOldData)
	TAssetPtr<class UCustomizableObject>               HairAsset;                                                // 0x0008(0x0020) (CPF_Edit)
};

// ScriptStruct TslGame.LobbyHairElement
// 0x0028
struct FLobbyHairElement
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyHairElement.Gender
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     HairType;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyHairElementDetail>             ColorData;                                                // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.PostProcessMaterial
// 0x0010
struct FPostProcessMaterial
{
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PostProcessEffectDynamicMaterialState
// 0x0010
struct FPostProcessEffectDynamicMaterialState
{
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.TslStartParameter
// 0x0098
struct FTslStartParameter
{
	unsigned char                                      bIsCustomGame : 1;                                        // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     ModeName;                                                 // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                TeamCount;                                                // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinPlayerCount;                                           // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               StringParameter;                                          // 0x0048(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayKillEventItem
// 0x0098
struct FReplayKillEventItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Group;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Time1;                                                    // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Time2;                                                    // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     KillerName;                                               // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     KillerNetId;                                              // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     DamageCauseClassName;                                     // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                DamageTypeCategory;                                       // 0x0088(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageReason;                                             // 0x008C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGroggy : 1;                                              // 0x0090(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplayGroggyEventItem
// 0x0098
struct FReplayGroggyEventItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Group;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Time1;                                                    // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Time2;                                                    // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InstigatorName;                                           // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     InstigatorNetId;                                          // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     DamageCauseClassName;                                     // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                DamageTypeCategory;                                       // 0x0088(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageReason;                                             // 0x008C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGroggy : 1;                                              // 0x0090(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplayEtceteraEventItem
// 0x0068
struct FReplayEtceteraEventItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Group;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Time1;                                                    // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Time2;                                                    // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     EtceteraEventCode;                                        // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     TargetNetId;                                              // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     TargetName;                                               // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslReplayOvercast
// 0x0038
struct FTslReplayOvercast
{
	float                                              DemoTime;                                                 // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Weather;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslReplayOvercast.Action
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              InitElapsedTime;                                          // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SaturateTime;                                             // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeMultiplier;                                           // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThunderAngle;                                             // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThunderDistance;                                          // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslReplayCustomFog
// 0x0010
struct FTslReplayCustomFog
{
	float                                              DemoTime;                                                 // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FogFallOff;                                               // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FogStartDistance;                                         // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FogDensity;                                               // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplayCameraEventItem
// 0x00E0
struct FReplayCameraEventItem
{
	int                                                DataSetNumber;                                            // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TimeMS;                                                   // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsSkip : 1;                                               // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Type;                                                     // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              FOV;                                                      // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionX;                                                // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionY;                                                // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionZ;                                                // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationX;                                                // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationY;                                                // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationZ;                                                // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Angle;                                                    // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Target;                                                   // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     InterpolationType;                                        // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     CameraDirection;                                          // 0x0060(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ReplaySpeed;                                              // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      IsAutoExposureEnable : 1;                                 // 0x0080(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     DofMethod;                                                // 0x0088(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              DofFocalRegion;                                           // 0x0098(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsDofAutoFocus : 1;                                       // 0x009C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              DofFocalDistance;                                         // 0x00A0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DofNearTransitionRegion;                                  // 0x00A4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DofFarTransitionRegion;                                   // 0x00A8(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DofBokehScale;                                            // 0x00AC(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DofBokehMaxSize;                                          // 0x00B0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DofGaussianNearBlurSize;                                  // 0x00B4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DofGaussianFarBlurSize;                                   // 0x00B8(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FString                                     ColorGradingLUT;                                          // 0x00C0(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              ColorGradingLUTIntensity;                                 // 0x00D0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x00D4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x00D8(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplayRecordTargetEventItem
// 0x0058
struct FReplayRecordTargetEventItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Group;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                Time1;                                                    // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Time2;                                                    // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RecordTargetName;                                         // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RecordTargetNetId;                                        // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslKillcamMetadata
// 0x0098
struct FTslKillcamMetadata
{
	float                                              LastUpdateTime;                                           // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     KillerUniqueId;                                           // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     KillerName;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     PlayerUniqueId;                                           // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
};

// ScriptStruct TslGame.ReplayItem
// 0x0100
struct FReplayItem
{
	struct FString                                     FriendlyName;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bIsLive : 1;                                              // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FDateTime                                   Date;                                                     // 0x0028(0x0008) (CPF_BlueprintVisible)
	int                                                SizeInBytes;                                              // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LengthInMS;                                               // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumViewers;                                               // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIncomplete : 1;                                          // 0x003C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVersionCompatible : 1;                                 // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCorrupted : 1;                                         // 0x003E(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsServerRecording : 1;                                   // 0x003F(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldKeep : 1;                                          // 0x0040(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bArchived : 1;                                            // 0x0041(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FString                                     GameVersion;                                              // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                MK3DReplayVersion;                                        // 0x0058(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Mode;                                                     // 0x0060(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     RecordUserId;                                             // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     RecordUserNickName;                                       // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0090(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bAllDeadOrWin : 1;                                        // 0x00A0(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                ArchiveSizeInBytes;                                       // 0x00A4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsClip : 1;                                              // 0x00A8(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	int                                                ClipTime;                                                 // 0x00AC(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ClipStartTime;                                            // 0x00B0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ClipEndTime;                                              // 0x00B4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ClipTargetUserId;                                         // 0x00B8(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ClipTargetUserNickName;                                   // 0x00C8(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ReportToken;                                              // 0x00D8(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     RecordAccountId;                                          // 0x00E8(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bHaveCameraEvent : 1;                                     // 0x00F8(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerStateSummary
// 0x0040
struct FTslPlayerStateSummary
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                TeamNumber;                                               // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HeadShots;                                                // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumKills;                                                 // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalGivenDamages;                                        // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongestDistanceKill;                                      // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalMovedDistanceMeter;                                  // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslReplaySummary
// 0x0090
struct FTslReplaySummary
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bIsServerRecording : 1;                                   // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     RecordUserId;                                             // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RecordAccountId;                                          // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RecordUserNickName;                                       // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     WeatherName;                                              // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RegionName;                                               // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                NumPlayers;                                               // 0x0078(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumTeams;                                                 // 0x007C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslPlayerStateSummary>              PlayerStateSummaries;                                     // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TeamInfo
// 0x0028
struct FTeamInfo
{
	struct FString                                     TeamName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UTexture2D*                                  TeamIcon;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FLinearColor                                TeamColor;                                                // 0x0018(0x0010) (CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PlayerStatInfo
// 0x000C
struct FPlayerStatInfo
{
	float                                              AvgKill;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                AvgDamage;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                AvgAliveTime;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.QualityLevelInfo
// 0x0020
struct FQualityLevelInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.QualityLevelInfo.QualityType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.PresetItemSpawnTableData
// 0x0040
struct FPresetItemSpawnTableData
{
	TAssetPtr<class UDataTable>                        ItemSpawnDataTable;                                       // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class UDataTable>                        ItemSpawnTogetherDataTable;                               // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.ModePresetData
// 0x0230
struct FModePresetData
{
	struct FName                                       PresetName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            ModeControllerClass;                                      // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoClear)
	TArray<TAssetPtr<class UClass>>                    AdditionalModeControllerClasses;                          // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear)
	TAssetPtr<class UClass>                            InitialItemDonatorClass;                                  // 0x0038(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TAssetPtr<class UClass>                            ItemSpawnProcessorClass;                                  // 0x0058(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class UClass>                            ThingSpawnProcessorClass;                                 // 0x0078(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class UClass>                            DroppedPackageSpawnProcessorClass;                        // 0x0098(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	float                                              AircraftTotalFlyingTime;                                  // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideAircraftTotalFlyingTime : 1;                     // 0x00BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	TAssetPtr<class UDataTable>                        DropItemSpawnDataTable;                                   // 0x00C0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class UDataTable>                        DropItemSpawnTogetherDataTable;                           // 0x00E0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TMap<struct FString, struct FPresetItemSpawnTableData> ItemSpawnDataTables;                                      // 0x0100(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TAssetPtr<class UDataTable>                        VehicleSpawnDataTable;                                    // 0x0150(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class UDataTable>                        DroppedPackageSpawnDataTable;                             // 0x0170(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class UDataTable>                        DroppedPackageSpawnTogetherDataTable;                     // 0x0190(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class UDataTable>                        BluezoneDataTable;                                        // 0x01B0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TMap<struct FString, TAssetPtr<class URewardData>> RewardDataMap;                                            // 0x01D0(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TArray<TAssetPtr<class UWorld>>                    AdditionalSubLevels;                                      // 0x0220(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ModePresetsPerMap
// 0x0250
struct FModePresetsPerMap
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FModePresetData                             DefaultPresetData;                                        // 0x0010(0x0230) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FModePresetData>                     PresetDataList;                                           // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.GeneralItemSpawnCount
// 0x0008
struct FGeneralItemSpawnCount
{
	int                                                TeamPlayers;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SpawnCount;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HighlightRecordConfig
// 0x000C
struct FHighlightRecordConfig
{
	float                                              BeforeDurationSec;                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AfterDurationSec;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinkWaitDurationSec;                                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CastConfig
// 0x0048
struct FCastConfig
{
	struct FText                                       CastName;                                                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              CastTime;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CastConfig.CastPriority
	unsigned char                                      UnknownData01[0x1];                                       // 0x001D(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CastConfig.CastLevel
	unsigned char                                      bIgnoreCastDistanceLimitation : 1;                        // 0x001E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	float                                              CastMaxDistance;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CastMaxDistanceMultiplierOnServer;                        // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CasterAndCastObjectMaxDistance;                           // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CasterAndCastObjectMaxDistanceMultiplierOnServer;         // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanCastInsideMovingVehicle : 1;                          // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MaxLinAcceleration;                                       // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CastMaxSpeed;                                             // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CastWalkSpeedModifier;                                    // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bNeedUnarm : 1;                                           // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0041(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CastConfig.CastAnim
};

// ScriptStruct TslGame.WeaponAttachmentTagData
// 0x0018
struct FWeaponAttachmentTagData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentTagData.AttachmentSlotID
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               AttachableTags;                                           // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.LobbyItemBundleElement
// 0x0028
struct FLobbyItemBundleElement
{
	TAssetPtr<class UClass>                            ItemAsset;                                                // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	int                                                BundleId;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyItemBundle
// 0x0030
struct FLobbyItemBundle
{
	int                                                BundleId;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     BundleName;                                               // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemBundle.Type
	unsigned char                                      UnknownData02[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FLobbyItemBundleElement>             ItemList;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.NameWeight
// 0x0010
struct FNameWeight
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpotTypeProperty
// 0x0038
struct FItemSpotTypeProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ItemSpotTypeProperty.SpotType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SpotPercentMin;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpotPercentMax;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ItemsPerSpotMin;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ItemsPerSpotMax;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FNameWeight>                         WeightsPerValue;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FNameWeight>                         WeightsPerCategory;                                       // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.ItemSpotGroupTypeProperty
// 0x0168
struct FItemSpotGroupTypeProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ItemSpotGroupTypeProperty.SpotGroupType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SpotGroupPercent;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FItemSpotTypeProperty>               SpotTypeProperties;                                       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x150];                                     // 0x0018(0x0150) MISSED OFFSET
};

// ScriptStruct TslGame.MaterialMergerParameters
// 0x0018
struct FMaterialMergerParameters
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MaterialMergerParameters.Type
	unsigned char                                      bStoreToLUT : 1;                                          // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                LUTIndex;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MaterialMergerParameters.LUTChannel
};

// ScriptStruct TslGame.LobbyItem
// 0x0020
struct FLobbyItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     ItemId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UItem*                                       Item;                                                     // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyWeapon
// 0x0008 (0x0028 - 0x0020)
struct FLobbyWeapon : public FLobbyItem
{
	class ATslLobbyWeapon*                             TslWeapon;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyWeaponProcessor
// 0x0018
struct FLobbyWeaponProcessor
{
	int                                                CurrentWeaponIndex;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FLobbyWeapon>                        EquipedWeapons;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct TslGame.SkinMaterialData
// 0x0010
struct FSkinMaterialData
{
	struct FName                                       MaterialSlotName;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkinMessageFormat
// 0x0078
struct FSkinMessageFormat
{
	struct FText                                       ApplySkinSuccessedMsgFormat;                              // 0x0000(0x0018) (CPF_Edit)
	struct FText                                       ApplySkinFailedMsgFormat;                                 // 0x0018(0x0018) (CPF_Edit)
	struct FText                                       AlreadyApplySkinMsgFormat;                                // 0x0030(0x0018) (CPF_Edit)
	struct FText                                       ClearSkinSuccessedMsgFormat;                              // 0x0048(0x0018) (CPF_Edit)
	struct FText                                       AlreadyClearSkinMsgFormat;                                // 0x0060(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.SpawnKitItemInfo
// 0x0020
struct FSpawnKitItemInfo
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemCount;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AttachmentInfos;                                          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.SpawnKitInfo
// 0x0028
struct FSpawnKitInfo
{
	struct FText                                       InfoName;                                                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FSpawnKitItemInfo>                   ItemInfos;                                                // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.SpawnKitInfoListOfType
// 0x0010
struct FSpawnKitInfoListOfType
{
	TArray<struct FSpawnKitInfo>                       SpawnKitInfos;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.SpawnKitInstance
// 0x0010
struct FSpawnKitInstance
{
	TArray<class UItem*>                               Items;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.PlaceValue
// 0x0018
struct FPlaceValue
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              delayTime;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CheckTime;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.GeneralSpotGroupProperty
// 0x0020
struct FGeneralSpotGroupProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.GeneralSpotGroupProperty.GroupType
	unsigned char                                      bActiveByStartVolume : 1;                                 // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0002(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.GeneralSpotGroupProperty.SpawnType
	unsigned char                                      UnknownData02[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FFloatRange                                 TotalCountRange;                                          // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              TotalCountMultiplierWithPlayerCount;                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProbabilityPercent;                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProbabilityPercentMultiplierWithPlayerCount;              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackageSpawnProb
// 0x0018
struct FPackageSpawnProb
{
	float                                              ProbabilityPercent;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackageSpotGroupProperty
// 0x0018 (0x0038 - 0x0020)
struct FPackageSpotGroupProperty : public FGeneralSpotGroupProperty
{
	class UClass*                                      ItemPackageClass;                                         // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FPackageSpawnProb>                   PackageSpawnProbArray;                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VehicleSpotGroupProperty
// 0x0020 (0x0040 - 0x0020)
struct FVehicleSpotGroupProperty : public FGeneralSpotGroupProperty
{
	TArray<struct FNameWeight>                         WeightsPerCategory;                                       // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFloatRange                                 FuelPercentRange;                                         // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslAggroData
// 0x0020
struct FTslAggroData
{
	float                                              UpdateInterval;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VisibleAggro;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HearingAggro;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamagedAggro;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BlockedAggro;                                             // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxDistanceAggro;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DistanceAggroOffset;                                      // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinTargetTime;                                            // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslAggroScore
// 0x0018
struct FTslAggroScore
{
	int                                                Score;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsHearing : 1;                                           // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsDamaged : 1;                                           // 0x0006(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bBlocked : 1;                                             // 0x0007(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DistanceSq;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LastAggroUpdateTime;                                      // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AircraftParticle
// 0x0010
struct FAircraftParticle
{
	class UClass*                                      ParticleClass;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DropCarePackageTableData
// 0x0008
struct FDropCarePackageTableData
{
	int                                                DropCount;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropPercent;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponRecoilConfig
// 0x0080
struct FWeaponRecoilConfig
{
	float                                              VerticalRecoilMin;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoilRecoveryMin;                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoilVariation;                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryModifier;                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryClamp;                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryMax;                                      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeftMax;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RightMax;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HorizontalTendency;                                       // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                RecoilCurve;                                              // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BulletsPerSwitch;                                         // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimePerSwitch;                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSwitchOnTime : 1;                                        // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RecoilSpeed_Vertical;                                     // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilSpeed_Horizontal;                                   // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoverySpeed_Vertical;                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilValue_Climb;                                        // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilValue_Fall;                                         // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Stand;                                     // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Crouch;                                    // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Prone;                                     // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilHorizontalMinScalar;                                // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   RecoilStartTimeInMap;                                     // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   RecoilStartTimeOutMap;                                    // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   RecoilBlendInInMap;                                       // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   RecoilBlendInOutMap;                                      // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponTrajectoryConfig
// 0x0040
struct FWeaponTrajectoryConfig
{
	float                                              InitialSpeed;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HitDamage;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                BallisticCurve;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RangeModifier;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReferenceDistance;                                        // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TravelDistanceMax;                                        // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulationSubstepTime;                                    // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VDragCoefficient;                                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BDS;                                                      // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAdvancedBallistics : 1;                               // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsPenetrable : 1;                                         // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsTrajectoryReplicationEnabled : 1;                      // 0x0038(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.RecoilPatternData
// 0x0008
struct FRecoilPatternData
{
	float                                              Angle;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TrajectoryWeaponData
// 0x0060
struct FTrajectoryWeaponData
{
	float                                              BDS;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VDragCoefficient;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FRecoilPatternData>                  RecoilPatterns;                                           // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UCurveVector*                                BallisticCurve;                                           // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FiringSpreadBase;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReferenceDistance;                                        // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimingSpreadModifier;                                     // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilPatternScale;                                       // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneRecoveryTime;                                        // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponSpread;                                             // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilSpeed;                                              // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RangeModifier;                                            // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchRecoveryTime;                                       // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StandRecoveryTime;                                        // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilRecoverySpeed;                                      // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAdvancedBallistics : 1;                               // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              RecoveryInterval;                                         // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopingSpreadModifier;                                    // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VelocityGearData
// 0x0008
struct FVelocityGearData
{
	float                                              DownSpeed;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpSpeed;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomTransmissionData
// 0x0020
struct FCustomTransmissionData
{
	unsigned char                                      bUseVelocityTransmission : 1;                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CustomTransmissionMaxSpeed;                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDownShiftingOnly : 1;                                    // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FVelocityGearData>                   VelocityGears;                                            // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.DifferentialOverrideData
// 0x0040
struct FDifferentialOverrideData
{
	unsigned char                                      bUseSpeedAlphaMap : 1;                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FVector4                                    SpeedAlphaMap;                                            // 0x0010(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   FrontRearDiffClamp;                                       // 0x0020(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   FrontAxleClamp;                                           // 0x0028(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   RearAxleClamp;                                            // 0x0030(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.WaterControlSetup
// 0x0080
struct FWaterControlSetup
{
	unsigned char                                      bTickWaterControl : 1;                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              InWaterAlpha;                                             // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PropulsionAlpha;                                          // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterAlphaInterpTime;                                     // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     WaterCheckCOMOffset;                                      // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       PropulsionSocketName;                                     // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PropulsionRadius;                                         // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PropulsionVectorMultiplier;                               // 0x002C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              PropulsionForceScale;                                     // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PropulsionForceInterpSpeed;                               // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PropulsionForceOffset;                                    // 0x0040(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              PropulsionPhysicsForce;                                   // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PropulsionPhysicsTorque;                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FVector4                                    PropulsionSpeedMap;                                       // 0x0060(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bLockGears : 1;                                           // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsInWaterGearLock : 1;                                    // 0x0071(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xE];                                       // 0x0072(0x000E) MISSED OFFSET
};

// ScriptStruct TslGame.WheelDragSurfaceConfig
// 0x0018
struct FWheelDragSurfaceConfig
{
	float                                              LongitudinalDrag;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LateralDrag;                                              // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 SpeedScalarCurve;                                         // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplySpeedCurveScale : 1;                                // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslParticleArray
// 0x0010
struct FTslParticleArray
{
	TArray<class ATslParticle*>                        ParticleArray;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WheeledEffectPool
// 0x0050
struct FWheeledEffectPool
{
	TMap<class UClass*, struct FTslParticleArray>      TslParticleMap;                                           // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.SuspensionSoundConfig
// 0x0010
struct FSuspensionSoundConfig
{
	float                                              SuspensionSoundSensitivity;                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinOffsetForSound;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OffsetVelToWheelZVelocityMultiplier;                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWheelZVelocity;                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TestCheatCommand
// 0x0020
struct FTestCheatCommand
{
	struct FName                                       FunctionName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommandName;                                              // 0x0008(0x0010) (CPF_ZeroConstructor)
	float                                              delayTime;                                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DamageRatioInfo
// 0x0008
struct FDamageRatioInfo
{
	float                                              DamageRatio;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.DamageRatioInfo.DamageVictimActorType
};

// ScriptStruct TslGame.InitModeProperties
// 0x0008
struct FInitModeProperties
{
	int                                                GoalScore;                                                // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsTeamElimination : 1;                                   // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseWarRoyaleBluezone : 1;                                // 0x0005(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUsingTeamXRay : 1;                                       // 0x0006(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TeamScoreData
// 0x0060
struct FTeamScoreData
{
	TMap<int, int>                                     TeamIdToIndex;                                            // 0x0000(0x0050) (CPF_ZeroConstructor)
	TArray<int>                                        TeamScores;                                               // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.AutoCompleteVehiclePaths
// 0x0020
struct FAutoCompleteVehiclePaths
{
	struct FString                                     Kind;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     path;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct TslGame.PlayerTracers
// 0x0070
struct FPlayerTracers
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct TslGame.SimpleCollisionEvent
// 0x0010
struct FSimpleCollisionEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.BoundingSpherePersistentChecker
// 0x0528
struct FBoundingSpherePersistentChecker
{
	unsigned char                                      UnknownData00[0x528];                                     // 0x0000(0x0528) MISSED OFFSET
};

// ScriptStruct TslGame.SimpleCapsulePersistentChecker
// 0x0028
struct FSimpleCapsulePersistentChecker
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct TslGame.SimpleCapsuleCheck
// 0x0028
struct FSimpleCapsuleCheck
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct TslGame.SimpleCollisionSphere
// 0x0010
struct FSimpleCollisionSphere
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.SimpleCollisionCapsule
// 0x001C
struct FSimpleCollisionCapsule
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct TslGame.HoldInputHelper
// 0x0018
struct FHoldInputHelper
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       ActionName;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.DrawSphereParams
// 0x001C
struct FDrawSphereParams
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0010(0x0004) (CPF_IsPlainOldData)
	float                                              DrawTime;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DrawLineParams
// 0x0024
struct FDrawLineParams
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0018(0x0004) (CPF_IsPlainOldData)
	float                                              DrawTime;                                                 // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcDamageZoneDesc
// 0x0118
struct FNpcDamageZoneDesc
{
	float                                              GlobalMultiplier;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          BonesMultipliers;                                         // 0x0008(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.NpcDamageZoneDesc.DamageProperties
	unsigned char                                      UnknownData02[0x50];                                      // 0x00A8(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.NpcDamageZoneDesc.RagdollProperties
	float                                              RagdollLinearSpeed;                                       // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RagdollLinearZSpeed;                                      // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RagdollImpulsePower;                                      // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RagdollImpulseDuration;                                   // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageImpulsePower;                                       // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageImpulseDuration;                                    // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpulseWeight;                                            // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0114(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.NpcDamageZoneDesc.DamageReason
	unsigned char                                      bUsingMovingSpeedOnRagdoll : 1;                           // 0x0115(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcRagdollProperties
// 0x0010
struct FNpcRagdollProperties
{
	float                                              LinearSpeedRatio;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LinearZSpeedRatio;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpulsePowerRatio;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTermBodyOnRagdoll : 1;                                   // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NpcDamageProperties
// 0x0010
struct FNpcDamageProperties
{
	float                                              ImpulsePowerRatio;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KnockbackSpeed;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KnockbackDuration;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultiplySpeedRatio;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ObserverHudAnimData
// 0x0048
struct FObserverHudAnimData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ObserverHudAnimData.AnimType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                EliminatorTeamNum;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                EliminatedTeamNum;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     KillingSpreePlayerName;                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	struct FString                                     KillingSpreeClanName;                                     // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	struct FString                                     KillingSpreeTeamName;                                     // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	int                                                KillingSpreeTeamNum;                                      // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                KillingSpreeKillCount;                                    // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SplashObject
// 0x000C
struct FSplashObject
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.PlayerDamageZoneDesc
// 0x00B0
struct FPlayerDamageZoneDesc
{
	float                                              GlobalMultiplier;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          BonesMultipliers;                                         // 0x0008(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.PlayerDamageZoneDesc.WeaponClassMultipliers
	float                                              PunchMultiplier;                                          // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00AC(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.PlayerDamageZoneDesc.ArmorSlot
	unsigned char                                      UnknownData03[0x1];                                       // 0x00AD(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.PlayerDamageZoneDesc.DamageReason
};

// ScriptStruct TslGame.AxisNameAndScale
// 0x0010
struct FAxisNameAndScale
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.KeyGuideDataRow
// 0x0068 (0x0070 - 0x0008)
struct FKeyGuideDataRow : public FTableRowBase
{
	struct FString                                     CategoryId;                                               // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                ColumnNum;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       ActionDesc;                                               // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FName>                               MappedActions;                                            // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FAxisNameAndScale>                   MappedAxies;                                              // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bDummy : 1;                                               // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<struct FTslInputKey>                        DummyInputKeys;                                           // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VehicleRiderData
// 0x0020
struct FVehicleRiderData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct TslGame.MapIconUpdateData
// 0x0088
struct FMapIconUpdateData
{
	class UMapCharacterIconBaseWidget*                 Icon;                                                     // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0008(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bShowMemberNumber : 1;                                    // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                MemberNumber;                                             // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MapIconUpdateData.IconType
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Rotation;                                                 // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CharacterState;                                           // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowPlayerName : 1;                                      // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FText                                       PlayerName;                                               // 0x0030(0x0018)
	struct FLinearColor                                NameTagColor;                                             // 0x0048(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bIsMine : 1;                                              // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowTeamNumber : 1;                                      // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	int                                                TeamNumber;                                               // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0060(0x0008) (CPF_IsPlainOldData)
	unsigned char                                      bIsSpectated : 1;                                         // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasTeamMember : 1;                                       // 0x0069(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	TArray<struct FVehicleRiderData>                   RiderDatas;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bAlive : 1;                                               // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowDirection : 1;                                       // 0x0081(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowStatus : 1;                                          // 0x0082(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	float                                              IconScale;                                                // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DamageInfo
// 0x0080
struct FDamageInfo
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct TslGame.LobbyItemPair
// 0x0028
struct FLobbyItemPair
{
	struct FText                                       ItemName;                                                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     BlueprintId;                                              // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.LobbySkinPair
// 0x0010 (0x0038 - 0x0028)
struct FLobbySkinPair : public FLobbyItemPair
{
	TArray<struct FName>                               SkinnableTagList;                                         // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.LobbyWeaonItemPair
// 0x0010 (0x0038 - 0x0028)
struct FLobbyWeaonItemPair : public FLobbyItemPair
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyWeaonItemPair.WeaponClassEnum
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       SkinTag;                                                  // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslItemStringClass
// 0x0010
struct FTslItemStringClass
{
	struct FStringClassReference                       ItemClass;                                                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct TslGame.TslStringClass
// 0x0010
struct FTslStringClass
{
	struct FStringClassReference                       ObjectClass;                                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct TslGame.DisplayActorNames
// 0x0020
struct FTslGame_FDisplayActorNames
{
	struct FString                                     ActorName;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     ActorLocation;                                            // 0x0010(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslMissionUpdate
// 0x0018
struct FTslMissionUpdate
{
	struct FString                                     MissionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                UpdatedProgress;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslMissionInLobby
// 0x0078
struct FTslMissionInLobby
{
	struct FString                                     MissionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bAchieved : 1;                                            // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                Priority;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     Type;                                                     // 0x0030(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bLocked : 1;                                              // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              ProgressRatio;                                            // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ProgressText;                                             // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FString                                     MissionIconName;                                          // 0x0058(0x0010) (CPF_ZeroConstructor)
	int                                                InitialProgress;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentProgress;                                          // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaximumProgress;                                          // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslUserProfile
// 0x0018
struct FTslUserProfile
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	float                                              TotalPlayTime_Sec;                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.FixHighBitCounter
// 0x000C
struct FFixHighBitCounter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                Counter;                                                  // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeatherChangeWeight
// 0x0008
struct FWeatherChangeWeight
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeatherChangeWeight.newWeather
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslReportedInfo
// 0x0090
struct FTslReportedInfo
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTslReportUserInfo                          UserInfo;                                                 // 0x0010(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     Cause;                                                    // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FString>                             DetailCauseList;                                          // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ReportedSessionType;                                      // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              MatchElapsedTimeSec;                                      // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerMatchResultInfo
// 0x0048
struct FTslPlayerMatchResultInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     FullPlayerName;                                           // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ClanName;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NumKills;                                                 // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamId;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartTeamMember;                                       // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsZombie : 1;                                            // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.KillMessageSettings
// 0x0020
struct FKillMessageSettings
{
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	int                                                TextSize;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bUseFadeIn : 1;                                           // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bDetailKillMessage : 1;                                   // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
};

// ScriptStruct TslGame.TeamEliminationPopUpData
// 0x0008
struct FTeamEliminationPopUpData
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                TeamRanking;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WebPopupParam
// 0x0038
struct FWebPopupParam
{
	struct FString                                     PopupId;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Uri;                                                      // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              X;                                                        // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      BackgroundColor;                                          // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UseBackgroundColor : 1;                                   // 0x0034(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShowButtonGroup : 1;                                      // 0x0035(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleArmorMitigationData
// 0x0010
struct FVehicleArmorMitigationData
{
	unsigned char                                      bUseConstReduction : 1;                                   // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ConstValue;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseScalarReduction : 1;                                  // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ScalarValue;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ShowWeaponParams
// 0x0020
struct FShowWeaponParams
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     SkinId;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslBlendSpaceBlendData
// 0x0100
struct FTslBlendSpaceBlendData
{
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FBlendFilter                                BlendFilter;                                              // 0x0018(0x0090)
	struct FAlphaBlend                                 AlphaBlend;                                               // 0x00A8(0x0038)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E0(0x0020) MISSED OFFSET
};

// ScriptStruct TslGame.TslAnimNode_BlendListBlendSpaceByEnum
// 0x0068 (0x0098 - 0x0030)
struct FTslAnimNode_BlendListBlendSpaceByEnum : public FAnimNode_Base
{
	unsigned char                                      ActiveEnumValue;                                          // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              X;                                                        // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Z;                                                        // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UBlendSpaceBase*>                     BlendSpace;                                               // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<int>                                        EnumToPoseIndex;                                          // 0x0060(0x0010) (CPF_ZeroConstructor)
	float                                              PlayRate;                                                 // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0075(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimNode_BlendListBlendSpaceByEnum.BlendType
	unsigned char                                      UnknownData02[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslBlendSpaceBlendData>             BlendSpaceData;                                           // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.BlendPosePlayInfo
// 0x0014
struct FBlendPosePlayInfo
{
	float                                              PlayChance;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInt32Range                                 LoopingCounter;                                           // 0x0004(0x0010) (CPF_Edit)
};

// ScriptStruct TslGame.TslAnimNode_BlendListRandom
// 0x0050 (0x0118 - 0x00C8)
struct FTslAnimNode_BlendListRandom : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CC(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimNode_BlendListRandom.RandomType
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	TArray<struct FBlendPosePlayInfo>                  PlayChances;                                              // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<int>                                        PlayList;                                                 // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                LoopingCounter;                                           // 0x00F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x00F4(0x0008) (CPF_Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<float>                                      NormalizedPlayChances;                                    // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              LastChildAssetTime;                                       // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CCDIKJointSettings
// 0x001C
struct FCCDIKJointSettings
{
	float                                              MaxConeAngle;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngleX;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinAngleX;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngleY;                                                // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinAngleY;                                                // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngleZ;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinAngleZ;                                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslAnimNode_CCDIK
// 0x00C8 (0x01C0 - 0x00F8)
struct FTslAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         // 0x00F8(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x0104(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0105(0x000B) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x0110(0x0060) (CPF_Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0170(0x0018) (CPF_Edit)
	struct FBoneReference                              RootBone;                                                 // 0x0188(0x0018) (CPF_Edit)
	float                                              Precision;                                                // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxIterations;                                            // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bStartFromTail : 1;                                       // 0x01A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableRotationLimit : 1;                                 // 0x01A9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	TArray<struct FCCDIKJointSettings>                 RotationLimitPerJoints;                                   // 0x01B0(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslAnimNode_CustomAnimSequence
// 0x0020 (0x0090 - 0x0070)
struct FTslAnimNode_CustomAnimSequence : public FAnimNode_SequencePlayer
{
	class UTslNpcAnimDataAsset*                        AnimDataAsset;                                            // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       AnimName;                                                 // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AltAnimName;                                              // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AnimationIndex;                                           // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimNode_CustomAnimSequence.CustomAnimDataType
};

// ScriptStruct TslGame.TslAnimNode_Slot
// 0x0008 (0x0078 - 0x0070)
struct FTslAnimNode_Slot : public FAnimNode_Slot
{
	float                                              ALPHA;                                                    // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0074(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimNode_Slot.SlotType
};

// ScriptStruct TslGame.TslAnimInstanceProxy
// 0x0000 (0x0510 - 0x0510)
struct FTslAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct TslGame.PlayerHitInfo
// 0x000C
struct FPlayerHitInfo
{
	int                                                Hits;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damages;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Kills;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomSensitiveData
// 0x0010
struct FCustomSensitiveData
{
	struct FName                                       SensitiveName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastConvertedSensitivity;                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomSensitiveDataArray
// 0x0010
struct FCustomSensitiveDataArray
{
	TArray<struct FCustomSensitiveData>                Array;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.PingPongSummary
// 0x000C
struct FPingPongSummary
{
	float                                              UnreliableAverageDelayMsec;                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReliableAverageDelayMsec;                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             UnreliableSentCount;                                      // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             UnreliableMissCount;                                      // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             ReliableCount;                                            // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TracerInstance
// 0x0088
struct FTracerInstance
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct TslGame.TracerSimulationData
// 0x0030
struct FTracerSimulationData
{
	struct FVector                                     ServerStartTrace;                                         // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Dir;                                                      // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // 0x0018(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      WeaponClass;                                              // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TracerSimulationServerData
// 0x0008 (0x0038 - 0x0030)
struct FTracerSimulationServerData : public FTracerSimulationData
{
	float                                              LatencyOffset;                                            // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkinTargetData
// 0x0010
struct FSkinTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkinDataConfig*                             SkinDataConfig;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkinData
// 0x0010
struct FSkinData
{
	TArray<struct FSkinTargetData>                     SkinTargetDatas;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.SkinMesh
// 0x0028
struct FSkinMesh
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.SkinMesh.MeshType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UObject>                           MeshAsset;                                                // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.SkinMeshMaterials
// 0x0018
struct FSkinMeshMaterials
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.SkinMeshMaterials.SkinApplicationType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSkinMaterialData>                   SkinMaterials;                                            // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslBaseSkinData
// 0x00C0 (0x00C8 - 0x0008)
struct FTslBaseSkinData : public FTableRowBase
{
	TMap<struct FName, struct FSkinMesh>               SkinnedMeshSet;                                           // 0x0008(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<struct FName, struct FSkinMeshMaterials>      SkinnedMaterialSet;                                       // 0x0058(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               SkinnableTagList;                                         // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FRotator                                    DefaultViewModeRotation;                                  // 0x00B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslEquipSkinData
// 0x0080 (0x0148 - 0x00C8)
struct FTslEquipSkinData : public FTslBaseSkinData
{
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x00C8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x00F8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdPair                   CustomizableObjectSkin;                                   // 0x0128(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslParachuteSkinData
// 0x0000 (0x0148 - 0x0148)
struct FTslParachuteSkinData : public FTslEquipSkinData
{
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x00C8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x00F8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdPair                   CustomizableObjectSkin;                                   // 0x0128(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslTorsoArmorSkinData
// 0x0000 (0x0148 - 0x0148)
struct FTslTorsoArmorSkinData : public FTslEquipSkinData
{
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x00C8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x00F8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdPair                   CustomizableObjectSkin;                                   // 0x0128(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslBackpackSkinData
// 0x0000 (0x0148 - 0x0148)
struct FTslBackpackSkinData : public FTslEquipSkinData
{
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x00C8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x00F8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdPair                   CustomizableObjectSkin;                                   // 0x0128(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslHelmetSkinData
// 0x0000 (0x0148 - 0x0148)
struct FTslHelmetSkinData : public FTslEquipSkinData
{
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x00C8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x00F8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdPair                   CustomizableObjectSkin;                                   // 0x0128(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslWeaponSkinData
// 0x0018 (0x00E0 - 0x00C8)
struct FTslWeaponSkinData : public FTslBaseSkinData
{
	unsigned char                                      bStatTrak : 1;                                            // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FStringAssetReference                       StatTrakActorClass;                                       // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TslMeleeWeaponSkinData
// 0x0000 (0x00E0 - 0x00E0)
struct FTslMeleeWeaponSkinData : public FTslWeaponSkinData
{
	unsigned char                                      bStatTrak : 1;                                            // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FStringAssetReference                       StatTrakActorClass;                                       // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.SkinSketalMesh
// 0x0008
struct FSkinSketalMesh
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkinTargetInfo
// 0x0010
struct FSkinTargetInfo
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMeshComponent*                              TargetMesh;                                               // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAnim
// 0x0010
struct FWeaponAnim
{
	class UAnimMontage*                                Pawn1P;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Pawn3P;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MasteryItemBase
// 0x0008 (0x0010 - 0x0008)
struct FMasteryItemBase : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.MasteryItemCharm
// 0x0078 (0x0088 - 0x0010)
struct FMasteryItemCharm : public FMasteryItemBase
{
	TAssetPtr<class UObject>                           CharmAsset;                                               // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UClass*                                      CharmAnimBlueprint;                                       // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TMap<struct FName, TAssetPtr<class UMaterialInterface>> MaterialOverrides;                                        // 0x0038(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.MasteryItemMesh
// 0x0070 (0x0080 - 0x0010)
struct FMasteryItemMesh : public FMasteryItemBase
{
	TAssetPtr<class UObject>                           MeshAsset;                                                // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TMap<struct FName, TAssetPtr<class UMaterialInterface>> MaterialOverrides;                                        // 0x0030(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.MasteryMeshConfig
// 0x0018
struct FMasteryMeshConfig
{
	struct FName                                       WeaponMasteryCharmSocket;                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WeaponMasteryCharmAttachSocket;                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CharmWeaponLODVisibility;                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VariantWeaponLODVisibility;                               // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemOffsetData
// 0x0118
struct FItemOffsetData
{
	struct FVector                                     SlotOffset_Primary_Location;                              // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SlotOffset_Secondary_Location;                            // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SlotOffset_SideArm_Location;                              // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SlotOffset_Melee_Location;                                // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SlotOffset_Thrown_Location;                               // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SlotOffset_Primary_Rotation;                              // 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SlotOffset_Secondary_Rotation;                            // 0x0048(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SlotOffset_SideArm_Rotation;                              // 0x0054(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SlotOffset_Melee_Rotation;                                // 0x0060(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SlotOffset_Thrown_Rotation;                               // 0x006C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TMap<class UClass*, struct FTransform>             SlotOffset_Primary_PerWeapon;                             // 0x0078(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, struct FTransform>             SlotOffset_Secondary_PerWeapon;                           // 0x00C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VaultingHandleResult
// 0x0040
struct FVaultingHandleResult
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     Apex;                                                     // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     ApexAdditive;                                             // 0x0024(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              Direction;                                                // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerSpeed2D;                                            // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFromObject;                                       // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VaultingHandleResult.VaultType
	unsigned char                                      bIsPassed : 1;                                            // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsClimbing : 1;                                          // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsEndToFall : 1;                                         // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct TslGame.VaultingHandleInput
// 0x0038
struct FVaultingHandleInput
{
	struct FVector                                     ImpactLocation;                                           // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     CapsulePredictedLocation;                                 // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Normal2D;                                                 // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     DirectionVector;                                          // 0x0024(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              JumpDistance;                                             // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsForceVault : 1;                                        // 0x0034(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bIsBlockVault : 1;                                        // 0x0034(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bIsBlockClimb : 1;                                        // 0x0034(0x0001) (CPF_BlueprintVisible)
};

// ScriptStruct TslGame.ItemThrowParams
// 0x0050
struct FItemThrowParams
{
	struct FTransform                                  MeshTM;                                                   // 0x0000(0x0030) (CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x003C(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.AnimationPlayData
// 0x0010
struct FAnimationPlayData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.SkydiveCameraBlendSettings
// 0x0010
struct FSkydiveCameraBlendSettings
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExponent;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LoadingScreenDataRowBase
// 0x0030 (0x0038 - 0x0008)
struct FLoadingScreenDataRowBase : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LoadingScreenDataRowBase.LoadingScreenType
	unsigned char                                      UnknownData01[0x1];                                       // 0x0009(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LoadingScreenDataRowBase.RankGuideType
	unsigned char                                      UnknownData02[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        BackgroundImage;                                          // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bIsKeyGuide : 1;                                          // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bExposedOnPCAndKeyboard : 1;                              // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bExposedOnPCAndGamepad : 1;                               // 0x0032(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bExposedOnXboxOne : 1;                                    // 0x0033(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bExposedOnXboxPS4 : 1;                                    // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LoadingScreenDataRow
// 0x0030 (0x0068 - 0x0038)
struct FLoadingScreenDataRow : public FLoadingScreenDataRowBase
{
	struct FText                                       Title;                                                    // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.LoadingScreenDataRow_KeyGuide
// 0x0008 (0x0040 - 0x0038)
struct FLoadingScreenDataRow_KeyGuide : public FLoadingScreenDataRowBase
{
	class UClass*                                      TipWidget;                                                // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplayRecordTargetEvent
// 0x0020
struct FReplayRecordTargetEvent
{
	struct FString                                     RecordTargetNetId;                                        // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RecordTargetName;                                         // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayEtceteraEvent
// 0x0030
struct FReplayEtceteraEvent
{
	struct FString                                     EtceteraEventCode;                                        // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     TargetNetId;                                              // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     TargetName;                                               // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayGroggyEvent
// 0x0078
struct FReplayGroggyEvent
{
	struct FString                                     InstigatorNetId;                                          // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     InstigatorName;                                           // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DamageCauseClassName;                                     // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DamageTypeCategory;                                       // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0060(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bGroggy : 1;                                              // 0x0070(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplayKillEvent
// 0x0078
struct FReplayKillEvent
{
	struct FString                                     KillerNetId;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     KillerName;                                               // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DamageCauseClassName;                                     // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DamageTypeCategory;                                       // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0060(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bGroggy : 1;                                              // 0x0070(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslFriendPresence
// 0x0005
struct FTslFriendPresence
{
	unsigned char                                      IsOnline : 1;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPlaying : 1;                                            // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPlayingThisGame : 1;                                    // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsJoinable : 1;                                           // 0x0003(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Status;                                                   // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslFriend
// 0x0038
struct FTslFriend
{
	struct FString                                     UserSerial;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserRealName;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FTslFriendPresence                          Presence;                                                 // 0x0030(0x0005)
};

// ScriptStruct TslGame.TslClientAuthData
// 0x0070
struct FTslClientAuthData
{
	struct FString                                     PlatformType;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AppID;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     FullGameVersion;                                          // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserSerial;                                               // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PlayerNetId;                                              // 0x0060(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.DroppedItemInfo
// 0x0018
struct FDroppedItemInfo
{
	class UItem*                                       Item;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ItemInitiator
// 0x0010
struct FItemInitiator
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpawnCountElement
// 0x0018
struct FItemSpawnCountElement
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TslGame.ItemSpawnWeightElement
// 0x0010
struct FItemSpawnWeightElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ItemSpawnTogetherDataRow
// 0x0030 (0x0038 - 0x0008)
struct FItemSpawnTogetherDataRow : public FTableRowBase
{
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SpawnedItem;                                              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TogetherItem;                                             // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CountMin;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CountMax;                                                 // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpawnDataRow
// 0x0028 (0x0030 - 0x0008)
struct FItemSpawnDataRow : public FTableRowBase
{
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SubCategoryFilter;                                        // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuEventDamage
// 0x0058 (0x0068 - 0x0010)
struct FWuEventDamage : public FGameEventBase
{
	unsigned char                                      IsDetailStatus : 1;                                       // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsVictimMe : 1;                                           // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              Damage;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DamageTypeCategory;                                       // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AttackerName;                                             // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     AttackerLocation;                                         // 0x0038(0x000C) (CPF_IsPlainOldData)
	int                                                AttackerTeamId;                                           // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     VictimName;                                               // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     VictimLocation;                                           // 0x0058(0x000C) (CPF_IsPlainOldData)
	int                                                VictimTeamId;                                             // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuEventKill
// 0x0078 (0x0088 - 0x0010)
struct FWuEventKill : public FGameEventBase
{
	unsigned char                                      IsDetailStatus : 1;                                       // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsKillerMe : 1;                                           // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     KillerName;                                               // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     KillerLocation;                                           // 0x0028(0x000C) (CPF_IsPlainOldData)
	int                                                KillerTeamId;                                             // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsVictimMe : 1;                                           // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     VictimName;                                               // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     VictimLocation;                                           // 0x0050(0x000C) (CPF_IsPlainOldData)
	int                                                VictimTeamId;                                             // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DamageCauser;                                             // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0070(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsGroggy : 1;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsStealKilled : 1;                                        // 0x0081(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuEventDataPlayerResult
// 0x0018
struct FWuEventDataPlayerResult
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                KillCount;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuEventDataTeamResult
// 0x0018
struct FWuEventDataTeamResult
{
	int                                                TeamId;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWuEventDataPlayerResult>            Members;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuEventMatchResult
// 0x0028 (0x0038 - 0x0010)
struct FWuEventMatchResult : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                StartPlayerCount;                                         // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartTeamCount;                                           // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWuEventDataTeamResult>              Teams;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuEventPlayerMatchResult
// 0x0038 (0x0048 - 0x0010)
struct FWuEventPlayerMatchResult : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                StartPlayerCount;                                         // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartTeamCount;                                           // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0028(0x0010) (CPF_ZeroConstructor)
	int                                                Ranking;                                                  // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                KillCount;                                                // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HeadShotCount;                                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GivenDamages;                                             // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuEventDataPlayerInfo
// 0x0050
struct FWuEventDataPlayerInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoostGauge;                                               // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     State;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ArmedWeapon;                                              // 0x0038(0x0010) (CPF_ZeroConstructor)
	int                                                ArmedAmmoCount;                                           // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InventoryAmmoCount;                                       // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuEventMatchStatus
// 0x00A8 (0x00B8 - 0x0010)
struct FWuEventMatchStatus : public FGameEventBase
{
	unsigned char                                      IsDetailStatus : 1;                                       // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     MatchId;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TeamMode;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CameraMode;                                               // 0x0038(0x0010) (CPF_ZeroConstructor)
	struct FString                                     MatchState;                                               // 0x0048(0x0010) (CPF_ZeroConstructor)
	int                                                ElapsedTime;                                              // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BlueZonePhase;                                            // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlueZoneMoving : 1;                                     // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              BlueZoneRadius;                                           // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     BlueZoneLocation;                                         // 0x0068(0x000C) (CPF_IsPlainOldData)
	float                                              WhiteZoneRadius;                                          // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     WhiteZoneLocation;                                        // 0x0078(0x000C) (CPF_IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RedZoneLocation;                                          // 0x0088(0x000C) (CPF_IsPlainOldData)
	int                                                StartPlayerCount;                                         // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AlivePlayerCount;                                         // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartTeamCount;                                           // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AliveTeamCount;                                           // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<struct FWuEventDataPlayerInfo>              PlayerInfos;                                              // 0x00A8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuEventPlayerStatus
// 0x0090 (0x00A0 - 0x0010)
struct FWuEventPlayerStatus : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     MyPlayerName;                                             // 0x0020(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsSpetating : 1;                                          // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     SpectatingCameraLocation;                                 // 0x0034(0x000C) (CPF_IsPlainOldData)
	struct FWuEventDataPlayerInfo                      CurrentPlayerInfo;                                        // 0x0040(0x0050)
	TArray<struct FWuEventDataPlayerInfo>              TeamMatesInfo;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuEventMatchLeave
// 0x0010 (0x0020 - 0x0010)
struct FWuEventMatchLeave : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuEventMatchJoin
// 0x0038 (0x0048 - 0x0010)
struct FWuEventMatchJoin : public FGameEventBase
{
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TeamMode;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CameraMode;                                               // 0x0030(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsDetailObserver : 1;                                     // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogCharacter
// 0x0060
struct FWuLogCharacter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AccountId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsInBlueZone : 1;                                         // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsInRedZone : 1;                                          // 0x0049(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<struct FString>                             Zone;                                                     // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogXboxUnautorizedDevice
// 0x0068 (0x00C0 - 0x0058)
struct FWuLogXboxUnautorizedDevice : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	int                                                KillCount;                                                // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogMissionListOpen
// 0x0060 (0x00B8 - 0x0058)
struct FWuLogMissionListOpen : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
};

// ScriptStruct TslGame.WuLogWeaponFireCount
// 0x0078 (0x00D0 - 0x0058)
struct FWuLogWeaponFireCount : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     WeaponId;                                                 // 0x00B8(0x0010) (CPF_ZeroConstructor)
	int                                                FireCount;                                                // 0x00C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogRedZoneEnded
// 0x0010 (0x0068 - 0x0058)
struct FWuLogRedZoneEnded : public FLogBase
{
	TArray<struct FWuLogCharacter>                     Drivers;                                                  // 0x0058(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogParachuteLanding
// 0x0068 (0x00C0 - 0x0058)
struct FWuLogParachuteLanding : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	float                                              Distance;                                                 // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogObjectDestroy
// 0x0080 (0x00D8 - 0x0058)
struct FWuLogObjectDestroy : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     ObjectType;                                               // 0x00B8(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     ObjectLocation;                                           // 0x00C8(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogEmote
// 0x0070 (0x00C8 - 0x0058)
struct FWuLogEmote : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     EmoteName;                                                // 0x00B8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogVaultStart
// 0x0060 (0x00B8 - 0x0058)
struct FWuLogVaultStart : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
};

// ScriptStruct TslGame.WuLogItem
// 0x0048
struct FWuLogItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                StackCount;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Category;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SubCategory;                                              // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             AttachedItems;                                            // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogSkinUpdate
// 0x00C8 (0x0120 - 0x0058)
struct FWuLogSkinUpdate : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
	struct FString                                     SkinName;                                                 // 0x0100(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SkinCategory;                                             // 0x0110(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogStatAccuracyItem
// 0x0018
struct FWuLogStatAccuracyItem
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                NumShots;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumHits;                                                  // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogStatAccuracy
// 0x0010 (0x0068 - 0x0058)
struct FWuLogStatAccuracy : public FLogBase
{
	TArray<struct FWuLogStatAccuracyItem>              AccuracyList;                                             // 0x0058(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuStringStringPair
// 0x0020
struct FWuStringStringPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     second;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogMatchSetting
// 0x0058 (0x00B0 - 0x0058)
struct FWuLogMatchSetting : public FLogBase
{
	unsigned char                                      IsCustomGame : 1;                                         // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ModeName;                                                 // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0080(0x0010) (CPF_ZeroConstructor)
	int                                                TeamCount;                                                // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinPlayerCount;                                           // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FWuStringStringPair>                 MatchSettings;                                            // 0x00A0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogBulletShotDistance
// 0x0088 (0x00E0 - 0x0058)
struct FWuLogBulletShotDistance : public FLogBase
{
	struct FVector                                     VictimLocation;                                           // 0x0058(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0064(0x000C) (CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsVictimInVehicle : 1;                                    // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              VictimSpeed;                                              // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     VictimStanceMode;                                         // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     VictimMovementMode;                                       // 0x0090(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AttackerAccountId;                                        // 0x00A0(0x0010) (CPF_ZeroConstructor)
	float                                              AttackerPing;                                             // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackerRDelay;                                           // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackerUDelay;                                           // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackerUMissPercent;                                     // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     VictimAccountId;                                          // 0x00C0(0x0010) (CPF_ZeroConstructor)
	float                                              VictimPing;                                               // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VictimRDelay;                                             // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VictimUDelay;                                             // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VictimUMissPercent;                                       // 0x00DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogSteamNoNetworkConnection
// 0x0028 (0x0080 - 0x0058)
struct FWuLogSteamNoNetworkConnection : public FLogBase
{
	int                                                DisconnectionCountPerGame;                                // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SteamKickReason;                                          // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0070(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogBodyPenetrationDamageInfo
// 0x0080 (0x00D8 - 0x0058)
struct FWuLogBodyPenetrationDamageInfo : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	float                                              DamageDiff;                                               // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FString                                     DamageZone;                                               // 0x00C8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogCheat
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogCheat : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     CheatType;                                                // 0x00B8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x00C8(0x0010) (CPF_ZeroConstructor)
	float                                              ParamFloat1;                                              // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ParamFloat2;                                              // 0x00DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ParamString1;                                             // 0x00E0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ParamString2;                                             // 0x00F0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogSwimEnd
// 0x0068 (0x00C0 - 0x0058)
struct FWuLogSwimEnd : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	float                                              SwimDistance;                                             // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSwimDepthOfWater;                                      // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogSwimStart
// 0x0060 (0x00B8 - 0x0058)
struct FWuLogSwimStart : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
};

// ScriptStruct TslGame.WuLogVehicle
// 0x0028
struct FWuLogVehicle
{
	struct FString                                     VehicleType;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     VehicleId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              HealthPercent;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FeulPercent;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogWheelDestroy
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogWheelDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00C0(0x0028)
	struct FString                                     DamageTypeCategory;                                       // 0x00E8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00F8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogVehicleDestroy
// 0x00B8 (0x0110 - 0x0058)
struct FWuLogVehicleDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00C0(0x0028)
	struct FString                                     DamageTypeCategory;                                       // 0x00E8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00F8(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicleLeave
// 0x0098 (0x00F0 - 0x0058)
struct FWuLogVehicleLeave : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00B8(0x0028)
	float                                              RideDistance;                                             // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SeatIndex;                                                // 0x00E4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x00E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicleRide
// 0x0090 (0x00E8 - 0x0058)
struct FWuLogVehicleRide : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00B8(0x0028)
	int                                                SeatIndex;                                                // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicleSpawn
// 0x0020 (0x0078 - 0x0058)
struct FWuLogVehicleSpawn : public FLogBase
{
	struct FString                                     VehicleId;                                                // 0x0058(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0068(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogItemPackage
// 0x0030
struct FWuLogItemPackage
{
	struct FString                                     ItemPackageId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FWuLogItem>                          Items;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogCarePackageLand
// 0x0030 (0x0088 - 0x0058)
struct FWuLogCarePackageLand : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0058(0x0030)
};

// ScriptStruct TslGame.WuLogCarePackageSpawn
// 0x0030 (0x0088 - 0x0058)
struct FWuLogCarePackageSpawn : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0058(0x0030)
};

// ScriptStruct TslGame.WuLogLanguage
// 0x0080 (0x00D8 - 0x0058)
struct FWuLogLanguage : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     WindowsLanguage;                                          // 0x00B8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GameLanguage;                                             // 0x00C8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGraphicSettings
// 0x003C
struct FWuGraphicSettings
{
	int                                                ResolutionWidth;                                          // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ResolutionHeight;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      VSync : 1;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                DisplayMode;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FOV;                                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScreenScale;                                              // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AntiAliasing;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PostProcessing;                                           // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Shadows;                                                  // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Textures;                                                 // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Effects;                                                  // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Foliage;                                                  // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ViewDistance;                                             // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MotionBlur : 1;                                           // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinimapDynamicZoom : 1;                                   // 0x0035(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      FreelockInterpolation : 1;                                // 0x0036(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Replay : 1;                                               // 0x0037(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DeathCam : 1;                                             // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuSystemInfo
// 0x01A0 (0x01F8 - 0x0058)
struct FWuSystemInfo : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     OsLanguage;                                               // 0x00B8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GameLanguage;                                             // 0x00C8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     OsVersion;                                                // 0x00D8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CpuName;                                                  // 0x00E8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GpuName;                                                  // 0x00F8(0x0010) (CPF_ZeroConstructor)
	int                                                RamInGB;                                                  // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FString                                     BaseBoardSerial;                                          // 0x0110(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             MemorySerials;                                            // 0x0120(0x0010) (CPF_ZeroConstructor)
	int                                                ArpIpCount;                                               // 0x0130(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     OsUserAccount;                                            // 0x0138(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             DiskModelNames;                                           // 0x0148(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             DiskSerials;                                              // 0x0158(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             MonitorModelNames;                                        // 0x0168(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             MonitorSerials;                                           // 0x0178(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             MemoryModelNames;                                         // 0x0188(0x0010) (CPF_ZeroConstructor)
	struct FString                                     BaseBoardModelName;                                       // 0x0198(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             GatewayMacAddress;                                        // 0x01A8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UsingXenuine : 1;                                         // 0x01B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	struct FWuGraphicSettings                          GraphicSettings;                                          // 0x01BC(0x003C)
};

// ScriptStruct TslGame.WuLogHeal
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogHeal : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
	float                                              HealAmount;                                               // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogItemUse
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemUse : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemDetach
// 0x00F0 (0x0148 - 0x0058)
struct FWuLogItemDetach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  ParentItem;                                               // 0x00B8(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x0100(0x0048)
};

// ScriptStruct TslGame.WuLogItemAttach
// 0x00F0 (0x0148 - 0x0058)
struct FWuLogItemAttach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  ParentItem;                                               // 0x00B8(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x0100(0x0048)
};

// ScriptStruct TslGame.WuLogItemUnequip
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemUnequip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemEquip
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemEquip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemDrop
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemDrop : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemPickupFromLootBox
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogItemPickupFromLootBox : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
	int                                                OwnerTeamId;                                              // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogItemPickupFromCarepackage
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemPickupFromCarepackage : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemPickup
// 0x00A8 (0x0100 - 0x0058)
struct FWuLogItemPickup : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogItem                                  Item;                                                     // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemSpawn
// 0x0018 (0x0070 - 0x0058)
struct FWuLogItemSpawn : public FLogBase
{
	struct FString                                     ItemId;                                                   // 0x0058(0x0010) (CPF_ZeroConstructor)
	int                                                SpawnCount;                                               // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogReportInfo
// 0x00F0 (0x0148 - 0x0058)
struct FWuLogReportInfo : public FLogBase
{
	struct FWuLogCharacter                             Reporter;                                                 // 0x0058(0x0060)
	struct FWuLogCharacter                             ReportedPlayer;                                           // 0x00B8(0x0060)
	struct FString                                     ReportCauseType;                                          // 0x0118(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             DetailedCauses;                                           // 0x0128(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ReportedSessionType;                                      // 0x0138(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameResultStatsPerPlayer
// 0x0020
struct FWuGameResultStatsPerPlayer
{
	int                                                KillCount;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Score;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Xp;                                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceOnFoot;                                           // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceOnSwim;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceOnVehicle;                                        // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceOnParachute;                                      // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceOnFreefall;                                       // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuGameResultPerPlayer
// 0x0060
struct FWuGameResultPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Rank;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     GameResult;                                               // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuGameResultStatsPerPlayer                 Stats;                                                    // 0x002C(0x0020)
	unsigned char                                      IsBpGrinder : 1;                                          // 0x004C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsXpGrinder : 1;                                          // 0x004D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FString                                     AccountId;                                                // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerKill
// 0x01D8 (0x0230 - 0x0058)
struct FWuLogPlayerKill : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Killer;                                                   // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FWuLogCharacter                             Assistant;                                                // 0x0120(0x0060)
	int                                                DBNOId;                                                   // 0x0180(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FString                                     DamageReason;                                             // 0x0188(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageTypeCategory;                                       // 0x0198(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x01A8(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             DamageCauserAdditionalInfo;                               // 0x01B8(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x01C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	struct FWuGameResultPerPlayer                      VictimGameResult;                                         // 0x01D0(0x0060)
};

// ScriptStruct TslGame.WuLogPlayerRevive
// 0x00C8 (0x0120 - 0x0058)
struct FWuLogPlayerRevive : public FLogBase
{
	struct FWuLogCharacter                             Reviver;                                                  // 0x0058(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00B8(0x0060)
	int                                                DBNOId;                                                   // 0x0118(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogArmorDestroy
// 0x0148 (0x01A0 - 0x0058)
struct FWuLogArmorDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FString                                     DamageTypeCategory;                                       // 0x0120(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0130(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x0140(0x0010) (CPF_ZeroConstructor)
	struct FWuLogItem                                  Item;                                                     // 0x0150(0x0048)
	float                                              Distance;                                                 // 0x0198(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerMakeGroggy
// 0x0118 (0x0170 - 0x0058)
struct FWuLogPlayerMakeGroggy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FString                                     DamageReason;                                             // 0x0120(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageTypeCategory;                                       // 0x0130(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x0140(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             DamageCauserAdditionalInfo;                               // 0x0150(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x0160(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsAttackerInVehicle : 1;                                  // 0x0164(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	int                                                DBNOId;                                                   // 0x0168(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerTakeDamage
// 0x0100 (0x0158 - 0x0058)
struct FWuLogPlayerTakeDamage : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FWuLogCharacter                             Victim;                                                   // 0x00C0(0x0060)
	struct FString                                     DamageTypeCategory;                                       // 0x0120(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x0130(0x0010) (CPF_ZeroConstructor)
	float                                              Damage;                                                   // 0x0140(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FString                                     DamageCauserName;                                         // 0x0148(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerAttack
// 0x00E8 (0x0140 - 0x0058)
struct FWuLogPlayerAttack : public FLogBase
{
	int                                                AttackId;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FireWeaponStackCount;                                     // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuLogCharacter                             Attacker;                                                 // 0x0060(0x0060)
	struct FString                                     AttackType;                                               // 0x00C0(0x0010) (CPF_ZeroConstructor)
	struct FWuLogItem                                  Weapon;                                                   // 0x00D0(0x0048)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0118(0x0028)
};

// ScriptStruct TslGame.WuLogPlayerPosition
// 0x00B0 (0x0108 - 0x0058)
struct FWuLogPlayerPosition : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00B8(0x0028)
	float                                              ElapsedTime;                                              // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x00E4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClientFPS;                                                // 0x00E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Under10FPS;                                               // 0x00EC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Under20FPS;                                               // 0x00F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Under30FPS;                                               // 0x00F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Under60FPS;                                               // 0x00F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinFPS;                                                   // 0x00FC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxFPS;                                                   // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerKicked
// 0x0070 (0x00C8 - 0x0058)
struct FWuLogPlayerKicked : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
	struct FString                                     Reason;                                                   // 0x00B8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerLogout
// 0x0020 (0x0078 - 0x0058)
struct FWuLogPlayerLogout : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0058(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0068(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerLogin
// 0x0038 (0x0090 - 0x0058)
struct FWuLogPlayerLogin : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0058(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Result : 1;                                               // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0080(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerCreate
// 0x0060 (0x00B8 - 0x0058)
struct FWuLogPlayerCreate : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0058(0x0060)
};

// ScriptStruct TslGame.WuLogServerStat
// 0x0030 (0x0088 - 0x0058)
struct FWuLogServerStat : public FLogBase
{
	int                                                ElapsedTime;                                              // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingMin;                                                  // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingMax;                                                  // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingAvg;                                                  // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateMin;                                             // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateMax;                                             // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateAvg;                                             // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogGameState
// 0x0044
struct FWuLogGameState
{
	int                                                ElapsedTime;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SafetyZonePosition;                                       // 0x0014(0x000C) (CPF_IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PoisonGasWarningPosition;                                 // 0x0024(0x000C) (CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RedZonePosition;                                          // 0x0034(0x000C) (CPF_IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogGameStatePeriodic
// 0x0048 (0x00A0 - 0x0058)
struct FWuLogGameStatePeriodic : public FLogBase
{
	struct FWuLogGameState                             GameState;                                                // 0x0058(0x0044)
};

// ScriptStruct TslGame.WuLogPlayTimeRecord
// 0x0008
struct FWuLogPlayTimeRecord
{
	int                                                SurvivalTime;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamSpectatingTime;                                       // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogBpReward
// 0x001C
struct FWuLogBpReward
{
	int                                                PlayTime;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Kill;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Damage;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Boosting;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RawTotal;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BoostedTotal;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogRewardDetail
// 0x0038
struct FWuLogRewardDetail
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FWuLogPlayTimeRecord                        PlayTimeRecord;                                           // 0x0010(0x0008)
	struct FWuLogBpReward                              BpReward;                                                 // 0x0018(0x001C)
};

// ScriptStruct TslGame.WuGameFinishedResult
// 0x0010
struct FWuGameFinishedResult
{
	TArray<struct FWuGameResultPerPlayer>              Results;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogMatchEnd
// 0x0030 (0x0088 - 0x0058)
struct FWuLogMatchEnd : public FLogBase
{
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0058(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuLogRewardDetail>                  RewardDetail;                                             // 0x0068(0x0010) (CPF_ZeroConstructor)
	struct FWuGameFinishedResult                       GameResultOnFinished;                                     // 0x0078(0x0010)
};

// ScriptStruct TslGame.WuLogMatchStart
// 0x0058 (0x00B0 - 0x0058)
struct FWuLogMatchStart : public FLogBase
{
	struct FString                                     MapName;                                                  // 0x0058(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeatherId;                                                // 0x0068(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0078(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CameraViewBehaviour;                                      // 0x0088(0x0010) (CPF_ZeroConstructor)
	int                                                TeamSize;                                                 // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsCustomGame : 1;                                         // 0x009C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsEventMode : 1;                                          // 0x009D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009E(0x0002) MISSED OFFSET
	struct FString                                     BlueZoneCustomOptions;                                    // 0x00A0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogCharacterRating
// 0x0030
struct FWuLogCharacterRating
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                MMR;                                                      // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RankPoint;                                                // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ping;                                                     // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogMatchDefinition
// 0x0040 (0x0098 - 0x0058)
struct FWuLogMatchDefinition : public FLogBase
{
	struct FString                                     MatchId;                                                  // 0x0058(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PingQuality;                                              // 0x0068(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SeasonState;                                              // 0x0078(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuLogCharacterRating>               Ratings;                                                  // 0x0088(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuStringIntPair
// 0x0018
struct FWuStringIntPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                second;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuMissionProgressUpdateData
// 0x0010
struct FWuMissionProgressUpdateData
{
	TArray<struct FWuStringIntPair>                    Updates;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuPrepareUsersResult
// 0x0010
struct FWuPrepareUsersResult
{
	TArray<struct FString>                             AccountIds;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartInfoPerPlayer
// 0x0020
struct FWuGameStartInfoPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartInfo
// 0x0010
struct FWuGameStartInfo
{
	TArray<struct FWuGameStartInfoPerPlayer>           Players;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameInitializedResult
// 0x0008
struct FWuGameInitializedResult
{
	unsigned char                                      IsSuccess : 1;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Port;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuGameStartRequest
// 0x0010
struct FWuGameStartRequest
{
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameOverrideParameterRequest
// 0x0020
struct FWuGameOverrideParameterRequest
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameInitializeRequest
// 0x0048
struct FWuGameInitializeRequest
{
	unsigned char                                      IsCustomGame : 1;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ModeName;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                TeamCount;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinPlayerCount;                                           // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuMatchRating
// 0x0008
struct FWuMatchRating
{
	int                                                RankPoint;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MMR;                                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringBoolPair
// 0x0018
struct FWuStringBoolPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      second : 1;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringFloatPair
// 0x0018
struct FWuStringFloatPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	float                                              second;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuCharacterCustomizationOptions
// 0x0050
struct FWuCharacterCustomizationOptions
{
	TArray<struct FWuStringBoolPair>                   BoolOptions;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringFloatPair>                  FloatOptions;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringOptions;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             ItemIds;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Emotes;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuCharacterWeaponMasteryInfo
// 0x0010
struct FWuCharacterWeaponMasteryInfo
{
	TArray<struct FWuStringFloatPair>                  WeaponMasteryLevels;                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuCharacterInfo
// 0x0088
struct FWuCharacterInfo
{
	struct FString                                     Nickname;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ClanName;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Gender : 1;                                               // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FWuCharacterCustomizationOptions            CustomizationOptions;                                     // 0x0028(0x0050)
	struct FWuCharacterWeaponMasteryInfo               WeaponMasteryInfo;                                        // 0x0078(0x0010)
};

// ScriptStruct TslGame.WuUdpEncryptionKey
// 0x0030
struct FWuUdpEncryptionKey
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ServerIV;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ClientIV;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuUserAuthInfo
// 0x0140
struct FWuUserAuthInfo
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamMemberIndex;                                          // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SquadIndex;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuMatchRating                              Rating;                                                   // 0x001C(0x0008)
	unsigned char                                      IsZombie : 1;                                             // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FWuCharacterInfo                            CharacterInfo;                                            // 0x0028(0x0088)
	int                                                ObserverAuthorityType;                                    // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BattlEyeDisabled : 1;                                     // 0x00B4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TPAntibotDisabled : 1;                                    // 0x00B5(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EACDisabled : 1;                                          // 0x00B6(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsSuspect : 1;                                            // 0x00B7(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DisallowVoiceChat : 1;                                    // 0x00B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBypassAnticheat : 1;                                    // 0x00B9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	struct FString                                     AccountId;                                                // 0x00C0(0x0010) (CPF_ZeroConstructor)
	int                                                v1;                                                       // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                v2;                                                       // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                V3;                                                       // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                V4;                                                       // 0x00DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuUdpEncryptionKey                         UdpEncryptionKey;                                         // 0x00E0(0x0030)
	TArray<struct FWuStringStringPair>                 CustomParameters;                                         // 0x0110(0x0010) (CPF_ZeroConstructor)
	float                                              BpBoost;                                                  // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XpBoost;                                                  // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentDailyXp;                                           // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsMaxLevel : 1;                                           // 0x012C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	TArray<struct FWuStringIntPair>                    StatTrakDataPairs;                                        // 0x0130(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuCustomizableObjectIdPair
// 0x0020
struct FWuCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectKey;                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomizableObjectValue;                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslPsnLog
// 0x0038
struct FTslPsnLog
{
	struct FString                                     FunctionName;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      isSuccessful : 1;                                         // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     failResult;                                               // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     additionalData;                                           // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.BluezoneDataRow
// 0x0060 (0x0068 - 0x0008)
struct FBluezoneDataRow : public FTableRowBase
{
	float                                              StartDelay;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarningDuration;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleaseDuration;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiusRate;                                               // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomRadiusRate;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasDPS;                                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadRatio;                                              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageMagnifierForDistance;                               // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageMagnifier;                                          // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TAssetPtr<class UCurveFloat>                       DamageMagnifierCurve;                                     // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0050(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.BluezoneDataRow.BluezoneType
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                CircleAlgorithm;                                          // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandRatio;                                                // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FastPlayerCount;                                          // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FastReleaseDuration;                                      // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FastWarningDuration;                                      // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MapLocationZoomTableRow
// 0x0020 (0x0028 - 0x0008)
struct FMapLocationZoomTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MapLocationZoomTableRow.LocationType
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<unsigned char>                              VisibilityByZoom;                                         // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              DesiredAlpha;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                DesiredFontSize;                                          // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslLobbySceneDataPair
// 0x0018
struct FTslLobbySceneDataPair
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TslGame.PathPair
// 0x0010
struct FPathPair
{
	struct FVector2D                                   StartPosition;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   EndPosition;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MaterialParametersData
// 0x0020
struct FMaterialParametersData
{
	TArray<struct FLinearColor>                        Vectors;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<class UTexture*>                            Textures;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.InventoryItem
// 0x0010
struct FInventoryItem
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UItem*                                       Item;                                                     // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleSpawnDataRow
// 0x0020 (0x0028 - 0x0008)
struct FVehicleSpawnDataRow : public FTableRowBase
{
	struct FName                                       CategoryFilter;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SubCategoryFilter;                                        // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Vehicle;                                                  // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSnapToFloor : 1;                                         // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslSplinePoint
// 0x001C
struct FTslSplinePoint
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct TslGame.RecoilDebugInfo
// 0x0028
struct FRecoilDebugInfo
{
	float                                              RecoilValue;                                              // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVertical;                                           // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizontal;                                         // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilTargetPitch;                                        // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilTargetYaw;                                          // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryTarget;                                     // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVerticalDelta;                                      // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizontalDelta;                                    // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilCharacterPitch;                                     // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilWeaponPitch;                                        // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WheelContactData
// 0x0006
struct FWheelContactData
{

};

// ScriptStruct TslGame.TslPointDamageEvent
// 0x0008 (0x00B8 - 0x00B0)
struct FTslPointDamageEvent : public FPointDamageEvent
{
	unsigned char                                      bDestructibleDoor : 1;                                    // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
