// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarchingCubes/MChunkWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMChunkWorld() {}
// Cross Module References
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMChunkWorld_NoRegister();
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMChunkWorld();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MarchingCubes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMChunkBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MARCHINGCUBES_API UEnum* Z_Construct_UEnum_MarchingCubes_EGenerationType();
// End Cross Module References
	void AMChunkWorld::StaticRegisterNativesAMChunkWorld()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMChunkWorld);
	UClass* Z_Construct_UClass_AMChunkWorld_NoRegister()
	{
		return AMChunkWorld::StaticClass();
	}
	struct Z_Construct_UClass_AMChunkWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChunkType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMChunkWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MarchingCubes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MChunkWorld.h" },
		{ "ModuleRelativePath", "MChunkWorld.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkWorld_Statics::NewProp_ChunkType_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "MChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMChunkWorld_Statics::NewProp_ChunkType = { "ChunkType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMChunkWorld, ChunkType), Z_Construct_UClass_AMChunkBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_ChunkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_ChunkType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkWorld_Statics::NewProp_DrawDistance_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "MChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMChunkWorld_Statics::NewProp_DrawDistance = { "DrawDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMChunkWorld, DrawDistance), METADATA_PARAMS(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_DrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_DrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "MChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMChunkWorld, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "MChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMChunkWorld, Size), METADATA_PARAMS(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMChunkWorld_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkWorld_Statics::NewProp_GenerationType_MetaData[] = {
		{ "Category", "Height Map" },
		{ "ModuleRelativePath", "MChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMChunkWorld_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMChunkWorld, GenerationType), Z_Construct_UEnum_MarchingCubes_EGenerationType, METADATA_PARAMS(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_GenerationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_GenerationType_MetaData)) }; // 422692217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Height Map" },
		{ "ModuleRelativePath", "MChunkWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMChunkWorld, Frequency), METADATA_PARAMS(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Frequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMChunkWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkWorld_Statics::NewProp_ChunkType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkWorld_Statics::NewProp_DrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkWorld_Statics::NewProp_GenerationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkWorld_Statics::NewProp_GenerationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkWorld_Statics::NewProp_Frequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMChunkWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMChunkWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMChunkWorld_Statics::ClassParams = {
		&AMChunkWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMChunkWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMChunkWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMChunkWorld()
	{
		if (!Z_Registration_Info_UClass_AMChunkWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMChunkWorld.OuterSingleton, Z_Construct_UClass_AMChunkWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMChunkWorld.OuterSingleton;
	}
	template<> MARCHINGCUBES_API UClass* StaticClass<AMChunkWorld>()
	{
		return AMChunkWorld::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMChunkWorld);
	struct Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkWorld_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkWorld_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMChunkWorld, AMChunkWorld::StaticClass, TEXT("AMChunkWorld"), &Z_Registration_Info_UClass_AMChunkWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMChunkWorld), 3473817625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkWorld_h_2953074552(TEXT("/Script/MarchingCubes"),
		Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkWorld_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
