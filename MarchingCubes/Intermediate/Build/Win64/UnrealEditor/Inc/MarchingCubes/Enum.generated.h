// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MARCHINGCUBES_Enum_generated_h
#error "Enum.generated.h already included, missing '#pragma once' in Enum.h"
#endif
#define MARCHINGCUBES_Enum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MarchingCubes_Source_MarchingCubes_Enum_h


#define FOREACH_ENUM_EDIRECTION(op) \
	op(EDirection::Forward) \
	op(EDirection::Right) \
	op(EDirection::Back) \
	op(EDirection::Left) \
	op(EDirection::Up) \
	op(EDirection::Down) 

enum class EDirection : uint8;
template<> MARCHINGCUBES_API UEnum* StaticEnum<EDirection>();

#define FOREACH_ENUM_EBLOCK(op) \
	op(EBlock::Null) \
	op(EBlock::Air) \
	op(EBlock::Stone) \
	op(EBlock::Dirt) \
	op(EBlock::Grass) 

enum class EBlock : uint8;
template<> MARCHINGCUBES_API UEnum* StaticEnum<EBlock>();

#define FOREACH_ENUM_EGENERATIONTYPE(op) \
	op(EGenerationType::GT_3D) \
	op(EGenerationType::GT_2D) 

enum class EGenerationType : uint8;
template<> MARCHINGCUBES_API UEnum* StaticEnum<EGenerationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
