#ifndef ARBOLMANGO_H
#define ARBOLMANGO_H
#include "frutamango.h"


class arbolmango
{
    public:
        arbolmango();

        frutamango * head;
        frutamango * tail;
        frutamango * temp1;
        frutamango * temp2;
        frutamango * temp3;
        int cant;

        void agregarfruta(frutamango * f);
        void insertafruta(frutamango * f, int pos);
        void eliminarfruta(int pos);
        void imprimirpeso();

        virtual ~arbolmango();

    protected:

    private:
};

#endif // ARBOLMANGO_H
