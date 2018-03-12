#include <string>
#include <iostream>
#include "Item.h"
#ifndef BOMBA_H
#define BOMBA_H
using namespace std;

class Bomba:public Item{
    private:
    public:
	int contador;
    Bomba();
    Bomba(int);
    int getContador();
    void setContador(int);
    ~Bomba();
};
#endif
