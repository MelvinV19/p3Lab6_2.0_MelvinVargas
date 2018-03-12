#include "Invisible.h"
#include <iostream>
#include <string>
#include "Escenario.h"
using namespace std;

Invisible::Invisible(int vidas, int tipo):Escenario(nombre,tipo){
    this->vidas = vidas;
    this->tipo = tipo;
}

Invisible::~Invisible(){

}

