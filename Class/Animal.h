#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
#include "entidad.h"
#include "Personaje.h"
#include <SFML/Graphics.hpp> 

class Animal : public Entidad {
    public:
        Animal(){};
        // la clase animal hereda todo de la clase endidad por lo que aqui solo hace falta poner metodos y herencias
    
        void mostrar_sprite() {
            // codigo de impresion de sprite 
        }


    private:
        sf::Texture texture;

};
#endif
