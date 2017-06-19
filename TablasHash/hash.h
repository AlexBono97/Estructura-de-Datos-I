#ifndef HASH_H
#define HASH_H
#include <iostream>
#include "nodo.h"
#include "lista.h"

using namespace std;

class hash
{
    public:
        hash();
        void insertar(string c,int num);
        nodo * buscar(string c);
        bool eliminar(string c);
        int claveN(string cadenaux);
        int hashh(int c);

        virtual ~hash();

    protected:

    private:
        int tamano;
        lista tabla[10];
};

#endif // HASH_H
