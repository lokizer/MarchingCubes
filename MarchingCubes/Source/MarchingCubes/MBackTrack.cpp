// Fill out your copyright notice in the Description page of Project Settings.


#include "MBackTrack.h"

#include "MTrackBase.h"
#include "ProceduralMeshComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AMBackTrack::AMBackTrack()
{
	PrimaryActorTick.bCanEverTick = true;
}


void AMBackTrack::BeginPlay()
{
	Super::BeginPlay();
	num = 1; //初始化计数器
	
	InitMaze(); //初始化迷宫
	
	s0.Push(maze[GetMazeIndex((int)StartPoint.X,(int)StartPoint.Y)]); //设定迷宫起点
	
	BackTracking(maze[GetMazeIndex((int)StartPoint.X,(int)StartPoint.Y)],s0);//递归创建迷宫
	
	PrintMaze(); //打印迷宫，生成StaticMesh
}


void AMBackTrack::InitMaze()
{
	for (int x = 0; x < MazeSize; x++) {
		for (int y = 0; y < MazeSize; y++) {
			if ((x + y) % 2 == 0 && x != 0 && y != 0 && x != MazeSize - 1 && y != MazeSize - 1 && x % 2 != 0) { //九宫格中只有一个赋值1，其余全为0
				Point p;
				p.x = x;
				p.y = y;
				p.value = 1;
				p.flag = false;
				maze.Add(p);
			}
			else
			{
				Point p;
				p.x = x;
				p.y = y;
				p.value = 0;
				p.flag = false;
				maze.Add(p);
			}
		}
	}
}

void AMBackTrack::BackTracking(Point point, Stack &s)
{
	TArray<int> road;
	if (num==((sqrt(maze.Num())-1) / 2)*((sqrt(maze.Num()) - 1) / 2)) { //递归的结束条件
		return;
	}

	if (point.flag == false && (s.data[s.top].x != point.x || s.data[s.top].y != point.y)) { //当这个点第一次到达时，标记true并压栈
		maze[GetMazeIndex(point.x,point.y)].flag = true;
		maze[GetMazeIndex((s.data[s.top].x + point.x) / 2,(s.data[s.top].y + point.y) / 2)].flag = true;
		s.Push(maze[GetMazeIndex((s.data[s.top].x + point.x) / 2,(s.data[s.top].y + point.y) / 2)]);
		s.Push(point);
		num++;
	}
	if (point.x != 1 && maze[GetMazeIndex(point.x - 2, point.y)].flag == false) //判断边界条件，防止数组越界，在数组不会越界的前提下，判断上下左右的块是否去过
		road.Add(0);
	if (point.x != MazeSize - 2 && maze[GetMazeIndex(point.x + 2,point.y)].flag == false)//road的长度代表有几个方向可行，生成一个随机数i，i的范围是0到road的大小，而road数组存储的是方向信息
		road.Add(1);
	if (point.y != 1 && maze[GetMazeIndex(point.x,point.y - 2)].flag == false)
		road.Add(2);
	if (point.y != MazeSize - 2 && maze[GetMazeIndex(point.x,point.y + 2)].flag == false)
		road.Add(3);
	if (road.Num() != 0) {
		int i = rand() % road.Num();
		switch (road[i])
		{
		case 0:
			BackTracking(maze[GetMazeIndex(point.x - 2,point.y)], s);
			break;
		case 1:
			BackTracking(maze[GetMazeIndex(point.x + 2,point.y)], s);
			break;
		case 2:
			BackTracking(maze[GetMazeIndex(point.x,point.y - 2)], s);
			break;
		case 3:
			BackTracking(maze[GetMazeIndex(point.x,point.y + 2)], s);
			break;
		}
	}
	else if (road.Num() == 0) {
		s.Pop();
		s.Pop();
		BackTracking(s.data[s.top], s);
	}
}

void AMBackTrack::PrintMaze()
{
	for (int i = 0; i < MazeSize; i++) {
		for (int j = 0; j < MazeSize; j++) {

			if (maze[GetMazeIndex(i,j)].value == 0 && maze[GetMazeIndex(i,j)].flag != true) //当value为0时，代表是墙壁，z上升
			{
				auto transform = FTransform(
			FRotator::ZeroRotator,
			FVector(i  * 100, j  * 100,  200),
			FVector::OneVector
				);

				const auto chunk = GetWorld()->SpawnActorDeferred<AActor>(
					ChunkType,
					transform,
					this
				);

				UGameplayStatics::FinishSpawningActor(chunk, transform);
			}
			else if (maze[GetMazeIndex(i,j)].value == 1 || maze[GetMazeIndex(i,j)].flag == true) //当value为1时，代表是地板，z轴下降
			{
				auto transform = FTransform(
			FRotator::ZeroRotator,
			FVector(i * 100, j  * 100,  100),
			FVector::OneVector
				);

				const auto chunk = GetWorld()->SpawnActorDeferred<AActor>(
					ChunkType,
					transform,
					this
				);
				UGameplayStatics::FinishSpawningActor(chunk, transform);
			}
		}
	}
}



// Called every frame
void AMBackTrack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AMBackTrack::GetMazeIndex(int x, int y)
{
	return (x * MazeSize + y);
}