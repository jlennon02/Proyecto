#ifndef _ATRIBUTOS_H_
#define _ATRIBUTOS_H_
#include <string>

class Atributos {
    public:
        Atributos(int _fuerza, int _agilidad, int _inteligencia) 
        {
            fuerza = _fuerza;
            agilidad = _agilidad;
            inteligencia = _inteligencia;
        }
        Atributos(atributos &o)

        void setFuerza(int _fuerza) 
        {
           fuerza = _fuerza;
        }

        int getFuerza() const 
        {
            return fuerza;
        }

        void setAgilidad(int _agilidad) 
        {
            agilidad = _agilidad;    
        }

        int getAgilidad() const 
        {
            return agilidad;
        }

        void setInteligencia(int _inteligencia)
        {
            inteligencia = _inteligencia;
        }

        int getInteligencia() const 
        {
            return inteligencia;
        }

    private:
        int fuerza{0}, agilidad{0}, inteligencia{0};
};
#endif