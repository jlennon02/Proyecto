#include "Buttom.h"

Buttom::Buttom(string file, float posX, float posY, float resize, float w, float h,string fontDirection)
	: Frames(file,posX,posY,resize,w,h)
{
	this->fontDirection = fontDirection;
	font.loadFromFile(fontDirection);
	CreateFrameBackgroundFile();
	
}

Buttom::Buttom(Color color, float w, float h, float posX, float posY, string fontDirection)
	: Frames(color,w,h,posX,posY)
{
	this->fontDirection = fontDirection;
	font.loadFromFile(fontDirection);
	CreateFrameBackgroundColor();
}

/*void Buttom::setButtomFile(string file, float posX, float posY, float resize, float w, float h, string font)
{
	Frames(file, posX, posY, resize, w, h);
	
	this->fontDirection = fontDirection;
	Frames::font.loadFromFile(fontDirection);
	CreateFrameBackgroundFile();
}*/

void Buttom::CreateTextButtom(int TextSize, string textButtom, Color colorFont)
{
	this->textButtom = textButtom;
	this->colorFont = colorFont;

	text.setFont(font);
	text.setFillColor(this->colorFont);
	text.setString(this->textButtom);
	text.setCharacterSize(TextSize);
	text.setOutlineColor(Color::White);
	text.setOutlineThickness(text.getCharacterSize()/10);
	//text.setOrigin(text.getGlobalBounds().width/2 + TextSize/10 - text.getOutlineThickness(), text.getGlobalBounds().height - heightF / (10 + TextSize / 10));
	text.setOrigin(text.getGlobalBounds().width / 2 + TextSize / 10 - text.getOutlineThickness(), text.getGlobalBounds().height / 2 + TextSize / 10);
	text.setPosition(posX + widthF/2, posY + heightF/2);
	
}

void Buttom::draw(RenderTarget& target, RenderStates states) const
{
	target.draw(rectangleShape, states);
	target.draw(text, states);
}

