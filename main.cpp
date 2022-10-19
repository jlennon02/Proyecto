#include <SFML/Graphics.hpp>
/* #include <iostream>
#include <array>
#include "personaje.h"
#include "mapa.h"
using namespace std; */

int main()
{   

    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
}
}




    // Creacion de personajes 
    /*
    int atja[3]={1200000,310,4100};
    int salu[4]={120,340,340, 10000};
    Personaje j("jorge",'M',atja,salu);
    
    int atr[3] = {10, 10, 10};
    int salr[4] = {100,80,70, 100};
    Personaje r("Rodrigo", 'H', atr, salr);

    int A3[3]{13,15,20};
    int S3[4]{100,100,100,100};
    Personaje p3("Abelardo", 'H', A3, S3);

    int m1[2]{1080, 720};
    Mapa mapa1(m1);
    return 0;
    */


/* #include <SFML/Graphics.hpp>

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

} */