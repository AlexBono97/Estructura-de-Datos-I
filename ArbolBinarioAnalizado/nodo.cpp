#include "nodo.h"
#include <iostream>

using namespace std;

Nodo::Nodo(int x)
{
    data=x;
    derecho=0;
    izquierdo=0;
    anterior=0;
}

Nodo::~Nodo()
{
    //dtor
}
