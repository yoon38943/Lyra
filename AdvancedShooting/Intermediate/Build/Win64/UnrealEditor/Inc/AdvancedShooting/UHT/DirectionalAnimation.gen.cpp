// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedShooting/Struct/DirectionalAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalAnimation() {}

// Begin Cross Module References
ADVANCEDSHOOTING_API UScriptStruct* Z_Construct_UScriptStruct_FDirectionalAnimation();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedShooting();
// End Cross Module References

// Begin ScriptStruct FDirectionalAnimation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectionalAnimation;
class UScriptStruct* FDirectionalAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectionalAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectionalAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectionalAnimation, (UObject*)Z_Construct_UPackage__Script_AdvancedShooting(), TEXT("DirectionalAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_DirectionalAnimation.OuterSingleton;
}
template<> ADVANCEDSHOOTING_API UScriptStruct* StaticStruct<FDirectionalAnimation>()
{
	return FDirectionalAnimation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDirectionalAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Struct/DirectionalAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[] = {
		{ "Category", "DirectionalAnimation" },
		{ "ModuleRelativePath", "Struct/DirectionalAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Backward_MetaData[] = {
		{ "Category", "DirectionalAnimation" },
		{ "ModuleRelativePath", "Struct/DirectionalAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "DirectionalAnimation" },
		{ "ModuleRelativePath", "Struct/DirectionalAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "DirectionalAnimation" },
		{ "ModuleRelativePath", "Struct/DirectionalAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Backward;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Left;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectionalAnimation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectionalAnimation, Forward), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Forward_MetaData), NewProp_Forward_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Backward = { "Backward", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectionalAnimation, Backward), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Backward_MetaData), NewProp_Backward_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectionalAnimation, Right), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectionalAnimation, Left), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Forward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Backward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewProp_Left,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedShooting,
	nullptr,
	&NewStructOps,
	"DirectionalAnimation",
	Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::PropPointers),
	sizeof(FDirectionalAnimation),
	alignof(FDirectionalAnimation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDirectionalAnimation()
{
	if (!Z_Registration_Info_UScriptStruct_DirectionalAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectionalAnimation.InnerSingleton, Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DirectionalAnimation.InnerSingleton;
}
// End ScriptStruct FDirectionalAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DirectionalAnimation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDirectionalAnimation::StaticStruct, Z_Construct_UScriptStruct_FDirectionalAnimation_Statics::NewStructOps, TEXT("DirectionalAnimation"), &Z_Registration_Info_UScriptStruct_DirectionalAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectionalAnimation), 1349928893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DirectionalAnimation_h_4261371998(TEXT("/Script/AdvancedShooting"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DirectionalAnimation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DirectionalAnimation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
