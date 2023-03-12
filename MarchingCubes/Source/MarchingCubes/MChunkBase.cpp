// Fill out your copyright notice in the Description page of Project Settings.


#include "MChunkBase.h"
#include "FastNoiseLite.h"
#include "NavigationData.h"
#include "ProceduralMeshComponent.h"

// Sets default values
AMChunkBase::AMChunkBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");
	Noise = new FastNoiseLite();

	// Mesh Settings
	Mesh->SetCastShadow(false);

	// Set Mesh as root
	SetRootComponent(Mesh);

}

// Called when the game starts or when spawned
void AMChunkBase::BeginPlay()
{
	Super::BeginPlay();
	
	Noise->SetFrequency(Frequency);
	Noise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	Noise->SetFractalType(FastNoiseLite::FractalType_FBm);

	Setup();
	
	GenerateHeightMap();
	
	GenerateMesh();

	UE_LOG(LogTemp, Warning, TEXT("Vertex Count : %d"), VertexCount);

	ApplyMesh();
	
}

// Called every frame
void AMChunkBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMChunkBase::ApplyMesh() const
{
	Mesh->SetMaterial(0, Material);
	Mesh->CreateMeshSection(
		0,
		MeshData.Vertices,
		MeshData.Triangles,
		MeshData.Normals,
		MeshData.UV0,
		MeshData.Colors,
		TArray<FProcMeshTangent>(),
		true
	);
}

void AMChunkBase::ClearMesh()
{
	VertexCount = 0;
	MeshData.Clear();
}

void AMChunkBase::GenerateHeightMap()
{
	switch (GenerationType)
	{
	case EGenerationType::GT_3D:
		Generate3DHeightMap(GetActorLocation() / 100);
		break;
	case EGenerationType::GT_2D:
		Generate2DHeightMap(GetActorLocation() / 100);
		break;
	default:
		throw std::invalid_argument("Invalid Generation Type");
	}
}

void AMChunkBase::ModifyVoxel(const FIntVector Position, const EBlock Block)
{
	if (Position.X >= Size || Position.Y >= Size || Position.Z >= Size || Position.X < 0 || Position.Y < 0 || Position.Z < 0) return;
	
	ModifyVoxelData(Position, Block);

	ClearMesh();
	
	GenerateMesh();

	ApplyMesh();
}