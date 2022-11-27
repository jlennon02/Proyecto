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

Frames::Frames(Color color, float posX, float posY, float w, float h)
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

void Frames::CreateFrame() {
	rectangleShape.setSize(Vector2f(widthF, heightF));
	rectangleShape.setFillColor(color);
	rectangleShape.setPosition(posX, posY);
}

void Frames::CreateFrameBackground() {
	texture.loadFromFile(file);
	widthF = texture.getSize().x;
	heightF = texture.getSize().y;

	rectangleShape.setSize(Vector2f(widthF, heightF));
	rectangleShape.setTexture(&texture);
	rectangleShape.setPosition(posX, posY);
}

void Frames::CreateFrameBackgroundSize()
{
	texture.loadFromFile(file);
	rectangleShape.setSize(Vector2f(widthF, heightF));
	rectangleShape.setTexture(&texture);
	rectangleShape.setPosition(posX, posY);
}
