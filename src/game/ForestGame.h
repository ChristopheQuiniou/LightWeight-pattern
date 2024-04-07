#pragma once
#include <Windows.h>
#include "World.h"
class ForestGame
{

	public:
		ForestGame();

		~ForestGame();

		void run();

		void handleInput();


	private:
		World* _world;
		bool _gameOver;
};

