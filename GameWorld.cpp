#include "GameWorld.h"

GameWorld::GameWorld() {
	gridLength = 8;
	setUpInitialState();
}

void GameWorld::setPos(float x, float y) {
	currentPos = sf::Vector2f(x, y);
}

sf::Vector2f GameWorld::getPos() const {
	return currentPos;
}
// Creo q el limite del mapa ya esta definido pq el mouse no va mas alla de la ventana
// Pero si necesitas los limites serian pues, float x > 0 && x < 800 
// en coord y -> float y > 0 && y < 800
//algo asi seria x'd 

void GameWorld::setUpInitialState() {
	exitPos = sf::Vector2i(1, 0);
	playerPos = sf::Vector2i(gridLength-1, gridLength-1);
	setUpEnemyPositions();
	setUpTiles();
}
void GameWorld::setUpEnemyPositions() {
	enemyPositions.clear();
	enemyPositions.push_back(sf::Vector2i(0, 2));
	enemyPositions.push_back(sf::Vector2i(6, 0));
	enemyPositions.push_back(sf::Vector2i(2, 7));
}

void GameWorld::setUpTiles() {
	tiles.clear();
	std::vector<GameTile *> firstRow;
	firstRow.push_back(new GameTile("Texture/grass.png", 0, 0, true, true));
	firstRow.push_back(new GameTile("Texture/grass.png", 100, 0, true, true));
	firstRow.push_back(new GameTile("Texture/grass.png", 200, 0, true, true));
	firstRow.push_back(new GameTile("Texture/grass.png", 300, 0, true, true));
	firstRow.push_back(new GameTile("Texture/grass.png", 400, 0, true, true));
	firstRow.push_back(new GameTile("Texture/grass.png", 500, 0, true, true));
	firstRow.push_back(new GameTile("Texture/grass.png", 600, 0, true, true));
	firstRow.push_back(new GameTile("Texture/grass.png", 700, 0, true, true));
	tiles.push_back(firstRow);

	std::vector<GameTile *> secondRow;
	secondRow.push_back(new GameTile("Texture/grass.png", 0, 100, true, true));
	secondRow.push_back(new GameTile("Texture/grass.png", 100, 100, true, true));
	secondRow.push_back(new GameTile("Texture/grass.png", 200, 100, true, true));
	secondRow.push_back(new GameTile("Texture/grass.png", 300, 100, true, true));
	secondRow.push_back(new GameTile("Texture/grass.png", 400, 100, true, true));
	secondRow.push_back(new GameTile("Texture/grass.png", 500, 100, true, true));
	secondRow.push_back(new GameTile("Texture/grass.png", 600, 100, true, true));
	secondRow.push_back(new GameTile("Texture/grass.png", 700, 100, true, true));
	tiles.push_back(secondRow);

	std::vector<GameTile *> thirdRow;
	thirdRow.push_back(new GameTile("Texture/grass.png", 0, 200, true, false));
	thirdRow.push_back(new GameTile("Texture/grass.png", 100, 200, true, false));
	thirdRow.push_back(new GameTile("Texture/grass.png", 200, 200, true, false));
	thirdRow.push_back(new GameTile("Texture/grass.png", 300, 200, true, false));
	thirdRow.push_back(new GameTile("Texture/grass.png", 400, 200, true, false));
	thirdRow.push_back(new GameTile("Texture/grass.png", 500, 200, true, false));
	thirdRow.push_back(new GameTile("Texture/grass.png", 600, 200, true, false));
	thirdRow.push_back(new GameTile("Texture/grass.png", 700, 200, true, false));
	tiles.push_back(thirdRow);

	std::vector<GameTile *> fourthRow;
	fourthRow.push_back(new GameTile("Texture/grass.png", 0, 300, true, false));
	fourthRow.push_back(new GameTile("Texture/grass.png", 100, 300, true, false));
	fourthRow.push_back(new GameTile("Texture/grass.png", 200, 300, true, false));
	fourthRow.push_back(new GameTile("Texture/grass.png", 300, 300, true, false));
	fourthRow.push_back(new GameTile("Texture/grass.png", 400, 300, true, false));
	fourthRow.push_back(new GameTile("Texture/grass.png", 500, 300, true, false));
	fourthRow.push_back(new GameTile("Texture/grass.png", 600, 300, true, false));
	fourthRow.push_back(new GameTile("Texture/grass.png", 700, 300, true, false));
	tiles.push_back(fourthRow);

	std::vector<GameTile *> fifthRow;
	fifthRow.push_back(new GameTile("Texture/grass.png", 0, 400, true, false));
	fifthRow.push_back(new GameTile("Texture/grass.png", 100, 400, true, false));
	fifthRow.push_back(new GameTile("Texture/grass.png", 200, 400, true, false));
	fifthRow.push_back(new GameTile("Texture/grass.png", 300, 400, true, false));
	fifthRow.push_back(new GameTile("Texture/grass.png", 400, 400, true, false));
	fifthRow.push_back(new GameTile("Texture/grass.png", 500, 400, true, false));
	fifthRow.push_back(new GameTile("Texture/grass.png", 600, 400, true, false));
	fifthRow.push_back(new GameTile("Texture/grass.png", 700, 400, true, false));
	tiles.push_back(fifthRow);

	std::vector<GameTile *> sixthRow;
	sixthRow.push_back(new GameTile("Texture/grass.png", 0, 500, true, false));
	sixthRow.push_back(new GameTile("Texture/grass.png", 100, 500, true, false));
	sixthRow.push_back(new GameTile("Texture/grass.png", 200, 500, true, false));
	sixthRow.push_back(new GameTile("Texture/grass.png", 300, 500, true, false));
	sixthRow.push_back(new GameTile("Texture/grass.png", 400, 500, true, false));
	sixthRow.push_back(new GameTile("Texture/grass.png", 500, 500, true, false));
	sixthRow.push_back(new GameTile("Texture/grass.png", 600, 500, true, false));
	sixthRow.push_back(new GameTile("Texture/grass.png", 700, 500, true, false));
	tiles.push_back(sixthRow);

	std::vector<GameTile *> seventhRow;
	seventhRow.push_back(new GameTile("Texture/grass.png", 0, 600, true, false));
	seventhRow.push_back(new GameTile("Texture/grass.png", 100, 600, true, false));
	seventhRow.push_back(new GameTile("Texture/grass.png", 200, 600, true, false));
	seventhRow.push_back(new GameTile("Texture/grass.png", 300, 600, true, false));
	seventhRow.push_back(new GameTile("Texture/grass.png", 400, 600, true, false));
	seventhRow.push_back(new GameTile("Texture/grass.png", 500, 600, true, false));
	seventhRow.push_back(new GameTile("Texture/grass.png", 600, 600, true, false));
	seventhRow.push_back(new GameTile("Texture/grass.png", 700, 600, true, false));
	tiles.push_back(seventhRow);

	std::vector<GameTile *> eigthRow;
	eigthRow.push_back(new GameTile("Texture/grass.png", 0, 700, true, false));
	eigthRow.push_back(new GameTile("Texture/grass.png", 100, 700, true, false));
	eigthRow.push_back(new GameTile("Texture/grass.png", 200, 700, true, false));
	eigthRow.push_back(new GameTile("Texture/grass.png", 300, 700, true, false));
	eigthRow.push_back(new GameTile("Texture/grass.png", 400, 700, true, false));
	eigthRow.push_back(new GameTile("Texture/grass.png", 500, 700, true, false));
	eigthRow.push_back(new GameTile("Texture/grass.png", 600, 700, true, false));
	eigthRow.push_back(new GameTile("Texture/grass.png", 700, 700, true, false));
	tiles.push_back(eigthRow);

}