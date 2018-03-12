#include <string>
#include <iostream>
#include "Bomba.h"
#ifndef ESPINA_H
#define ESPINA_H
using namespace std;

class Espina: public Bomba{
    private:
        int cantidad;
    public:
        Espina();
        Espina(int);
        int getCantidad();
        void setCantidad(int);
        string toString();
        ~Espina();
};
#endif
