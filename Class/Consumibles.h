#ifndef _CONSUMIBLES_H_
#define _CONSUMIBLES_H_
#include <string>

class Consumibles{
    public:
        Consumibles(int _reg_hp, int _reg_stamina, bool _consumido):reg_hp(_reg_hp), reg_stamina(_reg_stamina), consumido(_consumido) {};
        void getreghp(int _reg_hp){
            reg_hp = _reg_hp;
        }
        int setteghp() const{
            return reg_hp;
        }
            
        void getregstamina(int _reg_stamina){
            reg_stamina = _reg_stamina;
        }
        int setregstamina(){
            return reg_stamina;
        }

        void setConsumido(bool _consumido){
            consumido = _consumido;
        }
        bool getConsumido() const{
            return consumido;
        }
    private:
        int reg_stamina;
        int reg_hp;
        bool consumido;
};
#endif
