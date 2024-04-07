#pragma once
#include <iostream>
#include "TerrainType.h"

class Terrain
{

	public:
		Terrain(TerrainType terrainType,wchar_t appearance);

		~Terrain();

		void render();

	private:
		TerrainType _terrainType;
		wchar_t _appearance;
};

