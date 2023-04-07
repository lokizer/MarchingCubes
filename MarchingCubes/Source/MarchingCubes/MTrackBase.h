// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MTrackBase.generated.h"

UCLASS()
class MARCHINGCUBES_API AMTrackBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AMTrackBase();
	UPROPERTY(EditAnywhere, Category = "Track")
	int Size = 64;
	UPROPERTY(EditAnywhere, Category = "Track")
	UMaterial* Material;
protected:
	virtual void BeginPlay() override;
	
	UStaticMeshComponent* Mesh;

public:	
	virtual void Tick(float DeltaTime) override;

};
