#include "Escenario.h"
#include <string>
#include <iostream>
#include "Item.h"
#include "Bomba.h"
#include "Normal.h"
#include "V.h"
#include "Espina.h"
#include <vector>
using namespace std;

Escenario::Escenario(string nombre, int tipo){
    this->nombre=nombre;
    if (tipo==1){
	    bombas.push_back(new Normal());
    }
    if (tipo==2){
        bombas.push_back(new V());
    }
    if (tipo==3){
        bombas.push_back(new Espina());
    }
}

void Escenario::setNombre(string nombre){
    this->nombre = nombre;
}

Escenario::~Escenario(){

}

