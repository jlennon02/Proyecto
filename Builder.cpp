#include "Builder.h"


Builder::Builder(std::string file) {

	texture.loadFromFile(file);
	
	widthT = texture.getSize().x;
	heightT = texture.getSize().y;
	rectangleShape.setSize(Vector2f(widthT, heightT));
	rectangleShape.setTexture(&texture);
	
}




