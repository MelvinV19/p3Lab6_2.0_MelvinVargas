#include <string>
#include <iostream>
#include "Escenario.h"
#include <vector>
#ifndef TREN_H
#define TREN_H
using namespace std;

class Tren:public Escenario{
  private:
    int postrenx;
    int postreny;	
    vector<string>posicionestren;
  public:
    Tren(int,int,int);
    int getPosTrenX();
    int getPosTrenY();
    ~Tren();
};
#endif
