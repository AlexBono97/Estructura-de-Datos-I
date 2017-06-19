#ifndef ARBOL_H
#define ARBOL_H
#include "nodo.h"


class arbol
{
    public:
        arbol();

        int raiz;

        nodo * crearnodo(int n);
        void insertar(nodo*&, int n);

        virtual ~arbol();

    protected:

    private:
};

#endif // ARBOL_H
