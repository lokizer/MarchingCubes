// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MChunk.generated.h"

enum class EDirection;
enum class EBlock;

class FastNoiseLite;
class UProceduralMeshComponent;


UCLASS()
class MARCHINGCUBES_API AMChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMChunk();

	UPROPERTY(EditAnywhere,Category = "Chunk");
	int Size = 32;
	
	UPROPERTY(EditAnywhere,Category = "Chunk");
	int Scale = 1;
	
	UPROPERTY(EditAnywhere,Category = "Chunk");
	bool CastShdow = false;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	TObjectPtr<UProceduralMeshComponent> Mesh;
	TObjectPtr<FastNoiseLite> Noise;

	TArray<EBlock> Blocks;
	
	TArray<FVector> VertexData;
	TArray<int> TriangleData;
	TArray<FVector2D> UVData;

	int VertexCount = 0;
	
	const FVector BlockVertexData[8]
	{
		FVector(100,100,100),
		FVector(100,0,100),
		FVector(100,0,0),
		FVector(100,100,0),
		FVector(0,0,100),
		FVector(0,100,100),
		FVector(0,100,0),
		FVector(0,0,0)
	};
	
	const int BlockTriangleData[24]
	{
		0,1,2,3, //forward
		5,0,3,6, //right
		4,5,6,7, //back
		1,4,7,2, //left
		5,4,1,0, //up
		3,2,7,6  //down
	};

	void GenerateBlocks();

	void GenerateMesh();

	void ApplyMesh() const;

	bool Check(FVector Position) const;

	void CreateFace(EDirection Direction, FVector Position);

	TArray<FVector> GetFaceVertices(EDirection Direction, FVector Position);

	FVector GetPositionInDirection(EDirection Direction, FVector Position);

	int GetBlockIndex(int X,int Y,int Z) const;
};
