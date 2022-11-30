#include "Frames.h"

Frames::Frames(string file, float posX, float posY, float resize, float w, float h)
{
	this->file = file;
	this->posX = posX;
	this->posY = posY;
	scale = resize;
	widthF = w;
	heightF = h;
}

Frames::Frames(Color color, float w, float h, float posX, float posY)
{
	this->color = color;
	this->posX = posX;
	this->posY = posY;
	scale = 1;
	widthF = w;
	heightF = h;
}

void Frames::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(rectangleShape, states);
}

void Frames::setFile(string file)
{
	this->file = file;
}

string Frames::getFile() const
{
	return file;
}

void Frames::setWidthF(float w)
{
	widthF = w;
}

float Frames::getWidthF() const
{
	return widthF;
}

void Frames::setHeightF(float h)
{
	heightF = h;
}

float Frames::getHeightF() const
{
	return heightF;
}

void Frames::setPosX(float x)
{
	posX = x;
}

float Frames::getPosX() const
{
	return posX;
}

void Frames::setPosY(float y)
{
	posY = y;
}

float Frames::getPosY() const
{
	return posY;
}


void Frames::CreateFrameBackgroundFile() {
	texture.loadFromFile(file);
	
	if (widthF == 0 || heightF == 0) 
	{
		widthF = texture.getSize().x/scale;
		heightF = texture.getSize().y/scale;
	}

	rectangleShape.setSize(Vector2f(widthF, heightF));
	rectangleShape.setTexture(&texture);
	rectangleShape.setPosition(posX, posY);
}

void Frames::CreateFrameBackgroundColor()
{
	rectangleShape.setSize(Vector2f(widthF, heightF));
	rectangleShape.setFillColor(color);
	rectangleShape.setPosition(posX, posY);
}
