#ifndef _ATRIBUTOS_H_
#define _ATRIBUTOS_H_
#include <string>

class Atributos {
    public:
        Atributos(int fuerza = 0, int agilidad = 0, int inteligencia = 0) 
        {
            this->fuerza = fuerza;
            this->agilidad = agilidad;
            this->inteligencia = inteligencia;
        }
        friend class Entidad;
    private:
        int fuerza, agilidad, inteligencia;
};
#endif


// Sets & Gets
/*void setFuerza(int fuerza)
{
   this->fuerza = fuerza;
}
int getFuerza() const
{
    return fuerza;
}
void setAgilidad(int agilidad)
{
    this->agilidad = agilidad;
}
int getAgilidad() const
{
    return agilidad;
}
void setInteligencia(int inteligencia)
{
    this->inteligencia = inteligencia;
}

int getInteligencia() const
{
    return inteligencia;
}
*/