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

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType
{
	ECustomizableObjectProjectorType__Planar = 0,
	ECustomizableObjectProjectorType__Cylindrical = 1,
	ECustomizableObjectProjectorType__ECustomizableObjectProjectorType_MAX = 2
};


// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType
{
	EMutableCompileMeshType__Full  = 0,
	EMutableCompileMeshType__Local = 1,
	EMutableCompileMeshType__LocalAndChildren = 2,
	EMutableCompileMeshType__AddWorkingSetNoChildren = 3,
	EMutableCompileMeshType__AddWorkingSetAndChildren = 4,
	EMutableCompileMeshType__EMutableCompileMeshType_MAX = 5
};


// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4
};


// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType
{
	EMutableParameterType__None    = 0,
	EMutableParameterType__Bool    = 1,
	EMutableParameterType__Int     = 2,
	EMutableParameterType__Float   = 3,
	EMutableParameterType__Color   = 4,
	EMutableParameterType__Projector = 5,
	EMutableParameterType__Texture = 6,
	EMutableParameterType__EMutableParameterType_MAX = 7
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy
{
	ECustomizableObjectRelevancy__All = 0,
	ECustomizableObjectRelevancy__ClientOnly = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// 0x0028
struct FCustomizableObjectBoolParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      ParameterValue : 1;                                       // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Uid;                                                      // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// 0x0030
struct FCustomizableObjectIntParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FString                                     ParameterValueName;                                       // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Uid;                                                      // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// 0x0028
struct FCustomizableObjectFloatParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Uid;                                                      // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectTextureParameterValue
// 0x0028
struct FCustomizableObjectTextureParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	uint64_t                                           ParameterValue;                                           // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FString                                     Uid;                                                      // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// 0x0030
struct FCustomizableObjectVectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	struct FString                                     Uid;                                                      // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// 0x0038
struct FCustomizableObjectProjector
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x0018(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0024(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty CustomizableObject.CustomizableObjectProjector.ProjectionType
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Angle;                                                    // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// 0x0058
struct FCustomizableObjectProjectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FCustomizableObjectProjector                Value;                                                    // 0x0010(0x0038) (CPF_Edit, CPF_EditConst)
	struct FString                                     Uid;                                                      // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.GeneratedTexture
// 0x0020
struct FGeneratedTexture
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.GeneratedMaterial
// 0x0010
struct FGeneratedMaterial
{
	TArray<struct FGeneratedTexture>                   Textures;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.GeneratedMesh
// 0x0010
struct FGeneratedMesh
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.ParameterDecorations
// 0x0010
struct FParameterDecorations
{
	TArray<class UTexture2D*>                          Images;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
// 0x0020
struct FMutableModelImageProperties
{
	struct FString                                     TextureParameterName;                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	unsigned char                                      SRGB : 1;                                                 // 0x0014(0x0001)
	unsigned char                                      bDitherMipMapAlpha : 1;                                   // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                LODBias;                                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// 0x0020
struct FCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CompilationOptions
// 0x0020
struct FCompilationOptions
{
	unsigned char                                      bPackaging : 1;                                           // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTextureCompression : 1;                                  // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                OptimizationLevel;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectExportOptions
// 0x0018
struct FCustomizableObjectExportOptions
{
	unsigned char                                      bTextureCompression : 1;                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     TargetPlatform;                                           // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
// 0x0018
struct FMutableModelParameterValue
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.MutableParamUIMetadata
// 0x00E8
struct FMutableParamUIMetadata
{
	struct FString                                     ObjectFriendlyName;                                       // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     UISectionName;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                UIOrder;                                                  // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        UIThumbnail;                                              // 0x0028(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TMap<struct FString, struct FString>               ExtraInformation;                                         // 0x0048(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TMap<struct FString, TAssetPtr<class UObject>>     ExtraAssets;                                              // 0x0098(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// 0x0110
struct FMutableModelParameterProperties
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty CustomizableObject.MutableModelParameterProperties.Type
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ImageDescriptionCount;                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMutableModelParameterValue>         PossibleValues;                                           // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0028(0x00E8)
};

// ScriptStruct CustomizableObject.IntegerParameterUIData
// 0x00F8
struct FIntegerParameterUIData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0010(0x00E8) (CPF_BlueprintVisible)
};

// ScriptStruct CustomizableObject.ParameterUIData
// 0x0118
struct FParameterUIData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0010(0x00E8) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00F8(0x0001) UNKNOWN PROPERTY: EnumProperty CustomizableObject.ParameterUIData.Type
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FIntegerParameterUIData>             ArrayIntegerParameterOption;                              // 0x0100(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	TEnumAsByte<ECustomizableObjectGroupType>          IntegerParameterGroupType;                                // 0x0110(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
// 0x0010
struct FPendingReleaseSkeletalMeshInfo
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	double                                             Timestamp;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// 0x0030
struct FCustomizableObjectIdentifier
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Guid;                                                     // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// 0x0010
struct FCustomizedMaterialTexture2D
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
