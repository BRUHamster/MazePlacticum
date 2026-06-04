// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project/MazeGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMazeGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PROJECT_API UClass* Z_Construct_UClass_AMazeGenerator();
PROJECT_API UClass* Z_Construct_UClass_AMazeGenerator_NoRegister();
PROJECT_API UEnum* Z_Construct_UEnum_Project_EMazeStartMode();
PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMazeCell();
UPackage* Z_Construct_UPackage__Script_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMazeStartMode ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMazeStartMode;
static UEnum* EMazeStartMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMazeStartMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMazeStartMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Project_EMazeStartMode, (UObject*)Z_Construct_UPackage__Script_Project(), TEXT("EMazeStartMode"));
	}
	return Z_Registration_Info_UEnum_EMazeStartMode.OuterSingleton;
}
template<> PROJECT_API UEnum* StaticEnum<EMazeStartMode>()
{
	return EMazeStartMode_StaticEnum();
}
struct Z_Construct_UEnum_Project_EMazeStartMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EMazeStartMode::Center" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \xd0\xa0\xd0\xb5\xd0\xb6\xd0\xb8\xd0\xbc \xd0\xb2\xd1\x8b\xd0\xb1\xd0\xbe\xd1\x80\xd0\xb0 \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xbe\xd0\xb2\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8.\n * \xd0\xad\xd1\x82\xd0\xbe \xd1\x83\xd0\xb4\xd0\xbe\xd0\xb1\xd0\xbd\xd0\xbe \xd0\xbf\xd0\xbe\xd0\xba\xd0\xb0\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xbd\xd0\xb0 \xd0\xb7\xd0\xb0\xd1\x89\xd0\xb8\xd1\x82\xd0\xb5: \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbc\xd0\xb5\xd0\xbd\xd1\x8f\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82 \xd0\xb8 \xd0\xbf\xd0\xbe\xd0\xbb\xd1\x83\xd1\x87\xd0\xb0\xd1\x82\xd1\x8c \xd1\x80\xd0\xb0\xd0\xb7\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xb2\xd0\xb0\xd1\x80\xd0\xb8\xd0\xb0\xd0\xbd\xd1\x82\xd1\x8b \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EMazeStartMode::Random" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\xa0\xd0\xb5\xd0\xb6\xd0\xb8\xd0\xbc \xd0\xb2\xd1\x8b\xd0\xb1\xd0\xbe\xd1\x80\xd0\xb0 \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xbe\xd0\xb2\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8.\n* \xd0\xad\xd1\x82\xd0\xbe \xd1\x83\xd0\xb4\xd0\xbe\xd0\xb1\xd0\xbd\xd0\xbe \xd0\xbf\xd0\xbe\xd0\xba\xd0\xb0\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xbd\xd0\xb0 \xd0\xb7\xd0\xb0\xd1\x89\xd0\xb8\xd1\x82\xd0\xb5: \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbc\xd0\xb5\xd0\xbd\xd1\x8f\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82 \xd0\xb8 \xd0\xbf\xd0\xbe\xd0\xbb\xd1\x83\xd1\x87\xd0\xb0\xd1\x82\xd1\x8c \xd1\x80\xd0\xb0\xd0\xb7\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xb2\xd0\xb0\xd1\x80\xd0\xb8\xd0\xb0\xd0\xbd\xd1\x82\xd1\x8b \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0." },
#endif
		{ "TopLeft.DisplayName", "Top Left" },
		{ "TopLeft.Name", "EMazeStartMode::TopLeft" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMazeStartMode::Random", (int64)EMazeStartMode::Random },
		{ "EMazeStartMode::TopLeft", (int64)EMazeStartMode::TopLeft },
		{ "EMazeStartMode::Center", (int64)EMazeStartMode::Center },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Project_EMazeStartMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Project,
	nullptr,
	"EMazeStartMode",
	"EMazeStartMode",
	Z_Construct_UEnum_Project_EMazeStartMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Project_EMazeStartMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Project_EMazeStartMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Project_EMazeStartMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Project_EMazeStartMode()
{
	if (!Z_Registration_Info_UEnum_EMazeStartMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMazeStartMode.InnerSingleton, Z_Construct_UEnum_Project_EMazeStartMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMazeStartMode.InnerSingleton;
}
// ********** End Enum EMazeStartMode **************************************************************

// ********** Begin ScriptStruct FMazeCell *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMazeCell;
class UScriptStruct* FMazeCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMazeCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMazeCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMazeCell, (UObject*)Z_Construct_UPackage__Script_Project(), TEXT("MazeCell"));
	}
	return Z_Registration_Info_UScriptStruct_FMazeCell.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMazeCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \xd0\x9e\xd0\xb4\xd0\xbd\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n *\n * \xd0\x9b\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82 \xd1\x85\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x82\xd1\x81\xd1\x8f \xd0\xba\xd0\xb0\xd0\xba \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xbe\xd0\xba.\n * \xd0\xa3 \xd0\xba\xd0\xb0\xd0\xb6\xd0\xb4\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb5\xd1\x81\xd1\x82\xd1\x8c \xd0\xba\xd0\xbe\xd0\xbe\xd1\x80\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd1\x82\xd1\x8b X/Y, \xd1\x84\xd0\xbb\xd0\xb0\xd0\xb3 \xd0\xbf\xd0\xbe\xd1\x81\xd0\xb5\xd1\x89\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xb8 4 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b.\n *\n * \xd0\x92 \xd0\xbd\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd0\xb5 \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb2\xd1\x81\xd0\xb5 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b \xd0\xb2\xd0\xba\xd0\xbb\xd1\x8e\xd1\x87\xd0\xb5\xd0\xbd\xd1\x8b.\n * \xd0\x90\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc DFS \xd0\xbf\xd0\xbe\xd1\x81\xd1\x82\xd0\xb5\xd0\xbf\xd0\xb5\xd0\xbd\xd0\xbd\xd0\xbe \"\xd0\xbf\xd1\x80\xd0\xbe\xd1\x80\xd1\x83\xd0\xb1\xd0\xb0\xd0\xb5\xd1\x82\" \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b \xd0\xbc\xd0\xb5\xd0\xb6\xd0\xb4\xd1\x83 \xd1\x81\xd0\xbe\xd1\x81\xd0\xb5\xd0\xb4\xd0\xbd\xd0\xb8\xd0\xbc\xd0\xb8 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd0\xbc\xd0\xb8.\n */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x9e\xd0\xb4\xd0\xbd\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n*\n* \xd0\x9b\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82 \xd1\x85\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x82\xd1\x81\xd1\x8f \xd0\xba\xd0\xb0\xd0\xba \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xbe\xd0\xba.\n* \xd0\xa3 \xd0\xba\xd0\xb0\xd0\xb6\xd0\xb4\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb5\xd1\x81\xd1\x82\xd1\x8c \xd0\xba\xd0\xbe\xd0\xbe\xd1\x80\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd1\x82\xd1\x8b X/Y, \xd1\x84\xd0\xbb\xd0\xb0\xd0\xb3 \xd0\xbf\xd0\xbe\xd1\x81\xd0\xb5\xd1\x89\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xb8 4 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b.\n*\n* \xd0\x92 \xd0\xbd\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd0\xb5 \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb2\xd1\x81\xd0\xb5 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b \xd0\xb2\xd0\xba\xd0\xbb\xd1\x8e\xd1\x87\xd0\xb5\xd0\xbd\xd1\x8b.\n* \xd0\x90\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc DFS \xd0\xbf\xd0\xbe\xd1\x81\xd1\x82\xd0\xb5\xd0\xbf\xd0\xb5\xd0\xbd\xd0\xbd\xd0\xbe \"\xd0\xbf\xd1\x80\xd0\xbe\xd1\x80\xd1\x83\xd0\xb1\xd0\xb0\xd0\xb5\xd1\x82\" \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b \xd0\xbc\xd0\xb5\xd0\xb6\xd0\xb4\xd1\x83 \xd1\x81\xd0\xbe\xd1\x81\xd0\xb5\xd0\xb4\xd0\xbd\xd0\xb8\xd0\xbc\xd0\xb8 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd0\xbc\xd0\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "MazeCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9a\xd0\xbe\xd0\xbe\xd1\x80\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd1\x82\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb2 \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd0\xb5 \xd0\xbf\xd0\xbe \xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd0\xb7\xd0\xbe\xd0\xbd\xd1\x82\xd0\xb0\xd0\xbb\xd0\xb8.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9a\xd0\xbe\xd0\xbe\xd1\x80\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd1\x82\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb2 \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd0\xb5 \xd0\xbf\xd0\xbe \xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd0\xb7\xd0\xbe\xd0\xbd\xd1\x82\xd0\xb0\xd0\xbb\xd0\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "MazeCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9a\xd0\xbe\xd0\xbe\xd1\x80\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd1\x82\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb2 \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd0\xb5 \xd0\xbf\xd0\xbe \xd0\xb2\xd0\xb5\xd1\x80\xd1\x82\xd0\xb8\xd0\xba\xd0\xb0\xd0\xbb\xd0\xb8.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9a\xd0\xbe\xd0\xbe\xd1\x80\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd1\x82\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb2 \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd0\xb5 \xd0\xbf\xd0\xbe \xd0\xb2\xd0\xb5\xd1\x80\xd1\x82\xd0\xb8\xd0\xba\xd0\xb0\xd0\xbb\xd0\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisited_MetaData[] = {
		{ "Category", "MazeCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x91\xd1\x8b\xd0\xbb\xd0\xb0 \xd0\xbb\xd0\xb8 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0 \xd0\xbf\xd0\xbe\xd1\x81\xd0\xb5\xd1\x89\xd0\xb5\xd0\xbd\xd0\xb0 \xd0\xb0\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc\xd0\xbe\xd0\xbc DFS.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x91\xd1\x8b\xd0\xbb\xd0\xb0 \xd0\xbb\xd0\xb8 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0 \xd0\xbf\xd0\xbe\xd1\x81\xd0\xb5\xd1\x89\xd0\xb5\xd0\xbd\xd0\xb0 \xd0\xb0\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc\xd0\xbe\xd0\xbc DFS." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWallTop_MetaData[] = {
		{ "Category", "MazeCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xb2\xd0\xb5\xd1\x80\xd1\x85\xd1\x83.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xb2\xd0\xb5\xd1\x80\xd1\x85\xd1\x83." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWallRight_MetaData[] = {
		{ "Category", "MazeCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xbf\xd1\x80\xd0\xb0\xd0\xb2\xd0\xb0.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xbf\xd1\x80\xd0\xb0\xd0\xb2\xd0\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWallBottom_MetaData[] = {
		{ "Category", "MazeCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xbd\xd0\xb8\xd0\xb7\xd1\x83.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xbd\xd0\xb8\xd0\xb7\xd1\x83." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWallLeft_MetaData[] = {
		{ "Category", "MazeCell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xbb\xd0\xb5\xd0\xb2\xd0\xb0.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa1\xd1\x82\xd0\xb5\xd0\xbd\xd0\xb0 \xd1\x81\xd0\xbb\xd0\xb5\xd0\xb2\xd0\xb0." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_bVisited_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisited;
	static void NewProp_bWallTop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallTop;
	static void NewProp_bWallRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallRight;
	static void NewProp_bWallBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallBottom;
	static void NewProp_bWallLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMazeCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMazeCell, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMazeCell, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
void Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited_SetBit(void* Obj)
{
	((FMazeCell*)Obj)->bVisited = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited = { "bVisited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMazeCell), &Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisited_MetaData), NewProp_bVisited_MetaData) };
void Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallTop_SetBit(void* Obj)
{
	((FMazeCell*)Obj)->bWallTop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallTop = { "bWallTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMazeCell), &Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallTop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWallTop_MetaData), NewProp_bWallTop_MetaData) };
void Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallRight_SetBit(void* Obj)
{
	((FMazeCell*)Obj)->bWallRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallRight = { "bWallRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMazeCell), &Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWallRight_MetaData), NewProp_bWallRight_MetaData) };
void Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallBottom_SetBit(void* Obj)
{
	((FMazeCell*)Obj)->bWallBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallBottom = { "bWallBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMazeCell), &Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWallBottom_MetaData), NewProp_bWallBottom_MetaData) };
void Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallLeft_SetBit(void* Obj)
{
	((FMazeCell*)Obj)->bWallLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallLeft = { "bWallLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMazeCell), &Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWallLeft_MetaData), NewProp_bWallLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMazeCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bWallLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMazeCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Project,
	nullptr,
	&NewStructOps,
	"MazeCell",
	Z_Construct_UScriptStruct_FMazeCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::PropPointers),
	sizeof(FMazeCell),
	alignof(FMazeCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMazeCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMazeCell()
{
	if (!Z_Registration_Info_UScriptStruct_FMazeCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMazeCell.InnerSingleton, Z_Construct_UScriptStruct_FMazeCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMazeCell.InnerSingleton;
}
// ********** End ScriptStruct FMazeCell ***********************************************************

// ********** Begin Class AMazeGenerator Function ClearMaze ****************************************
struct Z_Construct_UFunction_AMazeGenerator_ClearMaze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Maze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x9e\xd1\x87\xd0\xb8\xd1\x81\xd1\x82\xd0\xba\xd0\xb0 \xd1\x83\xd0\xb6\xd0\xb5 \xd0\xbf\xd0\xbe\xd1\x81\xd1\x82\xd1\x80\xd0\xbe\xd0\xb5\xd0\xbd\xd0\xbd\xd0\xbe\xd0\xb3\xd0\xbe \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0:\n     * \xd1\x83\xd0\xb4\xd0\xb0\xd0\xbb\xd1\x8f\xd1\x8e\xd1\x82\xd1\x81\xd1\x8f \xd0\xb2\xd1\x81\xd0\xb5 instances \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0, \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd0\xb8 \xd0\xbc\xd0\xb0\xd1\x80\xd0\xba\xd0\xb5\xd1\x80\xd0\xbe\xd0\xb2.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x9e\xd1\x87\xd0\xb8\xd1\x81\xd1\x82\xd0\xba\xd0\xb0 \xd1\x83\xd0\xb6\xd0\xb5 \xd0\xbf\xd0\xbe\xd1\x81\xd1\x82\xd1\x80\xd0\xbe\xd0\xb5\xd0\xbd\xd0\xbd\xd0\xbe\xd0\xb3\xd0\xbe \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0:\n* \xd1\x83\xd0\xb4\xd0\xb0\xd0\xbb\xd1\x8f\xd1\x8e\xd1\x82\xd1\x81\xd1\x8f \xd0\xb2\xd1\x81\xd0\xb5 instances \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0, \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd0\xb8 \xd0\xbc\xd0\xb0\xd1\x80\xd0\xba\xd0\xb5\xd1\x80\xd0\xbe\xd0\xb2." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeGenerator_ClearMaze_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMazeGenerator, nullptr, "ClearMaze", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeGenerator_ClearMaze_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMazeGenerator_ClearMaze_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMazeGenerator_ClearMaze()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeGenerator_ClearMaze_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMazeGenerator::execClearMaze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMaze();
	P_NATIVE_END;
}
// ********** End Class AMazeGenerator Function ClearMaze ******************************************

// ********** Begin Class AMazeGenerator Function DrawDebugMaze ************************************
struct Z_Construct_UFunction_AMazeGenerator_DrawDebugMaze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Maze|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Debug-\xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xbe\xd0\xba \xd0\xb8 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd1\x87\xd0\xb5\xd1\x80\xd0\xb5\xd0\xb7 DrawDebugLine / DrawDebugBox.\n     * \xd0\xad\xd1\x82\xd0\xbe \xd0\xb2\xd0\xb0\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb7\xd0\xb0\xd0\xb4\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x8f: \xd1\x82\xd1\x80\xd0\xb5\xd0\xb1\xd1\x83\xd0\xb5\xd1\x82\xd1\x81\xd1\x8f \xd0\xbd\xd0\xb0\xd0\xb3\xd0\xbb\xd1\x8f\xd0\xb4\xd0\xbd\xd0\xb0\xd1\x8f \xd0\xb4\xd0\xb5\xd0\xbc\xd0\xbe\xd0\xbd\xd1\x81\xd1\x82\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd1\x8f \xd1\x80\xd0\xb0\xd0\xb1\xd0\xbe\xd1\x82\xd1\x8b \xd0\xb0\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc\xd0\xb0.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Debug-\xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb0 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xbe\xd0\xba \xd0\xb8 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd1\x87\xd0\xb5\xd1\x80\xd0\xb5\xd0\xb7 DrawDebugLine / DrawDebugBox.\n* \xd0\xad\xd1\x82\xd0\xbe \xd0\xb2\xd0\xb0\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb7\xd0\xb0\xd0\xb4\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x8f: \xd1\x82\xd1\x80\xd0\xb5\xd0\xb1\xd1\x83\xd0\xb5\xd1\x82\xd1\x81\xd1\x8f \xd0\xbd\xd0\xb0\xd0\xb3\xd0\xbb\xd1\x8f\xd0\xb4\xd0\xbd\xd0\xb0\xd1\x8f \xd0\xb4\xd0\xb5\xd0\xbc\xd0\xbe\xd0\xbd\xd1\x81\xd1\x82\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd1\x8f \xd1\x80\xd0\xb0\xd0\xb1\xd0\xbe\xd1\x82\xd1\x8b \xd0\xb0\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc\xd0\xb0." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeGenerator_DrawDebugMaze_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMazeGenerator, nullptr, "DrawDebugMaze", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeGenerator_DrawDebugMaze_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMazeGenerator_DrawDebugMaze_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMazeGenerator_DrawDebugMaze()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeGenerator_DrawDebugMaze_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMazeGenerator::execDrawDebugMaze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugMaze();
	P_NATIVE_END;
}
// ********** End Class AMazeGenerator Function DrawDebugMaze **************************************

// ********** Begin Class AMazeGenerator Function GenerateMaze *************************************
struct Z_Construct_UFunction_AMazeGenerator_GenerateMaze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Maze" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x9e\xd1\x81\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xbd\xd0\xb0\xd1\x8f \xd0\xbf\xd1\x83\xd0\xb1\xd0\xbb\xd0\xb8\xd1\x87\xd0\xbd\xd0\xb0\xd1\x8f \xd1\x84\xd1\x83\xd0\xbd\xd0\xba\xd1\x86\xd0\xb8\xd1\x8f \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8.\n     * \xd0\x95\xd1\x91 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb2\xd1\x8b\xd0\xb7\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xb8\xd0\xb7 Blueprint \xd0\xb8\xd0\xbb\xd0\xb8 \xd0\xb8\xd0\xb7 Details Panel, \xd0\xbf\xd0\xbe\xd1\x82\xd0\xbe\xd0\xbc\xd1\x83 \xd1\x87\xd1\x82\xd0\xbe \xd0\xb5\xd1\x81\xd1\x82\xd1\x8c CallInEditor.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x9e\xd1\x81\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xbd\xd0\xb0\xd1\x8f \xd0\xbf\xd1\x83\xd0\xb1\xd0\xbb\xd0\xb8\xd1\x87\xd0\xbd\xd0\xb0\xd1\x8f \xd1\x84\xd1\x83\xd0\xbd\xd0\xba\xd1\x86\xd0\xb8\xd1\x8f \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8.\n* \xd0\x95\xd1\x91 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb2\xd1\x8b\xd0\xb7\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xb8\xd0\xb7 Blueprint \xd0\xb8\xd0\xbb\xd0\xb8 \xd0\xb8\xd0\xb7 Details Panel, \xd0\xbf\xd0\xbe\xd1\x82\xd0\xbe\xd0\xbc\xd1\x83 \xd1\x87\xd1\x82\xd0\xbe \xd0\xb5\xd1\x81\xd1\x82\xd1\x8c CallInEditor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeGenerator_GenerateMaze_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMazeGenerator, nullptr, "GenerateMaze", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeGenerator_GenerateMaze_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMazeGenerator_GenerateMaze_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMazeGenerator_GenerateMaze()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeGenerator_GenerateMaze_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMazeGenerator::execGenerateMaze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateMaze();
	P_NATIVE_END;
}
// ********** End Class AMazeGenerator Function GenerateMaze ***************************************

// ********** Begin Class AMazeGenerator ***********************************************************
void AMazeGenerator::StaticRegisterNativesAMazeGenerator()
{
	UClass* Class = AMazeGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearMaze", &AMazeGenerator::execClearMaze },
		{ "DrawDebugMaze", &AMazeGenerator::execDrawDebugMaze },
		{ "GenerateMaze", &AMazeGenerator::execGenerateMaze },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMazeGenerator;
UClass* AMazeGenerator::GetPrivateStaticClass()
{
	using TClass = AMazeGenerator;
	if (!Z_Registration_Info_UClass_AMazeGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MazeGenerator"),
			Z_Registration_Info_UClass_AMazeGenerator.InnerSingleton,
			StaticRegisterNativesAMazeGenerator,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMazeGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_AMazeGenerator_NoRegister()
{
	return AMazeGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMazeGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \xd0\x93\xd0\xbb\xd0\xb0\xd0\xb2\xd0\xbd\xd1\x8b\xd0\xb9 Actor-\xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x82\xd0\xbe\xd1\x80 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n *\n * \xd0\x95\xd0\xb3\xd0\xbe \xd0\xbd\xd1\x83\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbf\xd0\xbe\xd1\x81\xd1\x82\xd0\xb0\xd0\xb2\xd0\xb8\xd1\x82\xd1\x8c \xd0\xbd\xd0\xb0 \xd1\x83\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb5\xd0\xbd\xd1\x8c \xd0\xb2 Unreal Editor.\n * \xd0\x92 Details Panel \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbc\xd0\xb5\xd0\xbd\xd1\x8f\xd1\x82\xd1\x8c \xd1\x80\xd0\xb0\xd0\xb7\xd0\xbc\xd0\xb5\xd1\x80\xd1\x8b, seed, debug-\xd1\x80\xd0\xb5\xd0\xb6\xd0\xb8\xd0\xbc \xd0\xb8 \xd0\xbc\xd0\xbe\xd0\xb4\xd0\xb8\xd1\x84\xd0\xb8\xd0\xba\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb0\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc\xd0\xb0.\n *\n * \xd0\x92\xd0\x90\xd0\x96\xd0\x9d\xd0\x9e:\n * \xd0\x97\xd0\xb0\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c YOURPROJECT_API \xd0\xbd\xd0\xb0 API-\xd0\xbc\xd0\xb0\xd0\xba\xd1\x80\xd0\xbe\xd1\x81 \xd1\x81\xd0\xb2\xd0\xbe\xd0\xb5\xd0\xb3\xd0\xbe \xd0\xbf\xd1\x80\xd0\xbe\xd0\xb5\xd0\xba\xd1\x82\xd0\xb0.\n * \xd0\x9d\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb8\xd0\xbc\xd0\xb5\xd1\x80, \xd0\xb5\xd1\x81\xd0\xbb\xd0\xb8 \xd0\xbf\xd1\x80\xd0\xbe\xd0\xb5\xd0\xba\xd1\x82 \xd0\xbd\xd0\xb0\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd0\xb5\xd1\x82\xd1\x81\xd1\x8f MazeHomework:\n * class MAZEHOMEWORK_API AMazeGenerator : public AActor\n */" },
#endif
		{ "IncludePath", "MazeGenerator.h" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x93\xd0\xbb\xd0\xb0\xd0\xb2\xd0\xbd\xd1\x8b\xd0\xb9 Actor-\xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x82\xd0\xbe\xd1\x80 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n*\n* \xd0\x95\xd0\xb3\xd0\xbe \xd0\xbd\xd1\x83\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbf\xd0\xbe\xd1\x81\xd1\x82\xd0\xb0\xd0\xb2\xd0\xb8\xd1\x82\xd1\x8c \xd0\xbd\xd0\xb0 \xd1\x83\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb5\xd0\xbd\xd1\x8c \xd0\xb2 Unreal Editor.\n* \xd0\x92 Details Panel \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbc\xd0\xb5\xd0\xbd\xd1\x8f\xd1\x82\xd1\x8c \xd1\x80\xd0\xb0\xd0\xb7\xd0\xbc\xd0\xb5\xd1\x80\xd1\x8b, seed, debug-\xd1\x80\xd0\xb5\xd0\xb6\xd0\xb8\xd0\xbc \xd0\xb8 \xd0\xbc\xd0\xbe\xd0\xb4\xd0\xb8\xd1\x84\xd0\xb8\xd0\xba\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb0\xd0\xbb\xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd1\x82\xd0\xbc\xd0\xb0.\n*\n* \xd0\x92\xd0\x90\xd0\x96\xd0\x9d\xd0\x9e:\n* \xd0\x97\xd0\xb0\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c YOURPROJECT_API \xd0\xbd\xd0\xb0 API-\xd0\xbc\xd0\xb0\xd0\xba\xd1\x80\xd0\xbe\xd1\x81 \xd1\x81\xd0\xb2\xd0\xbe\xd0\xb5\xd0\xb3\xd0\xbe \xd0\xbf\xd1\x80\xd0\xbe\xd0\xb5\xd0\xba\xd1\x82\xd0\xb0.\n* \xd0\x9d\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb8\xd0\xbc\xd0\xb5\xd1\x80, \xd0\xb5\xd1\x81\xd0\xbb\xd0\xb8 \xd0\xbf\xd1\x80\xd0\xbe\xd0\xb5\xd0\xba\xd1\x82 \xd0\xbd\xd0\xb0\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd0\xb5\xd1\x82\xd1\x81\xd1\x8f MazeHomework:\n* class MAZEHOMEWORK_API AMazeGenerator : public AActor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Maze|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x9a\xd0\xbe\xd1\x80\xd0\xbd\xd0\xb5\xd0\xb2\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbe\xd0\xbc\xd0\xbf\xd0\xbe\xd0\xbd\xd0\xb5\xd0\xbd\xd1\x82 Actor'\xd0\xb0.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x9a\xd0\xbe\xd1\x80\xd0\xbd\xd0\xb5\xd0\xb2\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbe\xd0\xbc\xd0\xbf\xd0\xbe\xd0\xbd\xd0\xb5\xd0\xbd\xd1\x82 Actor'\xd0\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorInstances_MetaData[] = {
		{ "Category", "Maze|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * InstancedStaticMeshComponent \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0.\n     * \xd0\x9e\xd0\xbd \xd1\x8d\xd1\x84\xd1\x84\xd0\xb5\xd0\xba\xd1\x82\xd0\xb8\xd0\xb2\xd0\xbd\xd0\xb5\xd0\xb5, \xd1\x87\xd0\xb5\xd0\xbc \xd1\x81\xd0\xbe\xd0\xb7\xd0\xb4\xd0\xb0\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xbe\xd1\x82\xd0\xb4\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb9 Actor \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xba\xd0\xb0\xd0\xb6\xd0\xb4\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* InstancedStaticMeshComponent \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0.\n* \xd0\x9e\xd0\xbd \xd1\x8d\xd1\x84\xd1\x84\xd0\xb5\xd0\xba\xd1\x82\xd0\xb8\xd0\xb2\xd0\xbd\xd0\xb5\xd0\xb5, \xd1\x87\xd0\xb5\xd0\xbc \xd1\x81\xd0\xbe\xd0\xb7\xd0\xb4\xd0\xb0\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xbe\xd1\x82\xd0\xb4\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb9 Actor \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xba\xd0\xb0\xd0\xb6\xd0\xb4\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallInstances_MetaData[] = {
		{ "Category", "Maze|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * InstancedStaticMeshComponent \xd0\xb4\xd0\xbb\xd1\x8f \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd.\n     * \xd0\x92\xd1\x81\xd0\xb5 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b \xe2\x80\x94 \xd1\x8d\xd1\x82\xd0\xbe instances \xd0\xbe\xd0\xb4\xd0\xbd\xd0\xbe\xd0\xb3\xd0\xbe \xd0\xbc\xd0\xb5\xd1\x88\xd0\xb0.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* InstancedStaticMeshComponent \xd0\xb4\xd0\xbb\xd1\x8f \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd.\n* \xd0\x92\xd1\x81\xd0\xb5 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b \xe2\x80\x94 \xd1\x8d\xd1\x82\xd0\xbe instances \xd0\xbe\xd0\xb4\xd0\xbd\xd0\xbe\xd0\xb3\xd0\xbe \xd0\xbc\xd0\xb5\xd1\x88\xd0\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerInstances_MetaData[] = {
		{ "Category", "Maze|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * InstancedStaticMeshComponent \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xbc\xd0\xb0\xd1\x80\xd0\xba\xd0\xb5\xd1\x80\xd0\xbe\xd0\xb2 \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xb0/\xd0\xb2\xd1\x8b\xd1\x85\xd0\xbe\xd0\xb4\xd0\xb0.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* InstancedStaticMeshComponent \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xbc\xd0\xb0\xd1\x80\xd0\xba\xd0\xb5\xd1\x80\xd0\xbe\xd0\xb2 \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xb0/\xd0\xb2\xd1\x8b\xd1\x85\xd0\xbe\xd0\xb4\xd0\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Maze|Generation" },
		{ "ClampMax", "200" },
		{ "ClampMin", "2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa8\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd0\xb0 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0 \xd0\xb2 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd1\x85.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa8\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd0\xb0 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0 \xd0\xb2 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd1\x85." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Maze|Generation" },
		{ "ClampMax", "200" },
		{ "ClampMin", "2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x92\xd1\x8b\xd1\x81\xd0\xbe\xd1\x82\xd0\xb0 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0 \xd0\xb2 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd1\x85.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x92\xd1\x8b\xd1\x81\xd0\xbe\xd1\x82\xd0\xb0 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0 \xd0\xb2 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd1\x85." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Maze|Generation" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa0\xd0\xb0\xd0\xb7\xd0\xbc\xd0\xb5\xd1\x80 \xd0\xbe\xd0\xb4\xd0\xbd\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb2 Unreal units.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa0\xd0\xb0\xd0\xb7\xd0\xbc\xd0\xb5\xd1\x80 \xd0\xbe\xd0\xb4\xd0\xbd\xd0\xbe\xd0\xb9 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xb2 Unreal units." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Maze|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Seed \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8.\n     * \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 bUseRandomSeed = false, \xd0\xbe\xd0\xb4\xd0\xb8\xd0\xbd \xd0\xb8 \xd1\x82\xd0\xbe\xd1\x82 \xd0\xb6\xd0\xb5 Seed \xd0\xb4\xd0\xb0\xd1\x91\xd1\x82 \xd0\xbe\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd0\xba\xd0\xbe\xd0\xb2\xd1\x8b\xd0\xb9 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82.\n     * \xd0\xad\xd1\x82\xd0\xbe \xd1\x83\xd0\xb4\xd0\xbe\xd0\xb1\xd0\xbd\xd0\xbe \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb4\xd0\xb5\xd0\xbc\xd0\xbe\xd0\xbd\xd1\x81\xd1\x82\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb8 \xd0\xbe\xd1\x82\xd0\xbb\xd0\xb0\xd0\xb4\xd0\xba\xd0\xb8.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Seed \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8.\n* \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 bUseRandomSeed = false, \xd0\xbe\xd0\xb4\xd0\xb8\xd0\xbd \xd0\xb8 \xd1\x82\xd0\xbe\xd1\x82 \xd0\xb6\xd0\xb5 Seed \xd0\xb4\xd0\xb0\xd1\x91\xd1\x82 \xd0\xbe\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb0\xd0\xba\xd0\xbe\xd0\xb2\xd1\x8b\xd0\xb9 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82.\n* \xd0\xad\xd1\x82\xd0\xbe \xd1\x83\xd0\xb4\xd0\xbe\xd0\xb1\xd0\xbd\xd0\xbe \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb4\xd0\xb5\xd0\xbc\xd0\xbe\xd0\xbd\xd1\x81\xd1\x82\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb8 \xd0\xbe\xd1\x82\xd0\xbb\xd0\xb0\xd0\xb4\xd0\xba\xd0\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomSeed_MetaData[] = {
		{ "Category", "Maze|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 true, \xd0\xbf\xd1\x80\xd0\xb8 \xd0\xba\xd0\xb0\xd0\xb6\xd0\xb4\xd0\xbe\xd0\xb9 \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd0\xbe\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c\xd1\x81\xd1\x8f \xd1\x81\xd0\xbb\xd1\x83\xd1\x87\xd0\xb0\xd0\xb9\xd0\xbd\xd1\x8b\xd0\xb9 seed.\n     * \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 false, \xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd1\x83\xd0\xb5\xd1\x82\xd1\x81\xd1\x8f \xd0\xb7\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 Seed.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 true, \xd0\xbf\xd1\x80\xd0\xb8 \xd0\xba\xd0\xb0\xd0\xb6\xd0\xb4\xd0\xbe\xd0\xb9 \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd0\xbe\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c\xd1\x81\xd1\x8f \xd1\x81\xd0\xbb\xd1\x83\xd1\x87\xd0\xb0\xd0\xb9\xd0\xbd\xd1\x8b\xd0\xb9 seed.\n* \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 false, \xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd1\x83\xd0\xb5\xd1\x82\xd1\x81\xd1\x8f \xd0\xb7\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 Seed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMode_MetaData[] = {
		{ "Category", "Maze|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9a\xd0\xb0\xd0\xba \xd0\xb2\xd1\x8b\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb0\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xbe\xd0\xb2\xd1\x83\xd1\x8e \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd1\x83.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9a\xd0\xb0\xd0\xba \xd0\xb2\xd1\x8b\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb0\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xbe\xd0\xb2\xd1\x83\xd1\x8e \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd1\x83." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateOnConstruction_MetaData[] = {
		{ "Category", "Maze|Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 true, \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd0\xbf\xd0\xb5\xd1\x80\xd0\xb5\xd1\x81\xd0\xbe\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb0\xd1\x82\xd1\x8c\xd1\x81\xd1\x8f \xd0\xb2 \xd1\x80\xd0\xb5\xd0\xb4\xd0\xb0\xd0\xba\xd1\x82\xd0\xbe\xd1\x80\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xb8 \xd0\xb8\xd0\xb7\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb8 \xd0\xbf\xd0\xb0\xd1\x80\xd0\xb0\xd0\xbc\xd0\xb5\xd1\x82\xd1\x80\xd0\xbe\xd0\xb2.\n     * \xd0\xad\xd1\x82\xd0\xbe \xd1\x83\xd0\xb4\xd0\xbe\xd0\xb1\xd0\xbd\xd0\xbe, \xd0\xbd\xd0\xbe \xd0\xbd\xd0\xb0 \xd0\xbe\xd1\x87\xd0\xb5\xd0\xbd\xd1\x8c \xd0\xb1\xd0\xbe\xd0\xbb\xd1\x8c\xd1\x88\xd0\xb8\xd1\x85 \xd1\x80\xd0\xb0\xd0\xb7\xd0\xbc\xd0\xb5\xd1\x80\xd0\xb0\xd1\x85 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xb5\xd1\x82 \xd1\x82\xd0\xbe\xd1\x80\xd0\xbc\xd0\xbe\xd0\xb7\xd0\xb8\xd1\x82\xd1\x8c.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 true, \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd0\xbf\xd0\xb5\xd1\x80\xd0\xb5\xd1\x81\xd0\xbe\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb0\xd1\x82\xd1\x8c\xd1\x81\xd1\x8f \xd0\xb2 \xd1\x80\xd0\xb5\xd0\xb4\xd0\xb0\xd0\xba\xd1\x82\xd0\xbe\xd1\x80\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xb8 \xd0\xb8\xd0\xb7\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb8 \xd0\xbf\xd0\xb0\xd1\x80\xd0\xb0\xd0\xbc\xd0\xb5\xd1\x82\xd1\x80\xd0\xbe\xd0\xb2.\n* \xd0\xad\xd1\x82\xd0\xbe \xd1\x83\xd0\xb4\xd0\xbe\xd0\xb1\xd0\xbd\xd0\xbe, \xd0\xbd\xd0\xbe \xd0\xbd\xd0\xb0 \xd0\xbe\xd1\x87\xd0\xb5\xd0\xbd\xd1\x8c \xd0\xb1\xd0\xbe\xd0\xbb\xd1\x8c\xd1\x88\xd0\xb8\xd1\x85 \xd1\x80\xd0\xb0\xd0\xb7\xd0\xbc\xd0\xb5\xd1\x80\xd0\xb0\xd1\x85 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xb5\xd1\x82 \xd1\x82\xd0\xbe\xd1\x80\xd0\xbc\xd0\xbe\xd0\xb7\xd0\xb8\xd1\x82\xd1\x8c." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildGeometry_MetaData[] = {
		{ "Category", "Maze|Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 false, \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd1\x82\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe debug-\xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb0 \xd0\xb1\xd0\xb5\xd0\xb7 \xd1\x80\xd0\xb5\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd1\x85 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd0\xb8 \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x95\xd1\x81\xd0\xbb\xd0\xb8 false, \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd1\x82\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe debug-\xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb0 \xd0\xb1\xd0\xb5\xd0\xb7 \xd1\x80\xd0\xb5\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd1\x85 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd0\xb8 \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[] = {
		{ "Category", "Maze|Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9c\xd0\xb5\xd1\x88 \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0. \xd0\x94\xd0\xbb\xd1\x8f \xd0\xbd\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd0\xb0 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbd\xd0\xb0\xd0\xb7\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb8\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9c\xd0\xb5\xd1\x88 \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0. \xd0\x94\xd0\xbb\xd1\x8f \xd0\xbd\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd0\xb0 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbd\xd0\xb0\xd0\xb7\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb8\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallMesh_MetaData[] = {
		{ "Category", "Maze|Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9c\xd0\xb5\xd1\x88 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b. \xd0\x94\xd0\xbb\xd1\x8f \xd0\xbd\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd0\xb0 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbd\xd0\xb0\xd0\xb7\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb8\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9c\xd0\xb5\xd1\x88 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b. \xd0\x94\xd0\xbb\xd1\x8f \xd0\xbd\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd0\xb0 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xbd\xd0\xb0\xd0\xb7\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb8\xd1\x82\xd1\x8c \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerMesh_MetaData[] = {
		{ "Category", "Maze|Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9c\xd0\xb5\xd1\x88 \xd0\xbc\xd0\xb0\xd1\x80\xd0\xba\xd0\xb5\xd1\x80\xd0\xb0 \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xb0/\xd0\xb2\xd1\x8b\xd1\x85\xd0\xbe\xd0\xb4\xd0\xb0. \xd0\x9c\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd1\x82\xd0\xbe\xd0\xb6\xd0\xb5 \xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd0\xbe\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c Cube \xd0\xb8\xd0\xbb\xd0\xb8 Sphere.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9c\xd0\xb5\xd1\x88 \xd0\xbc\xd0\xb0\xd1\x80\xd0\xba\xd0\xb5\xd1\x80\xd0\xb0 \xd1\x81\xd1\x82\xd0\xb0\xd1\x80\xd1\x82\xd0\xb0/\xd0\xb2\xd1\x8b\xd1\x85\xd0\xbe\xd0\xb4\xd0\xb0. \xd0\x9c\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd1\x82\xd0\xbe\xd0\xb6\xd0\xb5 \xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd0\xbe\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c Cube \xd0\xb8\xd0\xbb\xd0\xb8 Sphere." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorScale_MetaData[] = {
		{ "Category", "Maze|Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x9c\xd0\xb0\xd1\x81\xd1\x88\xd1\x82\xd0\xb0\xd0\xb1 \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0.\n     * \xd0\x97\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xbf\xd0\xbe\xd0\xb4\xd0\xbe\xd0\xb1\xd1\x80\xd0\xb0\xd0\xbd\xd1\x8b \xd0\xbf\xd0\xbe\xd0\xb4 \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube, \xd0\xbd\xd0\xbe \xd0\xb8\xd1\x85 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb8\xd0\xb7\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c \xd0\xb2 Details Panel.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x9c\xd0\xb0\xd1\x81\xd1\x88\xd1\x82\xd0\xb0\xd0\xb1 \xd0\xbf\xd0\xbe\xd0\xbb\xd0\xb0.\n* \xd0\x97\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xbf\xd0\xbe\xd0\xb4\xd0\xbe\xd0\xb1\xd1\x80\xd0\xb0\xd0\xbd\xd1\x8b \xd0\xbf\xd0\xbe\xd0\xb4 \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube, \xd0\xbd\xd0\xbe \xd0\xb8\xd1\x85 \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb8\xd0\xb7\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c \xd0\xb2 Details Panel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallScale_MetaData[] = {
		{ "Category", "Maze|Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x9c\xd0\xb0\xd1\x81\xd1\x88\xd1\x82\xd0\xb0\xd0\xb1 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b.\n     * \xd0\x97\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xbf\xd0\xbe\xd0\xb4\xd0\xbe\xd0\xb1\xd1\x80\xd0\xb0\xd0\xbd\xd1\x8b \xd0\xbf\xd0\xbe\xd0\xb4 \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x9c\xd0\xb0\xd1\x81\xd1\x88\xd1\x82\xd0\xb0\xd0\xb1 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd\xd1\x8b.\n* \xd0\x97\xd0\xbd\xd0\xb0\xd1\x87\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xbf\xd0\xbe\xd0\xb4\xd0\xbe\xd0\xb1\xd1\x80\xd0\xb0\xd0\xbd\xd1\x8b \xd0\xbf\xd0\xbe\xd0\xb4 \xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xb4\xd0\xb0\xd1\x80\xd1\x82\xd0\xbd\xd1\x8b\xd0\xb9 Cube." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraConnectionsPercent_MetaData[] = {
		{ "Category", "Maze|Advanced" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x9f\xd1\x80\xd0\xbe\xd1\x86\xd0\xb5\xd0\xbd\xd1\x82 \xd0\xb4\xd0\xbe\xd0\xbf\xd0\xbe\xd0\xbb\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd1\x85 \xd1\x81\xd0\xbe\xd0\xb5\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb9.\n     *\n     * \xd0\x9e\xd0\xb1\xd1\x8b\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb9 DFS \xd1\x81\xd0\xbe\xd0\xb7\xd0\xb4\xd0\xb0\xd1\x91\xd1\x82 \"\xd0\xb8\xd0\xb4\xd0\xb5\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb9 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\":\n     * - \xd0\xb2\xd1\x81\xd0\xb5 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd1\x81\xd0\xb2\xd1\x8f\xd0\xb7\xd0\xb0\xd0\xbd\xd1\x8b;\n     * - \xd0\xbc\xd0\xb5\xd0\xb6\xd0\xb4\xd1\x83 \xd0\xb4\xd0\xb2\xd1\x83\xd0\xbc\xd1\x8f \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd0\xbc\xd0\xb8 \xd1\x80\xd0\xbe\xd0\xb2\xd0\xbd\xd0\xbe \xd0\xbe\xd0\xb4\xd0\xb8\xd0\xbd \xd0\xbf\xd1\x83\xd1\x82\xd1\x8c;\n     * - \xd1\x86\xd0\xb8\xd0\xba\xd0\xbb\xd0\xbe\xd0\xb2 \xd0\xbd\xd0\xb5\xd1\x82.\n     *\n     * \xd0\xad\xd1\x82\xd0\xb0 \xd0\xbc\xd0\xbe\xd0\xb4\xd0\xb8\xd1\x84\xd0\xb8\xd0\xba\xd0\xb0\xd1\x86\xd0\xb8\xd1\x8f \xd1\x83\xd0\xb4\xd0\xb0\xd0\xbb\xd1\x8f\xd0\xb5\xd1\x82 \xd1\x87\xd0\xb0\xd1\x81\xd1\x82\xd1\x8c \xd0\xb4\xd0\xbe\xd0\xbf\xd0\xbe\xd0\xbb\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd1\x85 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd0\xbf\xd0\xbe\xd1\x81\xd0\xbb\xd0\xb5 \xd0\xbe\xd1\x81\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xbd\xd0\xbe\xd0\xb9 \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8.\n     * \xd0\x92 \xd1\x80\xd0\xb5\xd0\xb7\xd1\x83\xd0\xbb\xd1\x8c\xd1\x82\xd0\xb0\xd1\x82\xd0\xb5 \xd0\xbf\xd0\xbe\xd1\x8f\xd0\xb2\xd0\xbb\xd1\x8f\xd1\x8e\xd1\x82\xd1\x81\xd1\x8f \xd0\xb0\xd0\xbb\xd1\x8c\xd1\x82\xd0\xb5\xd1\x80\xd0\xbd\xd0\xb0\xd1\x82\xd0\xb8\xd0\xb2\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xbf\xd1\x83\xd1\x82\xd0\xb8 \xd0\xb8 \xd1\x86\xd0\xb8\xd0\xba\xd0\xbb\xd1\x8b.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x9f\xd1\x80\xd0\xbe\xd1\x86\xd0\xb5\xd0\xbd\xd1\x82 \xd0\xb4\xd0\xbe\xd0\xbf\xd0\xbe\xd0\xbb\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd1\x85 \xd1\x81\xd0\xbe\xd0\xb5\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb9.\n*\n* \xd0\x9e\xd0\xb1\xd1\x8b\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb9 DFS \xd1\x81\xd0\xbe\xd0\xb7\xd0\xb4\xd0\xb0\xd1\x91\xd1\x82 \"\xd0\xb8\xd0\xb4\xd0\xb5\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb9 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\":\n* - \xd0\xb2\xd1\x81\xd0\xb5 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd1\x81\xd0\xb2\xd1\x8f\xd0\xb7\xd0\xb0\xd0\xbd\xd1\x8b;\n* - \xd0\xbc\xd0\xb5\xd0\xb6\xd0\xb4\xd1\x83 \xd0\xb4\xd0\xb2\xd1\x83\xd0\xbc\xd1\x8f \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\xd0\xbc\xd0\xb8 \xd1\x80\xd0\xbe\xd0\xb2\xd0\xbd\xd0\xbe \xd0\xbe\xd0\xb4\xd0\xb8\xd0\xbd \xd0\xbf\xd1\x83\xd1\x82\xd1\x8c;\n* - \xd1\x86\xd0\xb8\xd0\xba\xd0\xbb\xd0\xbe\xd0\xb2 \xd0\xbd\xd0\xb5\xd1\x82.\n*\n* \xd0\xad\xd1\x82\xd0\xb0 \xd0\xbc\xd0\xbe\xd0\xb4\xd0\xb8\xd1\x84\xd0\xb8\xd0\xba\xd0\xb0\xd1\x86\xd0\xb8\xd1\x8f \xd1\x83\xd0\xb4\xd0\xb0\xd0\xbb\xd1\x8f\xd0\xb5\xd1\x82 \xd1\x87\xd0\xb0\xd1\x81\xd1\x82\xd1\x8c \xd0\xb4\xd0\xbe\xd0\xbf\xd0\xbe\xd0\xbb\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd1\x85 \xd1\x81\xd1\x82\xd0\xb5\xd0\xbd \xd0\xbf\xd0\xbe\xd1\x81\xd0\xbb\xd0\xb5 \xd0\xbe\xd1\x81\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xbd\xd0\xbe\xd0\xb9 \xd0\xb3\xd0\xb5\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb0\xd1\x86\xd0\xb8\xd0\xb8.\n* \xd0\x92 \xd1\x80\xd0\xb5\xd0\xb7\xd1\x83\xd0\xbb\xd1\x8c\xd1\x82\xd0\xb0\xd1\x82\xd0\xb5 \xd0\xbf\xd0\xbe\xd1\x8f\xd0\xb2\xd0\xbb\xd1\x8f\xd1\x8e\xd1\x82\xd1\x81\xd1\x8f \xd0\xb0\xd0\xbb\xd1\x8c\xd1\x82\xd0\xb5\xd1\x80\xd0\xbd\xd0\xb0\xd1\x82\xd0\xb8\xd0\xb2\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xbf\xd1\x83\xd1\x82\xd0\xb8 \xd0\xb8 \xd1\x86\xd0\xb8\xd0\xba\xd0\xbb\xd1\x8b." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBias_MetaData[] = {
		{ "Category", "Maze|Advanced" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\xa1\xd0\xbc\xd0\xb5\xd1\x89\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 \xd0\xb2\xd1\x8b\xd0\xb1\xd0\xbe\xd1\x80\xd0\xb0 \xd0\xbd\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb0\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f.\n     *\n     * 0.5 \xe2\x80\x94 \xd0\xbe\xd0\xb1\xd1\x8b\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb9 \xd0\xb1\xd0\xb0\xd0\xbb\xd0\xb0\xd0\xbd\xd1\x81.\n     * \xd0\x91\xd0\xbb\xd0\xb8\xd0\xb6\xd0\xb5 \xd0\xba 1.0 \xe2\x80\x94 \xd1\x87\xd0\xb0\xd1\x89\xd0\xb5 \xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd0\xb7\xd0\xbe\xd0\xbd\xd1\x82\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xbe\xd1\x85\xd0\xbe\xd0\xb4\xd1\x8b.\n     * \xd0\x91\xd0\xbb\xd0\xb8\xd0\xb6\xd0\xb5 \xd0\xba 0.0 \xe2\x80\x94 \xd1\x87\xd0\xb0\xd1\x89\xd0\xb5 \xd0\xb2\xd0\xb5\xd1\x80\xd1\x82\xd0\xb8\xd0\xba\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xbe\xd1\x85\xd0\xbe\xd0\xb4\xd1\x8b.\n     *\n     * \xd0\xad\xd1\x82\xd0\xbe \xd0\xbc\xd0\xbe\xd0\xb4\xd0\xb8\xd1\x84\xd0\xb8\xd0\xba\xd0\xb0\xd1\x86\xd0\xb8\xd1\x8f, \xd0\xb2\xd0\xbb\xd0\xb8\xd1\x8f\xd1\x8e\xd1\x89\xd0\xb0\xd1\x8f \xd0\xbd\xd0\xb0 \xd1\x81\xd1\x82\xd0\xb8\xd0\xbb\xd1\x8c \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\xa1\xd0\xbc\xd0\xb5\xd1\x89\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 \xd0\xb2\xd1\x8b\xd0\xb1\xd0\xbe\xd1\x80\xd0\xb0 \xd0\xbd\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb0\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f.\n*\n* 0.5 \xe2\x80\x94 \xd0\xbe\xd0\xb1\xd1\x8b\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb9 \xd0\xb1\xd0\xb0\xd0\xbb\xd0\xb0\xd0\xbd\xd1\x81.\n* \xd0\x91\xd0\xbb\xd0\xb8\xd0\xb6\xd0\xb5 \xd0\xba 1.0 \xe2\x80\x94 \xd1\x87\xd0\xb0\xd1\x89\xd0\xb5 \xd0\xb3\xd0\xbe\xd1\x80\xd0\xb8\xd0\xb7\xd0\xbe\xd0\xbd\xd1\x82\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xbe\xd1\x85\xd0\xbe\xd0\xb4\xd1\x8b.\n* \xd0\x91\xd0\xbb\xd0\xb8\xd0\xb6\xd0\xb5 \xd0\xba 0.0 \xe2\x80\x94 \xd1\x87\xd0\xb0\xd1\x89\xd0\xb5 \xd0\xb2\xd0\xb5\xd1\x80\xd1\x82\xd0\xb8\xd0\xba\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd1\x8b\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xbe\xd1\x85\xd0\xbe\xd0\xb4\xd1\x8b.\n*\n* \xd0\xad\xd1\x82\xd0\xbe \xd0\xbc\xd0\xbe\xd0\xb4\xd0\xb8\xd1\x84\xd0\xb8\xd0\xba\xd0\xb0\xd1\x86\xd0\xb8\xd1\x8f, \xd0\xb2\xd0\xbb\xd0\xb8\xd1\x8f\xd1\x8e\xd1\x89\xd0\xb0\xd1\x8f \xd0\xbd\xd0\xb0 \xd1\x81\xd1\x82\xd0\xb8\xd0\xbb\xd1\x8c \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Maze|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x92\xd0\xba\xd0\xbb\xd1\x8e\xd1\x87\xd0\xb0\xd0\xb5\xd1\x82 \xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd1\x83 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0 debug-\xd0\xbb\xd0\xb8\xd0\xbd\xd0\xb8\xd1\x8f\xd0\xbc\xd0\xb8.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x92\xd0\xba\xd0\xbb\xd1\x8e\xd1\x87\xd0\xb0\xd0\xb5\xd1\x82 \xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd1\x83 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0 debug-\xd0\xbb\xd0\xb8\xd0\xbd\xd0\xb8\xd1\x8f\xd0\xbc\xd0\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLifeTime_MetaData[] = {
		{ "Category", "Maze|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa1\xd0\xba\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe \xd1\x81\xd0\xb5\xd0\xba\xd1\x83\xd0\xbd\xd0\xb4 \xd0\xb6\xd0\xb8\xd0\xb2\xd1\x83\xd1\x82 debug-\xd0\xbb\xd0\xb8\xd0\xbd\xd0\xb8\xd0\xb8.\n" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa1\xd0\xba\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe \xd1\x81\xd0\xb5\xd0\xba\xd1\x83\xd0\xbd\xd0\xb4 \xd0\xb6\xd0\xb8\xd0\xb2\xd1\x83\xd1\x82 debug-\xd0\xbb\xd0\xb8\xd0\xbd\xd0\xb8\xd0\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * \xd0\x92\xd1\x81\xd0\xb5 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n     *\n     * \xd0\xa5\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd0\xbc \xd0\xb4\xd0\xb2\xd1\x83\xd0\xbc\xd0\xb5\xd1\x80\xd0\xbd\xd1\x83\xd1\x8e \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd1\x83 \xd0\xba\xd0\xb0\xd0\xba \xd0\xbe\xd0\xb4\xd0\xbd\xd0\xbe\xd0\xbc\xd0\xb5\xd1\x80\xd0\xbd\xd1\x8b\xd0\xb9 \xd0\xbc\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd0\xb2:\n     * Index = Y * Width + X\n     *\n     * \xd0\xa2\xd0\xb0\xd0\xba \xd0\xbf\xd1\x80\xd0\xbe\xd1\x89\xd0\xb5 \xd0\xb8 \xd0\xb1\xd1\x8b\xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xb5 \xd1\x80\xd0\xb0\xd0\xb1\xd0\xbe\xd1\x82\xd0\xb0\xd1\x82\xd1\x8c \xd0\xb2 C++.\n     */" },
#endif
		{ "ModuleRelativePath", "MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xd0\x92\xd1\x81\xd0\xb5 \xd0\xba\xd0\xbb\xd0\xb5\xd1\x82\xd0\xba\xd0\xb8 \xd0\xbb\xd0\xb0\xd0\xb1\xd0\xb8\xd1\x80\xd0\xb8\xd0\xbd\xd1\x82\xd0\xb0.\n*\n* \xd0\xa5\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd0\xbc \xd0\xb4\xd0\xb2\xd1\x83\xd0\xbc\xd0\xb5\xd1\x80\xd0\xbd\xd1\x83\xd1\x8e \xd1\x81\xd0\xb5\xd1\x82\xd0\xba\xd1\x83 \xd0\xba\xd0\xb0\xd0\xba \xd0\xbe\xd0\xb4\xd0\xbd\xd0\xbe\xd0\xbc\xd0\xb5\xd1\x80\xd0\xbd\xd1\x8b\xd0\xb9 \xd0\xbc\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd0\xb2:\n* Index = Y * Width + X\n*\n* \xd0\xa2\xd0\xb0\xd0\xba \xd0\xbf\xd1\x80\xd0\xbe\xd1\x89\xd0\xb5 \xd0\xb8 \xd0\xb1\xd1\x8b\xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xb5 \xd1\x80\xd0\xb0\xd0\xb1\xd0\xbe\xd1\x82\xd0\xb0\xd1\x82\xd1\x8c \xd0\xb2 C++." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WallInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerInstances;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_bUseRandomSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StartMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StartMode;
	static void NewProp_bAutoGenerateOnConstruction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateOnConstruction;
	static void NewProp_bBuildGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildGeometry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WallMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraConnectionsPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalBias;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLifeTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeGenerator_ClearMaze, "ClearMaze" }, // 335454698
		{ &Z_Construct_UFunction_AMazeGenerator_DrawDebugMaze, "DrawDebugMaze" }, // 549390367
		{ &Z_Construct_UFunction_AMazeGenerator_GenerateMaze, "GenerateMaze" }, // 1428304667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_FloorInstances = { "FloorInstances", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, FloorInstances), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorInstances_MetaData), NewProp_FloorInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_WallInstances = { "WallInstances", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, WallInstances), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallInstances_MetaData), NewProp_WallInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MarkerInstances = { "MarkerInstances", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, MarkerInstances), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerInstances_MetaData), NewProp_MarkerInstances_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bUseRandomSeed_SetBit(void* Obj)
{
	((AMazeGenerator*)Obj)->bUseRandomSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bUseRandomSeed = { "bUseRandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMazeGenerator), &Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bUseRandomSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomSeed_MetaData), NewProp_bUseRandomSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_StartMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_StartMode = { "StartMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, StartMode), Z_Construct_UEnum_Project_EMazeStartMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMode_MetaData), NewProp_StartMode_MetaData) }; // 2128946839
void Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bAutoGenerateOnConstruction_SetBit(void* Obj)
{
	((AMazeGenerator*)Obj)->bAutoGenerateOnConstruction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bAutoGenerateOnConstruction = { "bAutoGenerateOnConstruction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMazeGenerator), &Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bAutoGenerateOnConstruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoGenerateOnConstruction_MetaData), NewProp_bAutoGenerateOnConstruction_MetaData) };
void Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bBuildGeometry_SetBit(void* Obj)
{
	((AMazeGenerator*)Obj)->bBuildGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bBuildGeometry = { "bBuildGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMazeGenerator), &Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bBuildGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildGeometry_MetaData), NewProp_bBuildGeometry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, FloorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorMesh_MetaData), NewProp_FloorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_WallMesh = { "WallMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, WallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallMesh_MetaData), NewProp_WallMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MarkerMesh = { "MarkerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, MarkerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerMesh_MetaData), NewProp_MarkerMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_FloorScale = { "FloorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, FloorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorScale_MetaData), NewProp_FloorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_WallScale = { "WallScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, WallScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallScale_MetaData), NewProp_WallScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ExtraConnectionsPercent = { "ExtraConnectionsPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, ExtraConnectionsPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraConnectionsPercent_MetaData), NewProp_ExtraConnectionsPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_HorizontalBias = { "HorizontalBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, HorizontalBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBias_MetaData), NewProp_HorizontalBias_MetaData) };
void Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((AMazeGenerator*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMazeGenerator), &Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_DebugLifeTime = { "DebugLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, DebugLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLifeTime_MetaData), NewProp_DebugLifeTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMazeCell, METADATA_PARAMS(0, nullptr) }; // 2498005921
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGenerator, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 2498005921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_FloorInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_WallInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MarkerInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bUseRandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_StartMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_StartMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bAutoGenerateOnConstruction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bBuildGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_FloorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_WallMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MarkerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_FloorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_WallScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ExtraConnectionsPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_HorizontalBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_DebugLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMazeGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeGenerator_Statics::ClassParams = {
	&AMazeGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMazeGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AMazeGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMazeGenerator()
{
	if (!Z_Registration_Info_UClass_AMazeGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeGenerator.OuterSingleton, Z_Construct_UClass_AMazeGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMazeGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGenerator);
AMazeGenerator::~AMazeGenerator() {}
// ********** End Class AMazeGenerator *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMazeStartMode_StaticEnum, TEXT("EMazeStartMode"), &Z_Registration_Info_UEnum_EMazeStartMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2128946839U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMazeCell::StaticStruct, Z_Construct_UScriptStruct_FMazeCell_Statics::NewStructOps, TEXT("MazeCell"), &Z_Registration_Info_UScriptStruct_FMazeCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMazeCell), 2498005921U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMazeGenerator, AMazeGenerator::StaticClass, TEXT("AMazeGenerator"), &Z_Registration_Info_UClass_AMazeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeGenerator), 2515221458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_843769213(TEXT("/Script/Project"),
	Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prac2_Project_Source_Project_MazeGenerator_h__Script_Project_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
