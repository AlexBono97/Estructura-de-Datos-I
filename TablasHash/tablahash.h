#ifndef TABLAHASH_H
#define TABLAHASH_H
#include "nodo.h"
#include "lista.h"
#include <iostream>


using namespace std;

class tablahash
{
    public:
        tablahash();
        void insersion(string c,int num);
        nodo * busqueda(string c);
        bool eliminacion(string c);
        int claveN(string cadenaux);
        int hashh (int c);
        virtual ~tablahash();

    protected:

    private:
        int tamano;
        lista tabla[10];
};

#endif // TABLAHASH_H
