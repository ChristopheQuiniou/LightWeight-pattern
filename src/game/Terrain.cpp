#include "Terrain.h"

Terrain::Terrain(TerrainType terrainType,wchar_t appearance) {
	_terrainType = terrainType;
	_appearance = appearance;
}

Terrain::~Terrain() {
	
}

void Terrain::render() {
	std::wcout << _appearance;
}