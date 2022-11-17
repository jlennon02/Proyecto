#ifndef _OBJETOS_H_
#define _OBJETOS_H_
#include <string>

class Objetos {
    public:
        Objetos();
        Objetos(Objetos &o);

        void setId(std::string);
        std::string getId() const;

        void setUtilidad(std::string);
        bool getUtilidad() const;
    private:
        std::string id;      
        std::string nombres;  
        bool utilidad;
};
#endif