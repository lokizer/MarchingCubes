// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Point.h"
#include "Stack.h"
#include "MBackTrack.generated.h"

UCLASS()
class MARCHINGCUBES_API AMBackTrack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMBackTrack();
	UPROPERTY(EditAnywhere, Category = "Maze");
	int MazeSize = 27;
	
	UPROPERTY(EditAnywhere, Category = "Maze");
	FVector2D StartPoint;

	UPROPERTY(EditAnywhere, Category = "Maze");
	TSubclassOf<AActor> ChunkType;
	
	TArray<Point> maze;
	Stack s0;
protected:
	virtual void BeginPlay() override;
	int GetMazeIndex(int x,int y);
	void InitMaze();
	void BackTracking(Point point,Stack &s);
	void PrintMaze();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
