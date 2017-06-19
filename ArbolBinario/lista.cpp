#include "lista.h"
#include <iostream>

using namespace std;

lista::lista()
{
    //ctor
}

lista::lista(nodo *n)
{
    addnodo(n);
}




void lista::eliminarnodo(int c)
{

}

void lista::preorden()
{

}

void lista::postorden()
{

}

void lista::inorden()
{

}

void lista::imprimiraltura() //imprimir el nivel+1
{
    nivel=nivel+1;
    cout << "La altura es de: " << nivel << endl;
}

void lista::imprimirhojas()//recorrer y contar los que no tienen siguiente
{

}

void lista::imprimirnivel()//recorrido parecido al de hojas, contando los anteriores que hay
{

}

void lista::imprimirtamano()
{
    cout << "El tamano del arbol es de: " << cantidad << endl;
}

lista::~lista()
{
    //dtor
}



