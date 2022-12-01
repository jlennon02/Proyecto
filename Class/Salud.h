#ifndef _SALUD_H_
#define _SALUD_H_
#include <string>

class Salud {
    public:
        Salud(int _hp = 100, int _hambre = 100, int _sed = 100, int _estamina = 100)
        {
            hp = _hp;
            hambre = _hambre;
            sed = _sed;
            estamina = _estamina;
        }
        friend class Entidad;
    private:
        int hp, hambre, sed, estamina;
};
#endif

/*
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
*/