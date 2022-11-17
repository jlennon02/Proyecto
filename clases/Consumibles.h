#ifndef _CONSUMIBLES_H_
#define _CONSUMIBLES_H_
#include <string>

class Consumibles : public Objetos {
    public:
        Consumibles();
        Consumibles(Consumibles &o);

        void setConsumido(std::string);
        bool getConsumido() const;
    private:
        bool consumido;
};
#endif