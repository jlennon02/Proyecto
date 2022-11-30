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
		//void InitWindow(RenderWindow& BeforeWindow);
		void InitWindow(int des = 0);

		RenderWindow window;
	private:
		
		std::string fileDirection;
		std::string nameWindow;
		float widthT = 0, heightT = 0;
		float scale;
		Uint32 style;

		Texture texture;
		RectangleShape rectangleShape;
};
