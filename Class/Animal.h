#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
#include "entidad.h"
#include "Personaje.h"
#include <SFML/Graphics.hpp> 

class Animal : public Entidad {
    public:
        Animal(std::string nombre):edad(edad), nombre(nombre){};
        Animal(sf::Texture &texture):texture(texture) {};
        
        void setnombrel(std::string nombre) {
            nombre = nombre;
        }
        std::string getnombre() const {
            return nombre;
        }


        void setedad(int edad){
            edad = edad;
        }
        int getedad() const{
            return edad;
        }

        void settexture(sf::Texture o) {
            texture = o;
        }
        void mostrar_sprite() {
            // codigo de impresion de sprite 
        }


    private:
        sf::Texture texture;
        std::string nombre;
        int edad;
};
#endif
