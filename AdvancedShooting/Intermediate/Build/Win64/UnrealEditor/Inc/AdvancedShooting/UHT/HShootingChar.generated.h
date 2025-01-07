// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/HShootingChar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class E_Gate : uint8;
struct FInputActionValue;
#ifdef ADVANCEDSHOOTING_HShootingChar_generated_h
#error "HShootingChar.generated.h already included, missing '#pragma once' in HShootingChar.h"
#endif
#define ADVANCEDSHOOTING_HShootingChar_generated_h

#define FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateGate); \
	DECLARE_FUNCTION(execSwitchAction); \
	DECLARE_FUNCTION(execAimCompleted); \
	DECLARE_FUNCTION(execAimStarted);


#define FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHShootingChar(); \
	friend struct Z_Construct_UClass_AHShootingChar_Statics; \
public: \
	DECLARE_CLASS(AHShootingChar, AHCharBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedShooting"), NO_API) \
	DECLARE_SERIALIZER(AHShootingChar)


#define FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHShootingChar(AHShootingChar&&); \
	AHShootingChar(const AHShootingChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHShootingChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHShootingChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHShootingChar) \
	NO_API virtual ~AHShootingChar();


#define FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_12_PROLOG
#define FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_15_INCLASS_NO_PURE_DECLS \
	FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSHOOTING_API UClass* StaticClass<class AHShootingChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedShooting_Source_AdvancedShooting_Character_HShootingChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
