// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
enum class EBlock : uint8;
#ifdef MARCHINGCUBES_MChunkBase_generated_h
#error "MChunkBase.generated.h already included, missing '#pragma once' in MChunkBase.h"
#endif
#define MARCHINGCUBES_MChunkBase_generated_h

#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_SPARSE_DATA
#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execModifyVoxel);


#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModifyVoxel);


#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMChunkBase(); \
	friend struct Z_Construct_UClass_AMChunkBase_Statics; \
public: \
	DECLARE_CLASS(AMChunkBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MarchingCubes"), NO_API) \
	DECLARE_SERIALIZER(AMChunkBase)


#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMChunkBase(); \
	friend struct Z_Construct_UClass_AMChunkBase_Statics; \
public: \
	DECLARE_CLASS(AMChunkBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MarchingCubes"), NO_API) \
	DECLARE_SERIALIZER(AMChunkBase)


#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMChunkBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMChunkBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMChunkBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMChunkBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMChunkBase(AMChunkBase&&); \
	NO_API AMChunkBase(const AMChunkBase&); \
public:


#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMChunkBase(AMChunkBase&&); \
	NO_API AMChunkBase(const AMChunkBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMChunkBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMChunkBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMChunkBase)


#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_16_PROLOG
#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_SPARSE_DATA \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_RPC_WRAPPERS \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_INCLASS \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_SPARSE_DATA \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARCHINGCUBES_API UClass* StaticClass<class AMChunkBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MarchingCubes_Source_MarchingCubes_MChunkBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
