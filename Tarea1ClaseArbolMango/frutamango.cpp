#include "frutamango.h"

frutamango::frutamango()
{
    setPeso(0);
    setSig(0);
}

frutamango::frutamango(int peso)//constructor 2
{
    setPeso(peso);
    setSig(0);

}

frutamango::frutamango(int p, frutamango * s)//constructor 3
{
    setPeso(p);
    setSig(s);

}

void frutamango::setPeso(int p)
{
    peso=p;
}

int frutamango::getPeso()
{
    return peso;
}

void frutamango::setSig(frutamango * s)
{
    siguiente = s;
}

frutamango * frutamango::getSig()
{
    return siguiente;
}

void frutamango::setAnt(frutamango * s)
{
    anterior =s;
}

frutamango * frutamango::getAnt()
{
    return anterior;
}


frutamango::~frutamango()
{
    //dtor
}
