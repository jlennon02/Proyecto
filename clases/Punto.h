#ifndef _POINT_H_
#define _POINT_H_
#include <string>
#include <iostream>
using namespace std;

class Punto {
    public:
        Punto(int _x, int _y) : x(_x), y(_y) {}
        
        void setX(int _x) {
            x = _x;
        }
        int getX() const {
            return x;
        }
        void setY(int _y) {
            y = _y;
        }
        int getY() const {
            return y;
        }      
        void print() const {
            cout << "(" << x << ", " << y << ")";
        } 

    private:
        int x, y;
};

#endif