#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>

using namespace std;

class lista
{
    public:
        lista();
        void addNodo(nodo* n);
        nodo* buscar(string c);
        bool vacio();
        bool eliminar(string c);
        void imprimir();
        virtual ~lista();

    protected:

    private:
        nodo * head;
        nodo * tail;
};

#endif // LISTA_H
