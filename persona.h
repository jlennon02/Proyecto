#ifndef _PERSONAJE_H_
#define _PERSONAJE_H_
#include <string>
using namespace std;

class Personaje {
    public:
        Personaje(string _nombre, char _genero, int _atributos[3], int _salud[4]){}
        
        void setId(string _id) {
            id = _id;
        }
        string getId() const {
            return id;
        }
        void setNombre(string _nombre) {
            nombre = _nombre;
        }
        string getNombre() const{
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
        int getAtributos() const{
            return atributos[0];
        }
        void setSalud(int _salud[4]){
            for(int i = 0; i < 4; i++) 
                salud[i] = _salud[i]; 
        }
        int getSalud() const{
            return salud[0];
        }
        
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
       string id;
       string nombre;
       char genero;
       int atributos[3]; //[0] => Fuerza, [1] => Agilidad, [2] => Inteligencia
       int salud[4]; // [0] => HP, [1] => Hambre, => [2] => Sed [3] => Estamina
       bool vida = 1;
        
};
#endif