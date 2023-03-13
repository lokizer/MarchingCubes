// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarchingCubes/MChunkBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMChunkBase() {}
// Cross Module References
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMChunkBase_NoRegister();
	MARCHINGCUBES_API UClass* Z_Construct_UClass_AMChunkBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MarchingCubes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	MARCHINGCUBES_API UEnum* Z_Construct_UEnum_MarchingCubes_EBlock();
// End Cross Module References
	DEFINE_FUNCTION(AMChunkBase::execModifyVoxel)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_ENUM(EBlock,Z_Param_Block);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyVoxel(Z_Param_Position,EBlock(Z_Param_Block));
		P_NATIVE_END;
	}
	void AMChunkBase::StaticRegisterNativesAMChunkBase()
	{
		UClass* Class = AMChunkBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyVoxel", &AMChunkBase::execModifyVoxel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics
	{
		struct MChunkBase_eventModifyVoxel_Parms
		{
			FIntVector Position;
			EBlock Block;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Block_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Block_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Block;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MChunkBase_eventModifyVoxel_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Block_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Block_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MChunkBase_eventModifyVoxel_Parms, Block), Z_Construct_UEnum_MarchingCubes_EBlock, METADATA_PARAMS(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Block_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Block_MetaData)) }; // 3405507113
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Block_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::NewProp_Block,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "MChunkBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMChunkBase, nullptr, "ModifyVoxel", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::MChunkBase_eventModifyVoxel_Parms), Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMChunkBase_ModifyVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMChunkBase_ModifyVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMChunkBase);
	UClass* Z_Construct_UClass_AMChunkBase_NoRegister()
	{
		return AMChunkBase::StaticClass();
	}
	struct Z_Construct_UClass_AMChunkBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMChunkBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MarchingCubes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMChunkBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMChunkBase_ModifyVoxel, "ModifyVoxel" }, // 1169583230
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MChunkBase.h" },
		{ "ModuleRelativePath", "MChunkBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMChunkBase_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "MChunkBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMChunkBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMChunkBase, Size), METADATA_PARAMS(Z_Construct_UClass_AMChunkBase_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkBase_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMChunkBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMChunkBase_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMChunkBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMChunkBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMChunkBase_Statics::ClassParams = {
		&AMChunkBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMChunkBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AMChunkBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMChunkBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMChunkBase()
	{
		if (!Z_Registration_Info_UClass_AMChunkBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMChunkBase.OuterSingleton, Z_Construct_UClass_AMChunkBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMChunkBase.OuterSingleton;
	}
	template<> MARCHINGCUBES_API UClass* StaticClass<AMChunkBase>()
	{
		return AMChunkBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMChunkBase);
	struct Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMChunkBase, AMChunkBase::StaticClass, TEXT("AMChunkBase"), &Z_Registration_Info_UClass_AMChunkBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMChunkBase), 679630284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_722431635(TEXT("/Script/MarchingCubes"),
		Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
