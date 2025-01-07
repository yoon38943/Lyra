// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ABPInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSHOOTING_ABPInterface_generated_h
#error "ABPInterface.generated.h already included, missing '#pragma once' in ABPInterface.h"
#endif
#define ADVANCEDSHOOTING_ABPInterface_generated_h

#define FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSHOOTING_API UABPInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABPInterface(UABPInterface&&); \
	UABPInterface(const UABPInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSHOOTING_API, UABPInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABPInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABPInterface) \
	ADVANCEDSHOOTING_API virtual ~UABPInterface();


#define FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUABPInterface(); \
	friend struct Z_Construct_UClass_UABPInterface_Statics; \
public: \
	DECLARE_CLASS(UABPInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdvancedShooting"), ADVANCEDSHOOTING_API) \
	DECLARE_SERIALIZER(UABPInterface)


#define FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IABPInterface() {} \
public: \
	typedef UABPInterface UClassType; \
	typedef IABPInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_9_PROLOG
#define FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSHOOTING_API UClass* StaticClass<class UABPInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
