#ifndef _PERSONAJE_H_
#define _PERSONAJE_H_
#include <string>
#include "Entidad.h"
#include "Salud.h" //   por si elijen la 1


class Personaje : public Entidad{
    public:
        Personaje(std::string _id, int _atr_inteligencia, Salud &o[3]);///   1
        // elijan la formas correcta para ustedes 1 o 2
        //Personaje(std::string _id, int _inteligencia, int _hambre, int _sed, int _stamina);///    2
    
        ///Personaje(Personaje &o);
    
        void getid(std::string _id){
            id=_id;
        }
        std::string setid() const{
            return id;
        }
        
        void getinteligencia(int _atr_inteligencia){
            inteligencia=_atr_inteligencia;
        }
        int setinteligencia() const{
            return inteligencia;
        }
        /*
        void getsalud(Salud &o[3]){
            fuerza=o[0];
            agilidad=o[1];
            inteligencia=o[2];
        }
        
        Salud setfuerza() const{
            ////// sobrecarga de operador
        }
        */
    
    
    /*
        void gethambre(int _hambre){
            hambre=_hambre;
        }
        int sethambre() const{
            return hambre;
        }
    
        void getsed(int _sed){
            sed=_sed;
        }
        int setsed() const{
            return sed
        }
    
        void getstamina(int _stamina){
            stamina=_stamina;
        }
        int setstamina() const{
            return stamina
        }
    */
    private:
        std::string id;
        int inteligencia;
        Salud bar_estados[3];
        // int hambre=100;
        // int sed=100;
        // int stamina=100;
};
#endif
