#include "Espina.h"
#include <iostream>
#include <string>
using namespace std;

Espina::Espina(int cantidad):Bomba(contador){
    this->cantidad=cantidad;
}

Espina::Espina(){

}

int Espina::getCantidad(){
    return cantidad;
}

void Espina::setCantidad(int cantidad){
    this->cantidad=cantidad;
}

Espina::~Espina(){
}

string Espina::toString(){
	return "E";
}
