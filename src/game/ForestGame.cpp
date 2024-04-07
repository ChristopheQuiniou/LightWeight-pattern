#include "ForestGame.h"

ForestGame::ForestGame() {
	_world = new World();
	_world->generateWorld();
	_gameOver = false;
}

ForestGame::~ForestGame() {
	delete _world;
}

void ForestGame::run() {
	while(!_gameOver) {
		system("cls");
		_world->render();
		handleInput();
		Sleep(1000);
	}
}

void ForestGame::handleInput() {

}