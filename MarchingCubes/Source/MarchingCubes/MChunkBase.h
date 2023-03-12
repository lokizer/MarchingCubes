// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Enum.h"
#include "ChunkMeshData.h"

#include "MChunkBase.generated.h"

class FastNoiseLite;
class UProceduralMeshComponent;

UCLASS(Abstract)
class MARCHINGCUBES_API AMChunkBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMChunkBase();

	UPROPERTY(EditAnywhere, Category = "Chunk")
	int Size = 64;

	TObjectPtr<UMaterialInterface> Material;
	float Frequency;
	EGenerationType GenerationType;

	UFUNCTION(BlueprintCallable, Category = "Chunk")
	void ModifyVoxel(const FIntVector Position,const EBlock Block);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Setup() PURE_VIRTUAL(AMChunkBase::Setup);
	virtual void Generate2DHeightMap(const FVector Position) PURE_VIRTUAL(AChunkBase::Generate2DHeightMap);
	virtual void Generate3DHeightMap(const FVector Position) PURE_VIRTUAL(AChunkBase::Generate3DHeightMap);
	virtual void GenerateMesh() PURE_VIRTUAL(AChunkBase::GenerateMesh);

	virtual void ModifyVoxelData(const FIntVector Position, const EBlock Block) PURE_VIRTUAL(AChunkBase::RemoveVoxelData);

	TObjectPtr<UProceduralMeshComponent> Mesh;
	FastNoiseLite* Noise;
	FChunkMeshData MeshData;
	int VertexCount = 0;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ApplyMesh() const;
	void ClearMesh();
	void GenerateHeightMap();
};
