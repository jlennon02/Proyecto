#include <SFML/Graphics.hpp>
#include "Builder.h"
#include "MainMenu.h"
#include "GameTile.h"
#include "GameWorld.h"

using namespace sf;

int main() {

	Builder windowMain("Texture/IslandB.jpg", "Menu Battle Royale");
	windowMain.CreateWindowBackground();

	Builder windowPlay("Battle Royale"); 
	GameWorld gameWorld = GameWorld();								

	Builder windowOptions("Texture/Options.jpg", "Options", Style::None, 2);
	windowOptions.CreateWindowBackground();

	Builder windowAbout("Texture/About.jpg", "About", Style::None);	
	windowAbout.CreateWindowBackground();

	RenderWindow MENU(VideoMode(windowMain.getWidthT(), windowMain.getHeightT()), windowMain.getNameWindow(), Style::None);
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
				if (event.key.code == Keyboard::Return) {

					int x = mainMenu.MainMenuPressed();
					if (x == 0) 
						windowPlay.InitGameWindow(gameWorld);
						MENU.setVisible(false); // No funciona esto x'd
						
						// Si event::movemouse esta dentro de vector2f(x, y) de la zona a
						// gameWorld
						gameWorld.setPos(400, 400);
						// Falta funcion para dibujar letras dentro de gameworld
						// Algo asi como el draw() de MainMenu
						// definiendole la pos de dibujado y metiendole el gameWorld.getPos()
						// deberia dar las coords q se quiere	

					if (x == 1)
						windowOptions.InitWindow();
						MENU.setVisible(false);

					if (x == 2)
						windowAbout.InitWindow();
						MENU.setVisible(false);

					if (x == 3)
						MENU.close();
					break;
				}
			}
		}
		MENU.setVisible(true);
		MENU.clear();
		MENU.draw(windowMain.getRectangleShape());
		mainMenu.draw(MENU);
		MENU.display();
	}
	return 0;
}
