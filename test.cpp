/*
#include <SFML/Graphics.hpp>
#include "GameTile.h"
#include "GameWorld.h"

using namespace sf;

int main() {
    float windowWidth = 400;
    float windowHeight = 400;

    RenderWindow windowMap(VideoMode(windowWidth, windowHeight), "Battle Royale");

    GameWorld gameWorld = GameWorld();

    while (windowMap.isOpen()) {
        Event event;
        while (windowMap.pollEvent(event)) {
            if (event.type == Event::Closed) {
                windowMap.close();
            }
        }
        windowMap.clear();

        for (int i = 0; i < gameWorld.gridLength; i++) {
            for (int j = 0; j < gameWorld.gridLength; j++) {
                windowMap.draw(gameWorld.tiles[i][j]->sprite);
            }
        }

        windowMap.display();

    }
}
*/