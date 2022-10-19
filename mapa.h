#ifndef _MAPA_H_
#define _MAPA_H_
#include <string>
using namespace std;

class Mapa {
    public:
        Mapa(string _zona, char _genero, int _atributos[3], int _salud[4]){}
        
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
        

    private:
       punto pos_mapa;
       

        
};
#endif