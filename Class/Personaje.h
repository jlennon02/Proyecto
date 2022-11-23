#ifndef _PERSONAJE_H_
#define _PERSONAJE_H_
#include <string>

class Personaje : public Entidad {
    public:
        Personaje(std::string id;std::strin nombre, int edad);
        Personaje();
        Personaje(Personaje &o);

        void setNombre(std::string);
        std::string getNombre() const;
        void setEdad(int);
        int getEdad() const;
    private:
        std::string nombre;
        int edad;        
};
#endif