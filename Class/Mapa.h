#ifndef _MAPA_H_
#define _MAPA_H_
#include <string>

class Mapa {
    public:
        Mapa(int width, int height){
            tam[0] = width;
            tam[1] = height;
        }        
        void setwidth(int width){
            tam[0] = width;
        }
        int getwidth() const {
            return tam[0];
        }
        void setheight(int height){
            tam[1] = height;
        }
        int getheight() const {
            return tam[1];
        }
        
    private:
       int tam[2]; // (tamX, tamY) tam[0] => tamX, tam[1] => tamY

};
#endif