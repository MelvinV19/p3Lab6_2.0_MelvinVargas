#include <iostream>
#include <string>
#include "Bomba.h"
#include "Item.h"
#include "V.h"
#include "Normal.h"
#include "Espina.h"
#include <vector>
#ifndef ESCENARIO_H
#define ESCENARIO_H
using namespace std;
class Escenario
{
  private:
    Item* matriz[11][13];
    vector<Bomba*> bombas;
  public:
	string nombre;
    Escenario(string, int);
    Escenario();
    void setNombre(string);
    ~Escenario();
};
#endif
