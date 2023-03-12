// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MChunkWorld.generated.h"

UCLASS()
class MARCHINGCUBES_API AMChunkWorld : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMChunkWorld();
	UPROPERTY(EditAnywhere, Category = "ChunkWorld");
	TSubclassOf<AActor> Chunk;

	UPROPERTY(EditAnywhere, Category = "ChunkWorld");
	int DrawDistance = 5;
	
	UPROPERTY(EditAnywhere, Category = "ChunkWorld");
	int ChunkSize = 32;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
