#include "Builder.h"

Builder::Builder(std::string f, std::string tittle, Uint32 style, float resize, float w, float h)
{
	fileDirection = f;
	nameWindow = tittle;
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

void Builder::CreateWindow()
{
	rectangleShape.setSize(Vector2f(widthT, heightT));
	rectangleShape.setTexture(&texture);
}

void Builder::InitWindow(int des)
{
	window.create(VideoMode(widthT, heightT), nameWindow, style);
	
	Buttom b(Color::Red, 100,50, 400, 200);
	b.CreateTextButtom();
	
	Frames frame(Color::Blue, 200, 80);
	Builder newWindow("Texture/Game3.jpg", "Exito");
	newWindow.CreateWindowBackground();

	Builder AWin("Texture/Game0.jpg", "Exito");
	AWin.CreateWindowBackground();
	int desicion = des;

	while (window.isOpen())
	{
		window.setMouseCursorVisible(true);
		Event event;
		while (window.pollEvent(event)) 
		{
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
			if (Mouse::getPosition().x > widthT || Mouse::getPosition().y > heightT)
				window.setMouseCursorVisible(false);

			
			if (event.type == Event::MouseButtonPressed)
			{
				if (event.type == Event::MouseButtonPressed)
				{
					if (Mouse::getPosition().x > 0 && Mouse::getPosition().x < 500 && Mouse::getPosition().y > 0 && Mouse::getPosition().y < 500)
					{
						newWindow.InitWindow(2);
					}

					if (Mouse::getPosition().x > widthT - 500 && Mouse::getPosition().x < widthT && Mouse::getPosition().y > heightT - 500 && Mouse::getPosition().y < heightT)
					{
						AWin.InitWindow(1);
					}
				}

			}
			
		}
		
		window.clear();
		window.draw(rectangleShape);
		window.draw(b);
		window.draw(frame);
		window.display();
	}
}

/*
if (Mouse::getPosition().x > widthT || Mouse::getPosition().y > heightT)
				window.setMouseCursorVisible(false);


			if (event.type == Event::MouseButtonPressed)
			{
				if (Mouse::getPosition().x > 0 && Mouse::getPosition().x < 500 && Mouse::getPosition().y > 0 && Mouse::getPosition().y < 500)
				{
					newWindow.InitWindow(2);
				}

				if (Mouse::getPosition().x > widthT - 500 && Mouse::getPosition().x < widthT && Mouse::getPosition().y > heightT - 500 && Mouse::getPosition().y < heightT)
				{
					AWin.InitWindow(1);
				}
			}
*/








