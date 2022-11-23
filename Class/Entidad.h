#ifndef _ENTIDAD_H_
#define _ENTIDAD_H_
#include <string>

class Entidad {
    public:
        Entidad(std::string _nombre, int _hp, int _atr_agilididad, int _atr_fuerza): nombre(_nombre), hp(_hp), agilidad(_atr_agilidad), fuerza(_atr_fuerza){}
        ////    variables miembro son nombre ,hp ,agilidad ,fuerza
        ////    estas se heredan a las subclases
        void getnombre(std::string _nombre){
            nombre=_nombre;
        }
        std::string setnombre() const{
            return nombre;
        }
    
        void gethp(int _hp){
            hp=_hp;
        }
        int sethp() const{
            return hp;
        }
    
        void getagilidad(int _atr_agilidad){
            agilidad=_atr_agilidad;
        }
        int setagilidad() const{
            return agilidad;
        }
    
        void getfuerza(int _atr_fuerza){
            fuerza=_atr_fuerza;
        }
        int setfuerza() const{
            return fuerza;
        }
    protected:
        std::string nombre;
        int hp;
        int agilidad;
        int fuerza;
};
#endif
