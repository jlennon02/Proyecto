#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>

class Animal : public Entidad {
    public:
        Animal(std::string id;std::strin nombre, int edad);
        Animal();
        Animal(Personaje &o);

        void setAnimal(std::string);
        std::string getAnimal() const;
    private:
        std::string animal;        
};
#endif