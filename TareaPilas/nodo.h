#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;
class nodo
{
    public:
        nodo();
        nodo(int num);
        nodo(string s);
        nodo*sig;
        nodo*ant;
        string signo;
        int num;
        virtual ~nodo();

    protected:

    private:
};

#endif // NODO_H
