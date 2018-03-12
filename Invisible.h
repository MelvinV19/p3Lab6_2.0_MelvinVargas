#include <string>
#include <iostream>
#ifndef  INVISIBLE_H
#define  INVISIBLE_H
#include "Escenario.h"
#include "Bomba.h"
#include "Item.h"
#include <vector>

using namespace std;

class Invisible:public Escenario{
  private:
    int vidas;
    int tipo;
  public:
    Invisible(int, int);
    ~Invisible();
};
#endif
