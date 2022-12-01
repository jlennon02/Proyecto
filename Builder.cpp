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


void Builder::IWPlay()
{
	window.create(VideoMode(widthT, heightT), nameWindow, style);
	Buttom buttom(Color::Red, 200, 100, widthT - 250, heightT - 150);
	buttom.CreateTextButtom();

	Buttom buttom1(Color::Blue, 200, 100, widthT - 250, heightT - 350);
	buttom1.CreateTextButtom();


	while (window.isOpen())
	{
		window.setMouseCursorVisible(true);
		Event event;
		while (window.pollEvent(event))
		{
			window.setActive();
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
				if (Mouse::getPosition(window).x > buttom.getPosX() && 
					Mouse::getPosition(window).y > buttom.getPosY() &&
					Mouse::getPosition(window).x < buttom.getPosX() + buttom.getWidthF() &&
					Mouse::getPosition(window).y < buttom.getPosY() + buttom.getHeightF())
				{
					texture.loadFromFile("Texture/Game0.jpg");
					IWInforme();
				}

				if (Mouse::getPosition(window).x > buttom1.getPosX() &&
					Mouse::getPosition(window).y > buttom1.getPosY() &&
					Mouse::getPosition(window).x < buttom1.getPosX() + buttom1.getWidthF() &&
					Mouse::getPosition(window).y < buttom1.getPosY() + buttom1.getHeightF())
				{
					texture.loadFromFile("Texture/Game3.jpg");
					IWPersonaje();
				}
			}
			
		}

		window.clear();
		window.draw(rectangleShape);
		window.draw(buttom);
		window.draw(buttom1);
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

void Builder::IWInforme()
{
	window.create(VideoMode(widthT, heightT), "Informe", style);
	Buttom buttom(Color::Green, 200, 100, widthT - 250, heightT - 150);
	buttom.CreateTextButtom();
	
	Buttom buttom1(Color::Green, 200, 100, widthT - 250, heightT - 250);
	buttom1.CreateTextButtom();

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
				if (Mouse::getPosition(window).x > buttom.getPosX() &&
					Mouse::getPosition(window).y > buttom.getPosY() &&
					Mouse::getPosition(window).x < buttom.getPosX() + buttom.getWidthF() &&
					Mouse::getPosition(window).y < buttom.getPosY() + buttom.getHeightF())
				{
					texture.loadFromFile("Texture/Game2.jpg");
					IWPlay();
				}
			}

		}

		window.clear();
		window.draw(rectangleShape);
		window.draw(buttom);
		window.display();
	}
}

void Builder::IWPersonaje()
{
	window.create(VideoMode(widthT, heightT), "Personaje", style);
	Buttom buttom(Color::Yellow, 200, 100, widthT - 250, heightT - 150);
	buttom.CreateTextButtom();

	Buttom buttom1(Color::Green, 200, 100, widthT - 250, heightT - 350);
	buttom1.CreateTextButtom();

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
				if (Mouse::getPosition(window).x > buttom.getPosX() &&
					Mouse::getPosition(window).y > buttom.getPosY() &&
					Mouse::getPosition(window).x < buttom.getPosX() + buttom.getWidthF() &&
					Mouse::getPosition(window).y < buttom.getPosY() + buttom.getHeightF())
				{
					IWPlay();
				}

				if (Mouse::getPosition(window).x > buttom1.getPosX() &&
					Mouse::getPosition(window).y > buttom1.getPosY() &&
					Mouse::getPosition(window).x < buttom1.getPosX() + buttom1.getWidthF() &&
					Mouse::getPosition(window).y < buttom1.getPosY() + buttom1.getHeightF())
				{
					texture.loadFromFile("Texture/Game1.jpg");
					IWOthers();
				}
			}

		}

		window.clear();
		window.draw(rectangleShape);
		window.draw(buttom);
		window.draw(buttom1);
		window.display();
	}
}

void Builder::IWOthers()
{
	window.create(VideoMode(widthT, heightT), "Others", style);
	Buttom buttom(Color::Red, 200, 100, widthT - 250, heightT - 150);
	buttom.CreateTextButtom();

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
				if (Mouse::getPosition(window).x > buttom.getPosX() &&
					Mouse::getPosition(window).y > buttom.getPosY() &&
					Mouse::getPosition(window).x < buttom.getPosX() + buttom.getWidthF() &&
					Mouse::getPosition(window).y < buttom.getPosY() + buttom.getHeightF())
				{
					IWPersonaje();
				}
			}

		}
		window.clear();
		window.draw(rectangleShape);
		window.draw(buttom);
		window.display();
	}
}


/*

*/








