#include <iostream>
#include "game/ForestGame.h"

int main() {
	
	std::cout << "A game that is lightweight" << std::endl;

	//Game initialization
	ForestGame* forestGame = new ForestGame();

	//Game loop
	forestGame->run();

	//Game cleanup
	delete forestGame;


	return 0;
}
