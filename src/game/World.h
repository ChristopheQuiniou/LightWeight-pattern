#pragma once
#include <random>
#include "Terrain.h"
#include "TerrainType.h"

class World {
	
	public:
		World();

		~World();

		void generateWorld();

		void render();


	private:
		const static int WORLD_WIDTH = 20;
		const static int WORLD_HEIGHT = 20;
		Terrain* _world[WORLD_WIDTH][WORLD_HEIGHT];
		std::random_device _randomDevice;
		std::mt19937 _randomGenerator;

		Terrain* _waterTerrain;
		Terrain* _grassTerrain;
		Terrain* _sandTerrain;
};

