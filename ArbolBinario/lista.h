#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"


class lista
{
    public:
        lista();
        lista(nodo * n);

        nodo * apoyo = new nodo();

        //funciones del arbol
        void addnodo(nodo * n);
        void eliminarnodo(int c);
        void preorden();
        void postorden();
        void inorden();
        void imprimiraltura();
        void imprimirnivel();
        void imprimirtamano();
        void imprimirhojas();





        int nivel;
        int cantidad;
        int side;

        nodo * raiz;
        nodo * raiztemp;
        nodo * temp1;
        nodo * temp2;


        virtual ~lista();


    protected:

    private:
};

#endif // LISTA_H
