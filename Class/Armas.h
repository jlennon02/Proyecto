#ifndef _ARMAS_H_
#define _ARMAS_H_
#include <string>

class Armas : public Objetos {
    public:
        Armas();
        Armas(Armas &o);

        void setConsumido(std::string);
        bool getConsumido() const;
    private:
        int daño;
        bool consumido;

};
#endif