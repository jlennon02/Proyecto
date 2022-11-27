#pragma once
#include <SFML\Graphics.hpp>
#include <string>
using namespace sf;
using namespace std;

class Frames : public Drawable
{
public:
	Frames(string file, float posX = 0, float posY = 0, float resize = 1, float w = 0, float h = 0);
	Frames(Color color, float posX = 0, float posY = 0, float w = 0, float h = 0);

	//void update(RenderWindow&);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

	void setFile(string file);
	string getFile() const;
	void setWidthF(float w);
	float getWidthF() const;
	void setHeightF(float h);
	float getHeightF() const;

	void CreateFrame();
	void CreateFrameBackground();
	void CreateFrameBackgroundSize();

private:
	string file;
	float widthF, heightF;
	float posX, posY;
	float scale;

	Color color;
	Texture texture;
	RectangleShape rectangleShape;

};

