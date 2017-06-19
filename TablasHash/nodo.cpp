#include "nodo.h"
#include <iostream>
using namespace std;
nodo::nodo(string c,int n)
{
    sig=0;
    clave=c;
    numero=n;
}

nodo::~nodo()
{
    //dtor
}
