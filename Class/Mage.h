
#ifndef _MAGE_H_
#define _MAGE_H_
#include "Personaje.h"

class Mage: public Personaje{
  public:
    Mage(int _daño, int _hitbox, int _vel_ataq):daño(_daño), hitbox(_hitbox), vel_ataq(_vel_ataq){}
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
  
  private:
    int daño;
    int hitbox;
    int vel_ataq;
}
#endif
