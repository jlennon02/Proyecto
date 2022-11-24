
#ifndef _COMIDA_H_
#define _COMIDA_H_
#include "Consumibles.h"

class Comida: public Consumibles{
  public:
    Comida(int _vel_reg_hp, int _temp_efec, _reg_hambre):vel_reg_hp(_vel_reg_hp), temp_efec(_temp_efec), reg_hambre(_reg_hambre){}
    void getdaño(int _daño){
      daño = _daño;
    }
    int setadaño() const{
      return daño;
    }
      
    void gethitbox(int _hitbox){
       hitbox = _hitbox;
    }
    int sethitbox() const{
      return hitbox;
    }
      
    void gethitbox(int _vel_ataq){
       vel_ataq = vel_ataq;
    }
    int
  
  private:
    int daño;
    int hitbox;
    int vel_ataq;
}
#endif
