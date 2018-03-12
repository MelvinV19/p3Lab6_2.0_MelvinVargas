#include <string>
#include <iostream>
#ifndef ITEM_H
#define ITEM_H
using namespace std;

class Item{
    private:
        int x;
        int y;
    public:
        Item();
        Item(int,int);
        int getX();
        void setX(int);
        int getY();
        void setY(int);
        ~Item();
};
#endif
