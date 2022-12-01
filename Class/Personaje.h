#ifndef _PERSONAJE_H_
#define _PERSONAJE_H_
#include <string>
#include "Entidad.h"

class Personaje : public Entidad{
    public:
        Personaje(std::string _idPersonaje, std::string _nombre, Salud _salud, Atributos _atributos) :
            Entidad(_nombre, _salud, _atributos) 
        {
            idPersonaje = _idPersonaje; //Recomendado de la fomra idP_XXXX
        }
    
        void getidPersonaje(std::string _idPersonaje){
            idPersonaje = _idPersonaje;
        }
        std::string setidPersonaje() const{
            return idPersonaje;
        }    
    
    private:
        std::string idPersonaje;
};
#endif

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