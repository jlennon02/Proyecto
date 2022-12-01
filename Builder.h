#pragma once
#include <SFML/Graphics.hpp> 
#include "Buttom.h"
using namespace std;
using namespace sf;

class Builder
{
	public:
		
		Builder(std::string f, std::string title, Uint32 style = Style::Default, float resize = 1, float w = 0, float h = 0);

		void setFileDirection(std::string f);
		std::string getFileDirection() const;

		void setNameWindow(std::string title);
		std::string getNameWindow() const;

		void setWidthT(float w);
		float getWidthT() const;

		void setHeightT(float h);
		float getHeightT() const;

		RectangleShape getRectangleShape() const;

		void CreateWindow();
		void CreateWindowBackground();
		
		void IWPlay();
		void IWInforme();
		void IWPersonaje();
		void IWOthers();
		void IWWinner();

		void IWOptions();
		void IWAbout();
		void IWMapa();

		RenderWindow window;
	private:
		
		std::string fileDirection;
		std::string nameWindow;
		float widthT = 0, heightT = 0;
		float scale;
		Uint32 style;
		int contador = 0;

		Texture texture;
		RectangleShape rectangleShape;
		
};
