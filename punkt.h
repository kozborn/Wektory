#ifndef PUNKT_H
#define PUNKT_H

#include <iostream>

using namespace std;

class Punkt
{
public:
    double x;
    double y;
    double z;
    Punkt();
    Punkt(double,double,double);

    void print(){
        cout << "["<< this->x << "," << this->y << "," << this->z << "]";
    }
};

#endif // PUNKT_H
