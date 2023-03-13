// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarchingCubes/MarchingChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarchingChunk() {}
// Cross Module References
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMarchingChunk_NoRegister();
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMarchingChunk();
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMChunkBase();
	UPackage* Z_Construct_UPackage__Script_MarchingCubes();
// End Cross Module References
	void AMarchingChunk::StaticRegisterNativesAMarchingChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarchingChunk);
	UClass* Z_Construct_UClass_AMarchingChunk_NoRegister()
	{
		return AMarchingChunk::StaticClass();
	}
	struct Z_Construct_UClass_AMarchingChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static void NewProp_Interpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Interpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarchingChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMChunkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MarchingCubes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarchingChunk_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MarchingChunk.h" },
		{ "ModuleRelativePath", "MarchingChunk.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarchingChunk_Statics::NewProp_SurfaceLevel_MetaData[] = {
		{ "Category", "Marching Cubes" },
		{ "ModuleRelativePath", "MarchingChunk.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMarchingChunk_Statics::NewProp_SurfaceLevel = { "SurfaceLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarchingChunk, SurfaceLevel), METADATA_PARAMS(Z_Construct_UClass_AMarchingChunk_Statics::NewProp_SurfaceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarchingChunk_Statics::NewProp_SurfaceLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarchingChunk_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Marching Cubes" },
		{ "ModuleRelativePath", "MarchingChunk.h" },
	};
#endif
	void Z_Construct_UClass_AMarchingChunk_Statics::NewProp_Interpolation_SetBit(void* Obj)
	{
		((AMarchingChunk*)Obj)->Interpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMarchingChunk_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMarchingChunk), &Z_Construct_UClass_AMarchingChunk_Statics::NewProp_Interpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMarchingChunk_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarchingChunk_Statics::NewProp_Interpolation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarchingChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarchingChunk_Statics::NewProp_SurfaceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarchingChunk_Statics::NewProp_Interpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarchingChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarchingChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarchingChunk_Statics::ClassParams = {
		&AMarchingChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMarchingChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarchingChunk_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMarchingChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMarchingChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMarchingChunk()
	{
		if (!Z_Registration_Info_UClass_AMarchingChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarchingChunk.OuterSingleton, Z_Construct_UClass_AMarchingChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarchingChunk.OuterSingleton;
	}
	template<> MARCHINGCUBES_API UClass* StaticClass<AMarchingChunk>()
	{
		return AMarchingChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarchingChunk);
	struct Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingChunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingChunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarchingChunk, AMarchingChunk::StaticClass, TEXT("AMarchingChunk"), &Z_Registration_Info_UClass_AMarchingChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarchingChunk), 361871420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingChunk_h_3424196145(TEXT("/Script/MarchingCubes"),
		Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MarchingChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
