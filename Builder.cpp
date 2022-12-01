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
	
	// Buttoms and Windows Redirect
	Buttom a(Color::Blue, 100, 50, widthT - 150, 100);
	a.CreateTextButtom();
	
	Buttom b(Color::Red, 100,50, widthT -150, heightT - 100);
	b.CreateTextButtom();
	
	Builder newWindow("Texture/Game3.jpg", "Éxito");
	newWindow.CreateWindowBackground();

	Builder AWin("Texture/Game0.jpg", "Soy el");
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
			
			if (event.type == Event::MouseButtonPressed)
			{
				if (event.type == Event::MouseButtonPressed)
				{
					if (Mouse::getPosition(window).x > a.getPosX() && Mouse::getPosition(window).y > a.getPosY() &&
						Mouse::getPosition(window).x < a.getPosX() + a.getWidthF() && 
						Mouse::getPosition(window).y < a.getPosY() + a.getHeightF())
					{
						newWindow.InitWindow(2);
					}

					if (Mouse::getPosition(window).x > b.getPosX() && Mouse::getPosition(window).y > b.getPosY() &&
						Mouse::getPosition(window).x < b.getPosX() + b.getWidthF() &&
						Mouse::getPosition(window).y < b.getPosY() + b.getHeightF())
					{
						AWin.InitWindow(1);
					}
				}

			}
			
		}
		window.clear();
		window.draw(rectangleShape);
		window.draw(a);
		window.draw(b);
		window.display();
	}
}

void Builder::IWPlay()
{
	window.create(VideoMode(widthT, heightT), nameWindow, style);

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

		}
		window.clear();
		window.draw(rectangleShape);
		window.display();
	}
}

void Builder::IWOptions()
{
	window.create(VideoMode(widthT, heightT), nameWindow, style);

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

		}
		window.clear();
		window.draw(rectangleShape);
		window.display();
	}
}

void Builder::IWAbout()
{
	window.create(VideoMode(widthT, heightT), nameWindow, style);

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

		}
		window.clear();
		window.draw(rectangleShape);
		window.display();
	}
}

void Builder::IWMapa()
{
	window.create(VideoMode(widthT, heightT), nameWindow, style);

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

		}
		window.clear();
		window.draw(rectangleShape);
		window.display();
	}
}

/*

*/








