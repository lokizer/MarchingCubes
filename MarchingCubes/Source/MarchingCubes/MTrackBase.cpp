// Fill out your copyright notice in the Description page of Project Settings.


#include "MTrackBase.h"

#include "ProceduralMeshComponent.h"

// Sets default values
AMTrackBase::AMTrackBase()
{
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetCastShadow(false);
	SetRootComponent(Mesh);
	
	Material = CreateDefaultSubobject<UMaterial>("Material");
	Mesh->SetMaterial(0,Material);
}

// Called when the game starts or when spawned
void AMTrackBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMTrackBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

