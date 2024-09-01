// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTanksGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToonTanksGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksGameMode();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class AToonTanksGameMode
void AToonTanksGameMode::StaticRegisterNativesAToonTanksGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToonTanksGameMode);
UClass* Z_Construct_UClass_AToonTanksGameMode_NoRegister()
{
	return AToonTanksGameMode::StaticClass();
}
struct Z_Construct_UClass_AToonTanksGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToonTanksGameMode.h" },
		{ "ModuleRelativePath", "ToonTanksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTanksGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AToonTanksGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTanksGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToonTanksGameMode_Statics::ClassParams = {
	&AToonTanksGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToonTanksGameMode()
{
	if (!Z_Registration_Info_UClass_AToonTanksGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToonTanksGameMode.OuterSingleton, Z_Construct_UClass_AToonTanksGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToonTanksGameMode.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<AToonTanksGameMode>()
{
	return AToonTanksGameMode::StaticClass();
}
AToonTanksGameMode::AToonTanksGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToonTanksGameMode);
AToonTanksGameMode::~AToonTanksGameMode() {}
// End Class AToonTanksGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToonTanksGameMode, AToonTanksGameMode::StaticClass, TEXT("AToonTanksGameMode"), &Z_Registration_Info_UClass_AToonTanksGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToonTanksGameMode), 516425885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_1339469996(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
