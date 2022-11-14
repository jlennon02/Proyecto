#ifndef _SALUD_H_
#define _SALUD_H_
#include <string>

class Salud {
    public:
        Salud(int _hp, int _hambre, int _sed, int _estamina) 
        {
            hp = _hp;
            hambre = _hambre;
            sed = _sed;
            estamina = _estamina;
        }

        void setHp(int _hp) 
        {
           hp = _hp;
        }

        int getHp() const 
        {
            return hp;
        }

        void setHambre(int _hambre) 
        {
            hambre = _hambre;    
        }

        int getHambre() const 
        {
            return hambre;
        }

        void setSed(int _sed)
        {
            sed = _sed;
        }

        int getSed() const 
        {
            return sed;
        }

        void setEstamina(int _estamina)
        {
            estamina = _estamina;
        }

        int getEstamina() const 
        {
            return estamina;
        }

    private:
        int hp{100}, hambre{100}, sed{100}, estamina{100};
};
#endif