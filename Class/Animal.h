#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
#include "entidad.h"
#include "Personaje.h"
#include <SFML/Graphics.hpp> 

class Animal : public Entidad {
    public:
        Animal(std::string _idAnimal, std::string _nombre, Salud _salud, Atributos _atributos) :
            Entidad(_nombre, _salud, _atributos) 
        {
            idAnimal = _idAnimal; //Recomendado de la fomra idA_XXXX
        }
        
        void setIdAnimal(std::string _idAnimal) 
        {   
            idAnimal = _idAnimal;
        }

        std::string getIdAnimal() const 
        {
            return idAnimal;
        }

    private:
        std::string idAnimal;

};
#endif
