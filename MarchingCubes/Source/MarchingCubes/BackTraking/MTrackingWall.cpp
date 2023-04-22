// Fill out your copyright notice in the Description page of Project Settings.


#include "MTrackingWall.h"


AMTrackingWall::AMTrackingWall()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetCastShadow(false);
	SetRootComponent(Mesh);
	
	Material = CreateDefaultSubobject<UMaterial>("Material");
	Mesh->SetMaterial(0,Material);
}


void AMTrackingWall::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMTrackingWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

