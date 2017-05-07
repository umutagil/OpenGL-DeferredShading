#pragma once
#include "Mesh.h"

class CubeMesh : public Mesh 
{
public:
	CubeMesh()
	{
		SetVertices();
		setupMesh();
	}

	void SetVertices()
	{
		this->indices = {
			0, 1, 2, 1, 0, 3, //Front
			1, 4, 7, 1, 7, 2,
			4, 5, 6, 4, 6, 7,
			5, 0, 3, 5, 3, 6,
			3, 2, 7, 3, 7, 6,
			5, 4, 1, 5, 1, 0			
		};

		this->vertices = {

			// Front face
			{{ -0.5f, -0.5f, 0.5f }, { 0.0f, 0.0f, 1.0f }, { 0.0f, 0.0f }}, // bottom-left
			{{ 0.5f, -0.5f, 0.5f }, { 0.0f, 0.0f, 1.0f }, { 1.0f, 0.0f }},  // bottom-right
			{{ 0.5f, 0.5f, 0.5f }, { 0.0f, 0.0f, 1.0f }, { 1.0f, 1.0f }},  // top-right
			{{ -0.5f, 0.5f, 0.5f }, { 0.0f, 0.0f, 1.0f }, { 0.0f, 1.0f }},  // top-left

			// Back face
			{{ 0.5f, -0.5f, -0.5f }, { 0.0f, 0.0f, -1.0f }, { 1.0f, 0.0f }}, // bottom-right
			{{ -0.5f, -0.5f, -0.5f }, { 0.0f, 0.0f, -1.0f }, { 0.0f, 0.0f }}, // Bottom-left
			{{ -0.5f, 0.5f, -0.5f }, { 0.0f, 0.0f, -1.0f }, { 0.0f, 1.0f }},// top-left
			{{0.5f, 0.5f, -0.5f}, {0.0f, 0.0f, -1.0f}, {1.0f, 1.0f}}, // top-right						
																				  								
		};
	}
};
