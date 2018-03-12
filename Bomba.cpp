#include "Bomba.h"
#include <iostream>
#include <string>
using namespace std;

Bomba::Bomba(int contador){
    this->contador = contador;
}
Bomba::Bomba(){

}

int Bomba::getContador(){
    return contador;
}

void Bomba::setContador(int contador){
    this->contador = contador;
}

Bomba::~Bomba(){

}

