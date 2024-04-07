#include "World.h"

World::World() {
	_randomDevice();
	_randomGenerator = std::mt19937(_randomDevice());

	_waterTerrain = new Terrain(TerrainType::WATER,L'w');
	_grassTerrain = new Terrain(TerrainType::GRASS,L'G');
	_sandTerrain = new Terrain(TerrainType::SAND,L'S');

}

World::~World() {
	delete _waterTerrain;
	delete _grassTerrain;
	delete _sandTerrain;
}

void World::generateWorld() {
	std::uniform_int_distribution<>distribution(0, 10);
	int random = 0;

	for(int i = 0; i < WORLD_WIDTH; i++) {
		for(int j = 0; j < WORLD_HEIGHT; j++) {

			random = distribution(_randomGenerator);
			
			if (random == TerrainType::WATER) {
				_world[i][j] = _waterTerrain;
			} else if (random == TerrainType::SAND) {
				_world[i][j] = _sandTerrain;
			} else {
				_world[i][j] = _grassTerrain;
			}

		}
	}
		
}

void World::render() {
	for(int i = 0; i < WORLD_HEIGHT; i++) {
		for(int j = 0; j < WORLD_WIDTH; j++) {
			_world[i][j]->render();
		}
		std::wcout << std::endl;
	}
}