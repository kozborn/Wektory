#ifndef WEKTOR_H
#define WEKTOR_H

#include "punkt.h"

class Wektor
{
public:

    Punkt start;
    Punkt end;

    Wektor();
    Wektor(Punkt, Punkt);

    void print();
};

#endif // WEKTOR_H
