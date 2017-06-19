#include "arbol.h"
#include "nodo.h"

arbol::arbol()
{
    //ctor
}

nodo * arbol::crearnodo(int n)
{
    nodo * nuevo = new nodo();
    nuevo->valor=n;
    nuevo->derecha=0;
    nuevo->izquierda=0;

    return nuevo;
}

void arbol::insertar(nodo*& arbol, int n)
{
    if(arbol==0)
    {
        nodo * nuevo=new nodo(n);
        arbol = nuevo;
    }else
    {
        raiz=arbol->valor;
        if(n<raiz)
        {
            insertar(arbol->izquierda,n);
        }else
        {
            insertar(arbol->derecha, n);
        }
    }
}
arbol::~arbol()
{
    //dtor
}
