#pragma once
#include "Frames.h"
class Buttom : public Frames
{
public:
	Buttom(string file, float posX = 0, float posY = 0, float resize = 1, float w = 0, float h = 0, string font = "Fonts/Arcadia.ttf");
	Buttom(Color color, float w, float h, float posX = 0, float posY = 0, string font = "Fonts/Arcadia.ttf");

	void CreateTextButtom(int TextSize = 0, string textButtom = "", Color colorFont = Color::Black);
	
	void draw(RenderTarget & target, RenderStates states) const override;

private:
	string textButtom;
	string fontDirection;

	Text text;
	Color colorFont;
};

