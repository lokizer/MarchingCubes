// Fill out your copyright notice in the Description page of Project Settings.


#include "MarchingChunk.h"

#include "FastNoiseLite.h"

void AMarchingChunk::Setup()
{
	Voxels.SetNum((Size + 1) * (Size + 1) * (Size + 1));
}

void AMarchingChunk::Generate2DHeightMap(const FVector Position)
{
	for (int x = 0; x <= Size; x++)
	{
		for (int y = 0; y <= Size; y++)
		{
			const float Xpos = x + Position.X;
			const float ypos = y + Position.Y;
			
			const int Height = FMath::Clamp(FMath::RoundToInt((Noise->GetNoise(Xpos, ypos) + 1) * Size / 2), 0, Size);
			//const float height = Noise->GetNoise(Xpos,ypos);
			for (int z = 0; z < Height; z++)
			{
				Voxels[GetVoxelsIndex(x,y,z)] = 1.0f;
			}

			for (int z = Height; z < Size; z++)
			{
				Voxels[GetVoxelsIndex(x,y,z)] = -1.0f;
			}
		}
	}
}

void AMarchingChunk::Generate3DHeightMap(const FVector Position)
{
	for (int x = 0; x <= Size; ++x)
	{
		for (int y = 0; y <= Size; ++y)
		{
			for (int z = 0; z <= Size; ++z)
			{
				Voxels[GetVoxelsIndex(x,y,z)] = Noise->GetNoise(x + Position.X, y + Position.Y, z + Position.Z);	
			}
		}
	}
}

void AMarchingChunk::GenerateMesh()
{
	if(SurfaceLevel > 0.0f)
	{
		TriangleOrder[0] = 0;
		TriangleOrder[1] = 1;
		TriangleOrder[2] = 2;
	}
	else
	{
		TriangleOrder[0] = 2;
		TriangleOrder[1] = 1;
		TriangleOrder[2] = 0;
	}
	
	float Cube[8];
	
	for(int x = 0; x < Size; ++x)
	{
		for(int y = 0; y < Size; ++y)
		{ 
			for(int z = 0; z < Size; ++z)
			{
				for(int i = 0; i < 8; ++i)
				{
					Cube[i] = Voxels[GetVoxelsIndex(x + VertexOffset[i][0], y + VertexOffset[i][1], z + VertexOffset[i][2])];
				}
				March(x, y, z, Cube);
			}
		}
	}
}


void AMarchingChunk::March(const int x, const int y, const int z, const float Cube[8])
{
	int VertexMask = 0;
	FVector EdgeVertex[12];

	// 判断顶点在表面还是内部
	for (int i = 0; i < 8; ++i)
	{
		if (Cube[i] <= SurfaceLevel)
			VertexMask |= 1 << i;
	}

	const int EdgeMask = CubeEdgeFlags[VertexMask];
	
	if (EdgeMask == 0) return;
		
	// 寻找交叉点
	for (int i = 0; i < 12; ++i)
	{
		if ((EdgeMask & 1 << i) != 0)
		{
			const float Offset = Interpolation ? GetInterpolationOffset(Cube[EdgeConnection[i][0]], Cube[EdgeConnection[i][1]]) : 0.5f;

			EdgeVertex[i].X = x + (VertexOffset[EdgeConnection[i][0]][0] + Offset * EdgeDirection[i][0]);
			EdgeVertex[i].Y = y + (VertexOffset[EdgeConnection[i][0]][1] + Offset * EdgeDirection[i][1]);
			EdgeVertex[i].Z = z + (VertexOffset[EdgeConnection[i][0]][2] + Offset * EdgeDirection[i][2]);
		}
	}

	// 保存三角形
	for (int i = 0; i < 5; ++i)
	{
		if (TriangleConnectionTable[VertexMask][3 * i] < 0) break;

		auto V1 = EdgeVertex[TriangleConnectionTable[VertexMask][3 * i]] * 100;
		auto V2 = EdgeVertex[TriangleConnectionTable[VertexMask][3 * i + 1]] * 100;
		auto V3 = EdgeVertex[TriangleConnectionTable[VertexMask][3 * i + 2]] * 100;

		auto Normal = FVector::CrossProduct(V2 - V1, V3 - V1);
		auto Color = FColor::MakeRandomColor();
		
		Normal.Normalize();

		MeshData.Vertices.Append({V1, V2, V3});
		
		MeshData.Triangles.Append({
			VertexCount + TriangleOrder[0],
			VertexCount + TriangleOrder[1],
			VertexCount + TriangleOrder[2]
		});

		MeshData.Normals.Append({
			Normal,
			Normal,
			Normal
		});

		MeshData.Colors.Append({
			Color,
			Color,
			Color
		});

		VertexCount += 3;
	}
}

int AMarchingChunk::GetVoxelsIndex(const int x, const int y, const int z) const
{
	
	return z * (Size + 1) * (Size + 1) + y * (Size + 1) + x;
}

float AMarchingChunk::GetInterpolationOffset(const float V1, const float V2) const
{
	const float Delta = V2 - V1;
	return Delta == 0.0f ? SurfaceLevel : (SurfaceLevel - V1) / Delta;
}
