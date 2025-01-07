// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedShooting/Struct/DebugOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugOption() {}

// Begin Cross Module References
ADVANCEDSHOOTING_API UScriptStruct* Z_Construct_UScriptStruct_FDebugOption();
UPackage* Z_Construct_UPackage__Script_AdvancedShooting();
// End Cross Module References

// Begin ScriptStruct FDebugOption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugOption;
class UScriptStruct* FDebugOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugOption, (UObject*)Z_Construct_UPackage__Script_AdvancedShooting(), TEXT("DebugOption"));
	}
	return Z_Registration_Info_UScriptStruct_DebugOption.OuterSingleton;
}
template<> ADVANCEDSHOOTING_API UScriptStruct* StaticStruct<FDebugOption>()
{
	return FDebugOption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebugOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Struct/DebugOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowLocomotionData_MetaData[] = {
		{ "Category", "DebugOption" },
		{ "ModuleRelativePath", "Struct/DebugOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowGateData_MetaData[] = {
		{ "Category", "DebugOption" },
		{ "ModuleRelativePath", "Struct/DebugOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMatching_MetaData[] = {
		{ "Category", "DebugOption" },
		{ "ModuleRelativePath", "Struct/DebugOption.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShowLocomotionData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowLocomotionData;
	static void NewProp_ShowGateData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowGateData;
	static void NewProp_DistanceMatching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DistanceMatching;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugOption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowLocomotionData_SetBit(void* Obj)
{
	((FDebugOption*)Obj)->ShowLocomotionData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowLocomotionData = { "ShowLocomotionData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDebugOption), &Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowLocomotionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowLocomotionData_MetaData), NewProp_ShowLocomotionData_MetaData) };
void Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowGateData_SetBit(void* Obj)
{
	((FDebugOption*)Obj)->ShowGateData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowGateData = { "ShowGateData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDebugOption), &Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowGateData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowGateData_MetaData), NewProp_ShowGateData_MetaData) };
void Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_DistanceMatching_SetBit(void* Obj)
{
	((FDebugOption*)Obj)->DistanceMatching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_DistanceMatching = { "DistanceMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDebugOption), &Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_DistanceMatching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMatching_MetaData), NewProp_DistanceMatching_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowLocomotionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_ShowGateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugOption_Statics::NewProp_DistanceMatching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugOption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedShooting,
	nullptr,
	&NewStructOps,
	"DebugOption",
	Z_Construct_UScriptStruct_FDebugOption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugOption_Statics::PropPointers),
	sizeof(FDebugOption),
	alignof(FDebugOption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugOption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebugOption()
{
	if (!Z_Registration_Info_UScriptStruct_DebugOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugOption.InnerSingleton, Z_Construct_UScriptStruct_FDebugOption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebugOption.InnerSingleton;
}
// End ScriptStruct FDebugOption

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DebugOption_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDebugOption::StaticStruct, Z_Construct_UScriptStruct_FDebugOption_Statics::NewStructOps, TEXT("DebugOption"), &Z_Registration_Info_UScriptStruct_DebugOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugOption), 2746129214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DebugOption_h_1847714809(TEXT("/Script/AdvancedShooting"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DebugOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedShooting_Source_AdvancedShooting_Struct_DebugOption_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
