#include <string>
#include <iostream>
#include "Bomba.h"
#ifndef NORMAL_H
#define NORMAL_H
using namespace std;

class Normal: public Bomba{
    private:
        int alcance;
    public:
        Normal();
        Normal(int);
        int getAlcance();
        void setAlcance(int);
        string toString();
        ~Normal();
};
#endif
