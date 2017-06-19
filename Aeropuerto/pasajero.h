#ifndef PASAJERO_H
#define PASAJERO_H
#include <iostream>

using namespace std;

class Pasajero
{
    public:
        Pasajero(string n, int p);
        virtual ~Pasajero();
        string nombre;
        int pesoE;
        Pasajero* next;


    protected:

    private:
};

#endif // PASAJERO_H
