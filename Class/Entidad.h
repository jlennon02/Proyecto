#ifndef _ENTIDAD_H_
#define _ENTIDAD_H_
#include <string>

class Entidad {
    public:
        Entidad() {}

        void setId(std::string go){}

        void setVida(bool);
        int getVida() const;

    protected:
        std::string id;
        bool vida;

};
#endif