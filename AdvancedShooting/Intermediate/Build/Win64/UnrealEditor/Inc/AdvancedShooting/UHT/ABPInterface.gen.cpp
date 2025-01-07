// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedShooting/Character/ABPInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPInterface() {}

// Begin Cross Module References
ADVANCEDSHOOTING_API UClass* Z_Construct_UClass_UABPInterface();
ADVANCEDSHOOTING_API UClass* Z_Construct_UClass_UABPInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AdvancedShooting();
// End Cross Module References

// Begin Interface UABPInterface
void UABPInterface::StaticRegisterNativesUABPInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABPInterface);
UClass* Z_Construct_UClass_UABPInterface_NoRegister()
{
	return UABPInterface::StaticClass();
}
struct Z_Construct_UClass_UABPInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/ABPInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABPInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABPInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedShooting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABPInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABPInterface_Statics::ClassParams = {
	&UABPInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABPInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABPInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABPInterface()
{
	if (!Z_Registration_Info_UClass_UABPInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABPInterface.OuterSingleton, Z_Construct_UClass_UABPInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABPInterface.OuterSingleton;
}
template<> ADVANCEDSHOOTING_API UClass* StaticClass<UABPInterface>()
{
	return UABPInterface::StaticClass();
}
UABPInterface::UABPInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABPInterface);
UABPInterface::~UABPInterface() {}
// End Interface UABPInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABPInterface, UABPInterface::StaticClass, TEXT("UABPInterface"), &Z_Registration_Info_UClass_UABPInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABPInterface), 1174288605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_3339632507(TEXT("/Script/AdvancedShooting"),
	Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Character_ABPInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
