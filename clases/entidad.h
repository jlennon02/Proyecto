#ifndef _ENTIDAD_H_
#define _ENTIDAD_H_
#include <string>
#include "atributos.h"

class Entidad {
    public:
        Entidad(std::string _nombre, char _genero, Atributos _atributos, int _salud[4]){
            nombre = _nombre;
            genero = _genero;
        }
        
        void setId(std::string _id) {
            id = _id;
        }
        std::string getId() const {
            return id;
        }
        void setNombre(std::string _nombre) {
            nombre = _nombre;
        }
        std::string getNombre() const{
            return nombre;
        }
        void setGenero(char _genero) {
            genero = _genero;   
        }
        char getGenero() const{
            return genero;
        }
    private:
       std::string id;
       std::string nombre;
       char genero;
       bool vida = 1;
        
};
#endif