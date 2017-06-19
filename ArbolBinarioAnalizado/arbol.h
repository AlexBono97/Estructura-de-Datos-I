#ifndef ARBOL_H
#define ARBOL_H
#include "Nodo.h"


class Arbol
{
    public:
        Arbol();
        void addNodo(int x);
        void eliminar(Nodo * raiz,int v);
        void preOrden(Nodo *root);
        void postOrden(Nodo *root);
        void inOrden(Nodo * root);
        void PrintAltura(Nodo *root);
        void tamano(Nodo *root);
        void Nivel(Nodo *root);
        void Hojas(Nodo *root);

        Nodo * raiz;
        virtual ~Arbol();




    protected:

    private:
        void agregarNodo(Nodo *&raiz,Nodo *n);
        Nodo * buscar(Nodo * r,int n);
        int Altura(Nodo *r);
        int tam=0;
};

#endif // ARBOL_H
