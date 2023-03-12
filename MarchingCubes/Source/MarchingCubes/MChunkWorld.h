// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enum.h"
#include "MChunkWorld.generated.h"

class AMChunkBase;

UCLASS()
class MARCHINGCUBES_API AMChunkWorld : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMChunkWorld();
	UPROPERTY(EditAnywhere, Category = "World");
	TSubclassOf<AMChunkBase> ChunkType;

	UPROPERTY(EditAnywhere, Category = "World");
	int DrawDistance = 5;

	UPROPERTY(EditInstanceOnly, Category="Chunk")
	TObjectPtr<UMaterialInterface> Material;
	
	UPROPERTY(EditAnywhere, Category = "Chunk");
	int Size = 32;

	UPROPERTY(EditInstanceOnly, Category="Height Map")
	EGenerationType GenerationType;

	UPROPERTY(EditInstanceOnly, Category="Height Map")
	float Frequency = 0.03f;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	int ChunkCount;
	
	void Generate3DWorld();
	void Generate2DWorld();
};
