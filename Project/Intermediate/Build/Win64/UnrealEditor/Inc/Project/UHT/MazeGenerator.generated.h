// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MazeGenerator.h"

#ifdef PROJECT_MazeGenerator_generated_h
#error "MazeGenerator.generated.h already included, missing '#pragma once' in MazeGenerator.h"
#endif
#define PROJECT_MazeGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMazeCell *********************************************************
#define FID_Prac2_Project_Source_Project_MazeGenerator_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeCell_Statics; \
	PROJECT_API static class UScriptStruct* StaticStruct();


struct FMazeCell;
// ********** End ScriptStruct FMazeCell ***********************************************************

// ********** Begin Class AMazeGenerator ***********************************************************
#define FID_Prac2_Project_Source_Project_MazeGenerator_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawDebugMaze); \
	DECLARE_FUNCTION(execClearMaze); \
	DECLARE_FUNCTION(execGenerateMaze);


PROJECT_API UClass* Z_Construct_UClass_AMazeGenerator_NoRegister();

#define FID_Prac2_Project_Source_Project_MazeGenerator_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeGenerator(); \
	friend struct Z_Construct_UClass_AMazeGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_API UClass* Z_Construct_UClass_AMazeGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(AMazeGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project"), Z_Construct_UClass_AMazeGenerator_NoRegister) \
	DECLARE_SERIALIZER(AMazeGenerator)


#define FID_Prac2_Project_Source_Project_MazeGenerator_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMazeGenerator(AMazeGenerator&&) = delete; \
	AMazeGenerator(const AMazeGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeGenerator) \
	NO_API virtual ~AMazeGenerator();


#define FID_Prac2_Project_Source_Project_MazeGenerator_h_73_PROLOG
#define FID_Prac2_Project_Source_Project_MazeGenerator_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Prac2_Project_Source_Project_MazeGenerator_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Prac2_Project_Source_Project_MazeGenerator_h_76_INCLASS_NO_PURE_DECLS \
	FID_Prac2_Project_Source_Project_MazeGenerator_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMazeGenerator;

// ********** End Class AMazeGenerator *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Prac2_Project_Source_Project_MazeGenerator_h

// ********** Begin Enum EMazeStartMode ************************************************************
#define FOREACH_ENUM_EMAZESTARTMODE(op) \
	op(EMazeStartMode::Random) \
	op(EMazeStartMode::TopLeft) \
	op(EMazeStartMode::Center) 

enum class EMazeStartMode : uint8;
template<> struct TIsUEnumClass<EMazeStartMode> { enum { Value = true }; };
template<> PROJECT_API UEnum* StaticEnum<EMazeStartMode>();
// ********** End Enum EMazeStartMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
