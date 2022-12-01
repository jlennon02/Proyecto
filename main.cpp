
#include <SFML/Graphics.hpp>
#include "Builder.h"
#include "MainMenu.h"
#include "Buttom.h"
#include "GameWorld.h"
using namespace sf;

int main() {
	
	Builder bPlay("Texture/Game2.jpg", "Battle Royale", Style::None);
	bPlay.CreateWindowBackground();

	Builder bOptions("Texture/Options.jpg", "Options", Style::None, 2);
	bOptions.CreateWindowBackground();

	Builder bAbout("Texture/About.jpg", "About", Style::None);
	bAbout.CreateWindowBackground();

	Builder bMain("Texture/IslandB.jpg", "Menu Battle Royale");
	bMain.CreateWindowBackground();

	RenderWindow MENU(VideoMode(bMain.getWidthT(), bMain.getHeightT()), "bMain.getNameWindow()", Style::Default);
	MainMenu mainMenu(1);

	while (MENU.isOpen()) {
		Event event;
		while (MENU.pollEvent(event)) {
			if (event.type == Event::Closed)

				MENU.close();

			if (event.type == Event::Closed)
				MENU.close();

			if (event.type == Event::KeyReleased)
			{
				if (event.key.code == Keyboard::Up)
				{
					mainMenu.MoveUp();
					break;
				}
				if (event.key.code == Keyboard::Down)
				{
					mainMenu.MoveDown();
					break;
				}
				if (event.key.code == Keyboard::Enter) {
					

					int x = mainMenu.MainMenuPressed();
					if (x == 0) {
						MENU.setVisible(false);
						bPlay.IWPlay();
					}
					if (x == 1)
						bOptions.IWOptions();

					if (x == 2)
						bAbout.IWAbout();

					if (x == 3) {
						RenderWindow MAPA(VideoMode(800, 800), "Map", sf::Style::Titlebar | sf::Style::Close);
						GameWorld gameWorld = GameWorld();
						while (MAPA.isOpen())
						{
							Event aevent;
							while (MAPA.pollEvent(aevent)) {
								if (aevent.type == Event::Closed)
								{
									MAPA.close();
								}
								if (aevent.type == Event::KeyPressed)
								{
									if (aevent.key.code == Keyboard::Escape)
									{
										MAPA.close();
									}
								}
							}
							MAPA.clear();
							for (int i = 0; i < gameWorld.gridLength; i++) {
								for (int j = 0; j < gameWorld.gridLength; j++) {
									MAPA.draw(gameWorld.tiles[i][j]->sprite);
								}
							}
							MAPA.display();
						}
					}
					if (x == 4)
						MENU.close();
					break;
				}
			}
		}
		MENU.setVisible(true);
		MENU.clear();
		MENU.draw(bMain.getRectangleShape());
		mainMenu.draw(MENU);
		MENU.display();
	}
	return 0;
}

