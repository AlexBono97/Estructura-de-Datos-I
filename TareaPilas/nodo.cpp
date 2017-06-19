#include "nodo.h"

nodo::nodo()
{
    //ctor
}

nodo::nodo(int n)
{
    num=n;
    sig=0;
    ant=0;
}

nodo::nodo(string s)
{
    signo=s;
    sig=0;
    ant=0;
}

nodo::~nodo()
{
    //dtor
}
