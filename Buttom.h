#pragma once
#include "Frames.h"
class Buttom : public Frames
{
public:
	//Buttom(){}
	Buttom(string file, float posX = 0, float posY = 0, float resize = 1, float w = 0, float h = 0, string font = "Fonts/Arcadia.ttf");
	Buttom(Color color, float w, float h, float posX = 0, float posY = 0, string font = "Fonts/Arcadia.ttf");

	//void setButtomFile(string file, float posX = 0, float posY = 0, float resize = 1, float w = 0, float h = 0, string font = "Fonts/Arcadia.ttf");
	//void setButtomColor(Color color, float w, float h, float posX = 0, float posY = 0, string font = "Fonts/Arcadia.ttf");
	void CreateTextButtom(int TextSize = 0, string textButtom = "", Color colorFont = Color::Black);
	
	//Si el mouse está encima del botón
	//bool MouseButtom(RenderWindow& window);

	//draw Override Polimorf Drawable
	void draw(RenderTarget & target, RenderStates states) const override;


private:
	string textButtom;
	string fontDirection;

	Text text;
	Color colorFont;
};

