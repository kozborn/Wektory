#include "wektor.h"

Wektor::Wektor()
{

}

Wektor::Wektor(Punkt st, Punkt en){
    this->start = st;
    this->end = en;
}

void Wektor::print(){
    this->start.print();
    this->end.print();
}
