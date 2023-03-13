// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarchingCubes/Enum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnum() {}
// Cross Module References
	MARCHINGCUBES_API UEnum* Z_Construct_UEnum_MarchingCubes_EDirection();
	UPackage* Z_Construct_UPackage__Script_MarchingCubes();
	MARCHINGCUBES_API UEnum* Z_Construct_UEnum_MarchingCubes_EBlock();
	MARCHINGCUBES_API UEnum* Z_Construct_UEnum_MarchingCubes_EGenerationType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDirection;
	static UEnum* EDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MarchingCubes_EDirection, Z_Construct_UPackage__Script_MarchingCubes(), TEXT("EDirection"));
		}
		return Z_Registration_Info_UEnum_EDirection.OuterSingleton;
	}
	template<> MARCHINGCUBES_API UEnum* StaticEnum<EDirection>()
	{
		return EDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_MarchingCubes_EDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MarchingCubes_EDirection_Statics::Enumerators[] = {
		{ "EDirection::Forward", (int64)EDirection::Forward },
		{ "EDirection::Right", (int64)EDirection::Right },
		{ "EDirection::Back", (int64)EDirection::Back },
		{ "EDirection::Left", (int64)EDirection::Left },
		{ "EDirection::Up", (int64)EDirection::Up },
		{ "EDirection::Down", (int64)EDirection::Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MarchingCubes_EDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "EDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Down.Name", "EDirection::Down" },
		{ "Forward.Name", "EDirection::Forward" },
		{ "Left.Name", "EDirection::Left" },
		{ "ModuleRelativePath", "Enum.h" },
		{ "Right.Name", "EDirection::Right" },
		{ "Up.Name", "EDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MarchingCubes_EDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MarchingCubes,
		nullptr,
		"EDirection",
		"EDirection",
		Z_Construct_UEnum_MarchingCubes_EDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MarchingCubes_EDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MarchingCubes_EDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MarchingCubes_EDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MarchingCubes_EDirection()
	{
		if (!Z_Registration_Info_UEnum_EDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDirection.InnerSingleton, Z_Construct_UEnum_MarchingCubes_EDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlock;
	static UEnum* EBlock_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlock.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlock.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MarchingCubes_EBlock, Z_Construct_UPackage__Script_MarchingCubes(), TEXT("EBlock"));
		}
		return Z_Registration_Info_UEnum_EBlock.OuterSingleton;
	}
	template<> MARCHINGCUBES_API UEnum* StaticEnum<EBlock>()
	{
		return EBlock_StaticEnum();
	}
	struct Z_Construct_UEnum_MarchingCubes_EBlock_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MarchingCubes_EBlock_Statics::Enumerators[] = {
		{ "EBlock::Null", (int64)EBlock::Null },
		{ "EBlock::Air", (int64)EBlock::Air },
		{ "EBlock::Stone", (int64)EBlock::Stone },
		{ "EBlock::Dirt", (int64)EBlock::Dirt },
		{ "EBlock::Grass", (int64)EBlock::Grass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MarchingCubes_EBlock_Statics::Enum_MetaDataParams[] = {
		{ "Air.Name", "EBlock::Air" },
		{ "BlueprintType", "true" },
		{ "Dirt.Name", "EBlock::Dirt" },
		{ "Grass.Name", "EBlock::Grass" },
		{ "ModuleRelativePath", "Enum.h" },
		{ "Null.Name", "EBlock::Null" },
		{ "Stone.Name", "EBlock::Stone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MarchingCubes_EBlock_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MarchingCubes,
		nullptr,
		"EBlock",
		"EBlock",
		Z_Construct_UEnum_MarchingCubes_EBlock_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MarchingCubes_EBlock_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MarchingCubes_EBlock_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MarchingCubes_EBlock_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MarchingCubes_EBlock()
	{
		if (!Z_Registration_Info_UEnum_EBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlock.InnerSingleton, Z_Construct_UEnum_MarchingCubes_EBlock_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlock.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationType;
	static UEnum* EGenerationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MarchingCubes_EGenerationType, Z_Construct_UPackage__Script_MarchingCubes(), TEXT("EGenerationType"));
		}
		return Z_Registration_Info_UEnum_EGenerationType.OuterSingleton;
	}
	template<> MARCHINGCUBES_API UEnum* StaticEnum<EGenerationType>()
	{
		return EGenerationType_StaticEnum();
	}
	struct Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::Enumerators[] = {
		{ "EGenerationType::GT_3D", (int64)EGenerationType::GT_3D },
		{ "EGenerationType::GT_2D", (int64)EGenerationType::GT_2D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GT_2D.DisplayName", "2D" },
		{ "GT_2D.Name", "EGenerationType::GT_2D" },
		{ "GT_3D.DisplayName", "3D" },
		{ "GT_3D.Name", "EGenerationType::GT_3D" },
		{ "ModuleRelativePath", "Enum.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MarchingCubes,
		nullptr,
		"EGenerationType",
		"EGenerationType",
		Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MarchingCubes_EGenerationType()
	{
		if (!Z_Registration_Info_UEnum_EGenerationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationType.InnerSingleton, Z_Construct_UEnum_MarchingCubes_EGenerationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerationType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_Enum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_Enum_h_Statics::EnumInfo[] = {
		{ EDirection_StaticEnum, TEXT("EDirection"), &Z_Registration_Info_UEnum_EDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 374610814U) },
		{ EBlock_StaticEnum, TEXT("EBlock"), &Z_Registration_Info_UEnum_EBlock, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3405507113U) },
		{ EGenerationType_StaticEnum, TEXT("EGenerationType"), &Z_Registration_Info_UEnum_EGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 422692217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_Enum_h_37862669(TEXT("/Script/MarchingCubes"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_Enum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MarchingCubes_Source_MarchingCubes_Enum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
