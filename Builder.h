#pragma once
#include <SFML/Graphics.hpp> 
using namespace std;
using namespace sf;

class Builder
{
	public:
		Builder(std::string f);

		Texture texture;
		RectangleShape rectangleShape;
		float widthT, heightT;
		

};



