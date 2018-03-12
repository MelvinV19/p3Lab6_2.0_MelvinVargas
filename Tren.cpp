#include "Tren.h"
#include <iostream>
#include <string>
#include "Escenario.h"
using namespace std;

Tren::Tren(int postrenx,int postreny,int tipobomba):Escenario(nombre, tipobomba){
	this->postrenx=postrenx;
	this->postreny=postreny;
}

int Tren::getPosTrenX(){
	return postrenx;
}

int Tren::getPosTrenY(){
	return postreny;
}

Tren::~Tren(){

}


