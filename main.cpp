#include <SFML/Graphics.hpp> 
// using namespace sf; // Podemos usar esto para no estar poniendo "sf" en cada funcion de sfml
/*
#include "personaje.h"
#include "mapa.h"
#include <iostream>
#include <array>
using namespace std;
*/

int main()
{   
    // Creacion de ventana: altura y ancho respectivamente, titulo, estilo
    sf::RenderWindow window(sf::VideoMode(1080, 800), "Test", sf::Style::Titlebar | sf::Style::Close); 
    // Para poder ubicar los eventos que ocurren
    sf::Event event;

    // Game Loop: Mientras la ventana del juego este abierta
    while (window.isOpen()) 
    {
        // Event polling
        while (window.pollEvent(event)) 
        {
            switch (event.type) 
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event:: KeyPressed:
                    if(event.key.code == sf::Keyboard::Escape)
                    window.close();
                    break;
            }
        }
        // Update

        // Render
        window.clear(); // Clear old frame

        // Dibujar el juego entre estos 2

        window.display(); // Tell app that window is done drawing
    }

    return 0;
}
    
    // FIN DE TEST

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

    cout << "HOLA" << endl;
    */
