// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGAINPARAGON_MainGameMode_generated_h
#error "MainGameMode.generated.h already included, missing '#pragma once' in MainGameMode.h"
#endif
#define AGAINPARAGON_MainGameMode_generated_h

#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_RPC_WRAPPERS
#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameMode(); \
	friend struct Z_Construct_UClass_AMainGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AgainParagon"), NO_API) \
	DECLARE_SERIALIZER(AMainGameMode)


#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainGameMode(); \
	friend struct Z_Construct_UClass_AMainGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AgainParagon"), NO_API) \
	DECLARE_SERIALIZER(AMainGameMode)


#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameMode(AMainGameMode&&); \
	NO_API AMainGameMode(const AMainGameMode&); \
public:


#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainGameMode(AMainGameMode&&); \
	NO_API AMainGameMode(const AMainGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameMode)


#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define AgainParagon_Source_AgainParagon_MainGameMode_h_12_PROLOG
#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_RPC_WRAPPERS \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_INCLASS \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AgainParagon_Source_AgainParagon_MainGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_INCLASS_NO_PURE_DECLS \
	AgainParagon_Source_AgainParagon_MainGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGAINPARAGON_API UClass* StaticClass<class AMainGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AgainParagon_Source_AgainParagon_MainGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
