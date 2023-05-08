// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarchingCubes/Point.h"
#include "MarchingCubes/Stack.h"
#include "MarchingCubes/Room.h"
#include "MBackTrackUp.generated.h"

UCLASS()
class MARCHINGCUBES_API AMBackTrackUp : public AActor
{
	GENERATED_BODY()
	
public:	
	AMBackTrackUp();
	UPROPERTY(EditAnywhere, Category = "Maze")
	int MazeSize = 27;
	
	UPROPERTY(EditAnywhere, Category = "Maze")
	FVector2D StartPoint;

	UPROPERTY(EditAnywhere, Category = "Maze")
	TSubclassOf<AActor> ChunkBase;

	UPROPERTY(EditAnywhere, Category = "Maze")
	TSubclassOf<AActor> ChunkWall;

	UPROPERTY(EditAnywhere, Category = "Maze")
	TSubclassOf<AActor> ChunkDoor;
	
	UPROPERTY(EditAnywhere, Category = "Maze")
	int RoomNum;
	
	TArray<Point> maze;
	TArray<Room> room;
	Stack s0;
	int num;
	int mazenum;

protected:
	virtual void BeginPlay() override;
	int GetMazeIndex(int x,int y);
	void InitDungeon();
	void InitMaze();
	void BackTracking(Point point,Stack &s);
	void Link();
	void PrintMaze();
	void Click();
	void RecursiveClick(Point &p);
public:	
	virtual void Tick(float DeltaTime) override;

};
