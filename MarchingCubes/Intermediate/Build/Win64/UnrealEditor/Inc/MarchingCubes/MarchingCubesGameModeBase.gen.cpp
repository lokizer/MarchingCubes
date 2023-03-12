// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarchingCubes/MarchingCubesGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarchingCubesGameModeBase() {}
// Cross Module References
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMarchingCubesGameModeBase_NoRegister();
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMarchingCubesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MarchingCubes();
// End Cross Module References
	void AMarchingCubesGameModeBase::StaticRegisterNativesAMarchingCubesGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarchingCubesGameModeBase);
	UClass* Z_Construct_UClass_AMarchingCubesGameModeBase_NoRegister()
	{
		return AMarchingCubesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMarchingCubesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarchingCubesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MarchingCubes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarchingCubesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MarchingCubesGameModeBase.h" },
		{ "ModuleRelativePath", "MarchingCubesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarchingCubesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarchingCubesGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarchingCubesGameModeBase_Statics::ClassParams = {
		&AMarchingCubesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMarchingCubesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMarchingCubesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMarchingCubesGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMarchingCubesGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarchingCubesGameModeBase.OuterSingleton, Z_Construct_UClass_AMarchingCubesGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarchingCubesGameModeBase.OuterSingleton;
	}
	template<> MARCHINGCUBES_API UClass* StaticClass<AMarchingCubesGameModeBase>()
	{
		return AMarchingCubesGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarchingCubesGameModeBase);
	struct Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingCubesGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingCubesGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarchingCubesGameModeBase, AMarchingCubesGameModeBase::StaticClass, TEXT("AMarchingCubesGameModeBase"), &Z_Registration_Info_UClass_AMarchingCubesGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarchingCubesGameModeBase), 468607261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingCubesGameModeBase_h_2601229081(TEXT("/Script/MarchingCubes"),
		Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingCubesGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingCubesGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
