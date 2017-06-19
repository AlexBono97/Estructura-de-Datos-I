#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;

class nodo
{
    public:
        nodo(string c,int n);
        nodo * sig;
        string  clave;
        int numero;
        virtual ~nodo();

    protected:

    private:
};

#endif // NODO_H
