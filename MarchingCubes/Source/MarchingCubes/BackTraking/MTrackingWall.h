// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MTrackingWall.generated.h"

UCLASS()
class MARCHINGCUBES_API AMTrackingWall : public AActor
{
	GENERATED_BODY()
	
public:	
	AMTrackingWall();

	UPROPERTY(EditAnywhere, Category = "Track")
	int Size = 64;
	UPROPERTY(EditAnywhere, Category = "Track")
	UMaterial* Material;
	UPROPERTY(EditAnywhere, Category = "Track")
	UStaticMeshComponent* Mesh;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
