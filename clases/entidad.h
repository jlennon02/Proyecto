#ifndef _ENTIDAD_H_
#define _ENTIDAD_H_
#include <string>
#include "atributos.h"

class Entidad {
    public:
        Entidad();
        Entidad(Entidad &o);

        void setId(std::string);
        std::string getVida() const;

        void setVida(bool);
        bool getVida() const;       

    private:
        std::string id;
        bool vida;

};
#endif