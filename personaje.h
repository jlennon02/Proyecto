#ifndef _PERSONAJE_H_
#define _PERSONAJE_H_
#include <string>

class Personaje {
    public:
        Personaje(std::string _nombre, char _genero, int _atributos[3], int _salud[4]){
            nombre = _nombre;
            genero = _genero;
            for(int i = 0; i < 3; i++)
                atributos[i] = _atributos[i];
            for(int i = 0; i < 5 ; i++)
                salud[i] = _salud[i];
        }
        
        void setId(std::string _id) {
            id = _id;
        }
        std::string getId() const {
            return id;
        }
        void setNombre(std::string _nombre) {
            nombre = _nombre;
        }
        std::string getNombre() const{
            return nombre;
        }
        void setGenero(char _genero) {
            genero = _genero;   
        }
        char getGenero() const{
            return genero;
        }
        void setAtributos(int _atributos[3]){
            for(int i = 0; i < 3; i++) 
                atributos[i] = _atributos[i]; 
        }
/*
        int getFuerza() const{
            return atributos[0];
        }
        int getAgilidad() const{
            return atributos[1];
        }
        int getInteligencia() const{
            return atributos[2];
        }
*/
        /*int* getAtributos() const{
            int _atributos[3];
            for(int i = 0; i < 3; i++)
                _atributos[i] = atributos[i];
            return _atributos; //[567, 100, 220] [0] => Fuerza, [1] => Agilidad, [2] => Inteligencia
            // 
        }*/
        void setSalud(int _salud[4]){
            for(int i = 0; i < 4; i++) 
                salud[i] = _salud[i]; 
        }
        /*int* getSalud() const{
            int _salud[4];
            for(int i = 0; i < 4; i++)
                _salud[i] = salud[i];
            return _salud;
        }*/
        
        /*
        string getSalud() const{
            string Salud; 
            Salud = Salud.append(to_string(salud[0])).append(",").append(to_string(salud[1])).append(",").append(to_string(salud[2])).append(",").append(to_string(salud[3]));
            return Salud; // "100,100,100,100"
        }
        void setAtributos(int _atributos[3]){
            for(int i = 0; i < 3; i++) 
                atributos[i] = _atributos[i]; 
        } */

    private:
       std::string id;
       std::string nombre;
       char genero;
       int atributos[3]; //[0] => Fuerza, [1] => Agilidad, [2] => Inteligencia
       int salud[4]; // [0] => HP, [1] => Hambre, => [2] => Sed [3] => Estamina
       bool vida = 1;
        
};
#endif