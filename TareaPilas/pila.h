#ifndef PILA_H
#define PILA_H
#include "nodo.h"


class pila
{
    public:
        pila();
        nodo * head;
        nodo * top();
        int getSize();
        void imprimir();

        void push(nodo*n);

        void pop(nodo *n);
        void pushO(nodo*n);
        virtual ~pila();

    protected:

    private:
};

#endif // PILA_H
