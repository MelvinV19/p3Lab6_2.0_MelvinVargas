#include <string>
#include <iostream>
#include "Item.h"
#ifndef JUGADOR_H
#define JUGADOR_H
using namespace std;

class Jugador: public Item{
    private:
        string nombre;
        int estado;
        int tipo;
    public:
        Jugador();
        Jugador(string,int,int);
        string getNombre();
        void setNombre(string);
        int getEstado();
        void setEstado(int);
        int getTipo();
        void setTipo(int);
        ~Jugador();
};
#endif
