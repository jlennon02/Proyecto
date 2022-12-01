#ifndef _ENTIDAD_H_
#define _ENTIDAD_H_
#include <string>
#include "Salud.h"
#include "Atributos.h"
#include "../AllSprites.h"

class Entidad{
    public:
        Entidad(std::string _nombre, Salud _salud, Atributos _atributos)
        {
            nombre = _nombre;
            salud = _salud;
            atributos = _atributos;
        }
        
        void getnombre(std::string _nombre){
            nombre = _nombre;
        }
        std::string setnombre() const{
            return nombre;
        }
    protected:
        std::string nombre;
        Salud salud;
        Atributos atributos;
};
#endif
