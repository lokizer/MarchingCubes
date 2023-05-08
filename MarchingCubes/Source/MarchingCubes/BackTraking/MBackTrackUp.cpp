// Fill out your copyright notice in the Description page of Project Settings.


#include "MBackTrackUp.h"

#include "Kismet/GameplayStatics.h"

AMBackTrackUp::AMBackTrackUp()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

void AMBackTrackUp::BeginPlay()
{
	Super::BeginPlay();
	num = 1; //初始化计数器
	mazenum = 0;
	
	InitMaze(); //初始化迷宫

	InitDungeon(); //初始化房间
	
	s0.Push(maze[GetMazeIndex((int)StartPoint.X,(int)StartPoint.Y)]); //设定迷宫起点
	
	BackTracking(maze[GetMazeIndex((int)StartPoint.X,(int)StartPoint.Y)],s0);//递归创建迷宫

	Link();

	Click();
	
	PrintMaze(); //打印迷宫，生成StaticMesh
}


int AMBackTrackUp::GetMazeIndex(int x, int y)
{
	return (x * MazeSize + y);
}

void AMBackTrackUp::InitDungeon()
{
	if(ensure(RoomNum))
	{
		for (int i = 0; i <= RoomNum; i++) {
			Room r;
			r.Roomsize = rand() % 3 + 2;
			r.Roomsize = r.Roomsize * 2 - 1;
			r.Bound1 = rand() % ((MazeSize - r.Roomsize) / 2) + 1;
			r.Bound1 = r.Bound1 * 2 - 1;
			r.Bound2 = rand() % ((MazeSize - r.Roomsize) / 2) + 1;
			r.Bound2 = r.Bound2 * 2 - 1;
			r.LinkNum = (r.Roomsize - 1) / 2;
			if (maze[GetMazeIndex(r.Bound1,r.Bound2)].value == 2 || maze[GetMazeIndex(r.Bound1 + r.Roomsize-1,r.Bound2 + r.Roomsize-1)].value == 2|| maze[GetMazeIndex(r.Bound1,r.Bound2 + r.Roomsize - 1)].value == 2|| maze[GetMazeIndex(r.Bound1 + r.Roomsize - 1,r.Bound2)].value == 2) {
				i--;
				continue;
			}
			room.Add(r);
			mazenum-=((r.Roomsize+1)/2)*((r.Roomsize+1)/2);
			for (int j = r.Bound1; j < r.Bound1 + r.Roomsize; j++) {
				for (int k = r.Bound2; k < r.Bound2 + r.Roomsize; k++) {
					maze[GetMazeIndex(j,k)].x = i;
					maze[GetMazeIndex(j,k)].y = j;
					maze[GetMazeIndex(j,k)].value = 2;
					maze[GetMazeIndex(j,k)].flag = true;
				}
			}
		}
	}
}

void AMBackTrackUp::InitMaze()
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
				mazenum++;
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

void AMBackTrackUp::BackTracking(Point point, Stack& s)
{
	TArray<int> road;
	if (num==mazenum) { //递归的结束条件
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

void AMBackTrackUp::Link()
{
	for (int i = 0; i < room.Num(); i++) {
		for (int j = 0; j < room[i].LinkNum; j++) {
			TArray<int> road;
			int randNum1 = rand() % room[i].Roomsize + room[i].Bound1;
			int randNum2 = rand() % room[i].Roomsize + room[i].Bound2;
			if (room[i].Bound2 != 1 && maze[GetMazeIndex(randNum1,room[i].Bound2 - 2)].flag == true) //房间最左边随机取点， 左
				road.Add(0);
			if ((room[i].Bound2 + room[i].Roomsize) != MazeSize - 1 && maze[GetMazeIndex(randNum1,room[i].Bound2 + room[i].Roomsize + 1)].flag == true) //房间最右边随机取点， 右
				road.Add(1);
			if (room[i].Bound1 != 1 && maze[GetMazeIndex(room[i].Bound1 - 2,randNum2)].flag == true) //房间最上边随机取点， 上
				road.Add(2);
			if ((room[i].Bound1 + room[i].Roomsize) != MazeSize - 1 && maze[GetMazeIndex(room[i].Bound1 + room[i].Roomsize + 1,randNum2)].flag == true) //房间最下边随机取点， 下
				road.Add(3);
			if (road.Num() != 0) {
				for (int x = 0; x < road.Num(); x++) {
					switch (road[x])
					{
					case 0:
						maze[GetMazeIndex(randNum1,room[i].Bound2 - 1)].flag = true;
						maze[GetMazeIndex(randNum1,room[i].Bound2 - 1)].value = 3;
						break;
					case 1:
						maze[GetMazeIndex(randNum1,room[i].Bound2 + room[i].Roomsize)].flag = true;
						maze[GetMazeIndex(randNum1,room[i].Bound2 + room[i].Roomsize)].value = 3;
						break;
					case 2:
						maze[GetMazeIndex(room[i].Bound1 - 1,randNum2)].flag = true;
						maze[GetMazeIndex(room[i].Bound1 - 1,randNum2)].value = 3;
						break;
					case 3:
						maze[GetMazeIndex(room[i].Bound1 + room[i].Roomsize,randNum2)].flag = true;
						maze[GetMazeIndex(room[i].Bound1 + room[i].Roomsize,randNum2)].value = 3;
						break;
					default:
						break;
					}
				}
				j += road.Num();
			}
			else {
				j--;
			}
		}
	}
}

void AMBackTrackUp::RecursiveClick(Point &p) {
	TArray<int> road;
	if (p.x != 0 && maze[GetMazeIndex(p.x - 1,p.y)].flag == true)
		road.Add(0);
	if (p.x != MazeSize - 1 && maze[GetMazeIndex(p.x + 1,p.y)].flag == true)
		road.Add(1);
	if (p.y != 0 && maze[GetMazeIndex(p.x,p.y - 1)].flag == true)
		road.Add(2);
	if (p.y != MazeSize - 1 && maze[GetMazeIndex(p.x,p.y + 1)].flag == true)
		road.Add(3);

	if (road.Num() == 1) {
		maze[GetMazeIndex(p.x,p.y)].flag = false;
		if (maze[GetMazeIndex(p.x,p.y)].value == 1)
			maze[GetMazeIndex(p.x,p.y)].value = 0;
		switch (road[0])
		{
		case 0:
			RecursiveClick(maze[GetMazeIndex(p.x - 1,p.y)]);
			break;
		case 1:
			RecursiveClick(maze[GetMazeIndex(p.x + 1,p.y)]);
			break;
		case 2:
			RecursiveClick(maze[GetMazeIndex(p.x,p.y - 1)]);
			break;
		case 3:
			RecursiveClick(maze[GetMazeIndex(p.x,p.y + 1)]);
			break;
		default:
			break;
		}
	}
}


void AMBackTrackUp::Click() {
	for (int i = 0; i < MazeSize; i++) {
		for (int j = 0; j < MazeSize; j++) {
			TArray<int> road;
			if (i != 0 && i != MazeSize - 1 && maze[GetMazeIndex(i - 1,j)].flag == true)
				road.Add(0);
			if (i != 0 && i != MazeSize - 1 && maze[GetMazeIndex(i + 1,j)].flag == true)
				road.Add(1);
			if (j != 0 && j != MazeSize - 1 && maze[GetMazeIndex(i,j - 1)].flag == true)
				road.Add(2);
			if (j != 0 && j != MazeSize - 1 && maze[GetMazeIndex(i,j + 1)].flag == true)
				road.Add(3);
			if (road.Num() == 1)
				RecursiveClick(maze[GetMazeIndex(i,j)]);
		}
	}
}



void AMBackTrackUp::PrintMaze()
{
	for (int i = 0; i < MazeSize; i++) {
		for (int j = 0; j < MazeSize; j++) {

			if (maze[GetMazeIndex(i,j)].value == 0 && maze[GetMazeIndex(i,j)].flag != true) //当value为0时，代表是墙壁，z上升
				{
				auto transform = FTransform(
			FRotator::ZeroRotator,
			FVector(i  * 256, j  * 256, 512),
			FVector::OneVector
				);

				const auto chunk = GetWorld()->SpawnActorDeferred<AActor>(
					ChunkWall,
					transform,
					this
				);

				UGameplayStatics::FinishSpawningActor(chunk, transform);
				}

			else if (maze[GetMazeIndex(i,j)].value == 3) //当value为3时，代表是门
				{
				auto transform = FTransform(
			FRotator::ZeroRotator,
			FVector(i * 256, j  * 256, 256),
			FVector::OneVector
				);

				const auto chunk = GetWorld()->SpawnActorDeferred<AActor>(
					ChunkDoor,
					transform,
					this
				);
				UGameplayStatics::FinishSpawningActor(chunk, transform);
				}
			
			else if (maze[GetMazeIndex(i,j)].value == 1 || maze[GetMazeIndex(i,j)].flag == true) //当value为1时，代表是地板，z轴下降
				{
				auto transform = FTransform(
			FRotator::ZeroRotator,
			FVector(i * 256, j  * 256,  256),
			FVector::OneVector
				);

				const auto chunk = GetWorld()->SpawnActorDeferred<AActor>(
					ChunkBase,
					transform,
					this
				);
				UGameplayStatics::FinishSpawningActor(chunk, transform);
				}
			
		}
	}
}

void AMBackTrackUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

