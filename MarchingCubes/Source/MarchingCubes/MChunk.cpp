// Fill out your copyright notice in the Description page of Project Settings.


#include "MChunk.h"
#include "Enum.h"
#include "FastNoiseLite.h"
#include "ProceduralMeshComponent.h"

// Sets default values
AMChunk::AMChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");

	Noise = new FastNoiseLite();
	Noise->SetFrequency(0.03f);
	Noise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	Noise->SetFractalType(FastNoiseLite::FractalType_FBm);

	Blocks.SetNum(Size*Size*Size);

	Mesh->SetCastShadow(CastShdow);
}

// Called when the game starts or when spawned
void AMChunk::BeginPlay()
{
	Super::BeginPlay();
	GenerateBlocks();

	GenerateMesh();

	ApplyMesh();
}

// Called every frame
void AMChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMChunk::GenerateBlocks()
{
	const auto Location = GetActorLocation();

	for(int x = 0; x < Size; x++)
	{
		for(int y = 0; y < Size; y++)
		{
			const float Xpos = (x * 100 + Location.X) / 100;
			const float Ypos = (y * 100 + Location.Y) / 100;

			const int height = FMath::Clamp(FMath::RoundToInt((Noise->GetNoise(Xpos,Ypos) + 1) * Size / 2),0,Size); //在0-size之间根据perlin噪声生成随机高度的方块

			for(int z = 0; z < height; ++z)
			{
				Blocks[GetBlockIndex(x,y,z)] = EBlock::Stone;
			}

			for(int z = height; z < Size; ++z)
			{
				Blocks[GetBlockIndex(x,y,z)] = EBlock::Air;
			}
		}
	} 
}

void AMChunk::GenerateMesh()
{
	for(int x = 0; x < Size; ++x)
	{
		for(int y = 0; y < Size; ++y)
		{
			for(int z = 0; z < Size; ++z)
			{
				if(Blocks[GetBlockIndex(x,y,z)] != EBlock::Air)
				{
					const auto Position = FVector(x,y,z);

					for(auto Direction : {EDirection::Forward, EDirection::Right, EDirection::Back, EDirection::Left, EDirection::Up, EDirection::Down})
					{
						if(Check(GetPositionInDirection(Direction,Position))) //检测该位置的方块是否为air方块
							{
							CreateFace(Direction,Position * 100);
							}
					}
				}
			}
		}
	}
}

void AMChunk::ApplyMesh() const
{
	Mesh->CreateMeshSection(0,VertexData,TriangleData,TArray<FVector>(),UVData,TArray<FColor>(),TArray<FProcMeshTangent>(),false);
}

bool AMChunk::Check(FVector Position) const
{
	if(Position.X>Size||Position.Y>Size||Position.Z>Size||Position.X<0||Position.Y<0||Position.Z<0)
	{
		return true;
	}
	return Blocks[GetBlockIndex(Position.X,Position.Y,Position.Z)] == EBlock::Air;
}

void AMChunk::CreateFace(EDirection Direction, FVector Position)
{
	VertexData.Append(GetFaceVertices(Direction,Position));
	UVData.Append({FVector2D(1,1),FVector2D(1,0),FVector2D(0,0),FVector2D(0,1)});
	TriangleData.Append({VertexCount + 3,VertexCount + 2,VertexCount, VertexCount + 2,VertexCount + 1,VertexCount});
	VertexCount += 4;
}

TArray<FVector> AMChunk::GetFaceVertices(EDirection Direction, FVector Position)
{
	TArray<FVector> vertices;

	for(int i = 0; i< 4; ++i)
	{
		vertices.Add(BlockVertexData[BlockTriangleData[i + static_cast<int>(Direction)*4]] * Scale + Position);
	}
	return vertices;
}

FVector AMChunk::GetPositionInDirection(EDirection Direction, FVector Position)
{
	switch (Direction) {
	case EDirection::Forward: return Position + FVector::ForwardVector; break;
	case EDirection::Right: return Position + FVector::RightVector; break;
	case EDirection::Back: return Position + FVector::BackwardVector; break;
	case EDirection::Left: return Position + FVector::LeftVector; break;
	case EDirection::Up: return  Position + FVector::UpVector; break;
	case EDirection::Down: return Position + FVector::DownVector; break;
	default: throw std::invalid_argument("Invalid Direction");
	}
}

int AMChunk::GetBlockIndex(int X, int Y, int Z) const
{
	return Z * Size * Size + Y * Size + X;
}

