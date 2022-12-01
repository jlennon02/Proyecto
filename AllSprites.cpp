#include "AllSprites.h"

AllSprites::AllSprites(std::string fileDirection)
{
	texture.loadFromFile(fileDirection);
	sprite.setTexture(texture);
	sprite.setOrigin(sprite.getGlobalBounds().width / 2, 0);
}

void AllSprites::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}

