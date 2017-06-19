#include "nodo.h"

nodo::nodo()//constructor default
{
    cantidad=0;
    //ctor
}

nodo::nodo(int c)
{
    setnumero(c);
}

nodo::~nodo()
{
    //dtor
}

int nodo::getcantidad()
{
    return cantidad;
}

int nodo::getnumero()
{
    return numero;
}

void nodo::setcantidad(int c)
{
    cantidad=c;
}

void nodo::setnumero(int n)
{
    numero=n;
}

void nodo::setanterior(nodo * n)
{
    anterior=n;
}

void nodo::setderecha(nodo * n)
{
    derecha=n;
}

void nodo::setizquierda(nodo * n)
{
    izquierda=n;
}

nodo * nodo::getanterior()
{
    return anterior;
}

nodo * nodo::getderecha()
{
    return derecha;
}

nodo * nodo::getizquierda()
{
    return izquierda;
}
