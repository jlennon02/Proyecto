/*
#include <SFML/Graphics.hpp>
#include "Builder.h"
#include "MainMenu.h"
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

	RenderWindow MENU(VideoMode(bMain.getWidthT(), bMain.getHeightT()), bMain.getNameWindow(), Style::None);
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
						bPlay.InitWindow();

					if (x == 1)
						bOptions.InitWindow();

					if (x == 2)
						bAbout.InitWindow();

					if (x == 3)
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

*/


/*
	// MainMenu Background 1 Textura
	Texture MainTexture;
	MainTexture.loadFromFile("Texture/IslandB.jpg");

	// Ancho y largo de la pantalla predeterminado
	float widthScreen = MainTexture.getSize().x;
	float heightScreen = MainTexture.getSize().y;

	// MainMenu Background 1

	RectangleShape MMbackground;
	MMbackground.setSize(Vector2f(widthScreen, heightScreen));
	MMbackground.setTexture(&MainTexture);

	// Make a Main window
	RenderWindow MENU(VideoMode(widthScreen, heightScreen), "Menu Principal", Style::None);
	MainMenu mainMenu(MENU.getSize().x, MENU.getSize().y);

	// BattleRoyale Logo:
	Texture TitleTexture;
	TitleTexture.loadFromFile("Texture/BR Survival.png");

	RectangleShape BRlogo;
	BRlogo.setSize(Vector2f(TitleTexture.getSize().x, TitleTexture.getSize().y));
	BRlogo.setTexture(&TitleTexture);
	BRlogo.setPosition(widthScreen - TitleTexture.getSize().x - 50, heightScreen / 2);


	//Photo to the game
	Texture Gametexture1;
	Gametexture1.loadFromFile("Texture/Game2.jpg");
	RectangleShape Pbackground;
	Pbackground.setSize(Vector2f(Gametexture1.getSize().x, Gametexture1.getSize().y));
	Pbackground.setTexture(&Gametexture1);

	//photo to the option
	Texture OptionTexture;
	OptionTexture.loadFromFile("Texture/Options.jpg");
	RectangleShape Obackground;
	Obackground.setSize(Vector2f(OptionTexture.getSize().x/2, OptionTexture.getSize().y/2));
	Obackground.setTexture(&OptionTexture);

	// About Image
	Texture Aboutexture;
	Aboutexture.loadFromFile("Texture/About.jpg");
	RectangleShape ABbackground;
	ABbackground.setSize(Vector2f(Aboutexture.getSize().x,Aboutexture.getSize().y));
	ABbackground.setTexture(&Aboutexture);


	while (MENU.isOpen())
	{
		Event event;
		while (MENU.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				MENU.close();
			}

			if (event.type == Event::KeyReleased)
			{
				if(event.key.code == Keyboard::Up)
				{
					mainMenu.MoveUp();
					break;
				}
				if(event.key.code == Keyboard::Down)
				{
					mainMenu.MoveDown();
					break;
				}

				if(event.key.code == Keyboard::Return) {

					int x = mainMenu.MainMenuPressed();

					if (x == 0)
					{
						RenderWindow Play(VideoMode(Gametexture1.getSize().x, Gametexture1.getSize().y), "BATTLE ROYALE", Style::None);
						while(Play.isOpen())
						{
							MENU.setVisible(false);
							Event aevent;
							while (Play.pollEvent(aevent)) {
								if (aevent.type == Event::Closed)
								{
									Play.close();
								}
								if (aevent.type == Event::KeyPressed)
								{
									if (aevent.key.code == Keyboard::Escape)
									{
										Play.close();
										// mainMenu.create(MENU);
									}
								}
							}
							Play.clear();
							Play.draw(Pbackground);
							Play.display();
						}
						MENU.setVisible(true);
					}
					if (x == 1)
					{
						RenderWindow OPTIONS(VideoMode(OptionTexture.getSize().x, OptionTexture.getSize().y), "OPTIONS", Style::None);
						while (OPTIONS.isOpen())
						{
							MENU.setVisible(false);
							Event aevent;
							while (OPTIONS.pollEvent(aevent)) {
								if (aevent.type == Event::Closed)
								{
									OPTIONS.close();
								}
								if (aevent.type == Event::KeyPressed)
								{
									if (aevent.key.code == Keyboard::Escape)
									{
										OPTIONS.close();
									}
								}
							}
							OPTIONS.clear();
							OPTIONS.draw(Obackground);
							OPTIONS.display();
						}
					}

					if (x == 2)
					{
						RenderWindow ABOUT(VideoMode(Aboutexture.getSize().x, Aboutexture.getSize().y), "ABOUT", Style::None);
						while (ABOUT.isOpen())
						{
							MENU.setVisible(false);
							Event aevent;
							while (ABOUT.pollEvent(aevent)) {
								if (aevent.type == Event::Closed)
								{
									ABOUT.close();
								}
								if (aevent.type == Event::KeyPressed) {
									if (aevent.key.code == Keyboard::Escape) {
										ABOUT.close();
									}
								}
							}
							ABOUT.clear();
							ABOUT.draw(ABbackground);
							ABOUT.display();
						}
					}

					if (x == 3)
						MENU.close();
					break;
				}

			}
		}
		MENU.setVisible(true);
		MENU.clear();
		MENU.draw(MMbackground);
		MENU.draw(BRlogo);
		mainMenu.draw(MENU);
		MENU.display();
	}   */

	
	