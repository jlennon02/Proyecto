#ifndef _MAPA_H_
#define _MAPA_H_
#include <string>

class Mapa {
    public:
        Mapa(int _tam[2]){
            for(int i = 0; i < 2; i++)
                tam[i] = _tam[i];     
        }
        
        void setTam(int _tam[2]){
            for(int i = 0; i < 2; i++) 
                tam[i] = _tam[i]; 
        }

        /*int* getTam() const{
            int _tam[2];
            for(int i = 0; i < 2; i++)
                _tam[i] = tam[i];
            return _tam;
        }*/
        
    private:
       int tam[2]; // (tamX, tamY) tam[0] => tamX, tam[1] => tamY
        
};
#endif