#include "Builder.h"

Builder::Builder(std::string title, Uint32 style) {
	nameWindow = title;
	this->style = style; //uint32
}

Builder::Builder(std::string f, std::string title, Uint32 style, float resize, float w, float h) {
	fileDirection = f;
	nameWindow = title;
	this->style = style; //uint32
	scale = resize;
	widthT = w;
	heightT = h;
}

void Builder::setFileDirection(std::string f)
{
	fileDirection = f;
}

std::string Builder::getFileDirection() const
{
	return fileDirection;
}

void Builder::setNameWindow(std::string title)
{
	nameWindow = title;
}

std::string Builder::getNameWindow() const
{
	return nameWindow;
}

void Builder::setWidthT(float w)
{
	widthT = w;
}

float Builder::getWidthT() const
{
	return widthT;
}

void Builder::setHeightT(float h)
{
	heightT = h;
}

float Builder::getHeightT() const
{
	return heightT;
}

RectangleShape Builder::getRectangleShape() const
{
	return rectangleShape;
}

void Builder::CreateWindowBackground()
{
	texture.loadFromFile(fileDirection);
	widthT = texture.getSize().x / scale;
	heightT = texture.getSize().y / scale;

	rectangleShape.setSize(Vector2f(widthT, heightT));
	rectangleShape.setTexture(&texture);
}

void Builder::InitWindow() {
	window.create(VideoMode(widthT, heightT), nameWindow, style);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
			{
				window.close();
			}
			if (event.type == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::Escape)
				{
					window.close();
				}
			}
		}
		window.clear();
		window.draw(rectangleShape);
		window.display();
	}
}

void Builder::InitGameWindow(GameWorld world) {
	window.create(VideoMode(800, 800), nameWindow, style);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
			{
				window.close();
			}
			if (event.type == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::Escape)
				{
					window.close();
				}
			}
			window.clear();
			for (int i = 0; i < world.gridLength; i++) {
				for (int j = 0; j < world.gridLength; j++) {
					window.draw(world.tiles[i][j]->sprite);
				}
			}

			// Para lo del mouse por cada zona seria como
			// if mousePos = vector2f(100, 100)
			// printenpantalla.getPos()

			window.display();
		}
	}
}

