#pragma once
#include <SFML/Graphics.hpp>
#include "Class/Personaje.h"
#include "Class/Animal.h"
using namespace sf;

class AllSprites : public Drawable
{
public:
	AllSprites(std::string fileDirection);
	void update(RenderWindow& window);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override = 0;

protected:
	Sprite sprite;
	Texture texture;
	Vector2f velocity;
	//float _velocity;


};

