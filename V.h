#include <string>
#include <iostream>
#include "Bomba.h"
#ifndef V_H
#define V_H
using namespace std;

class V:public Bomba{
    private:
    public:
        V();
        string toString();
        ~V();
};
#endif
