#include <iostream>
#include "nodo.h"
#include "lista.h"

using namespace std;

int main()
{
    lista * lista1 = new lista();

    nodo * miNodo1 = new nodo(8);
    lista1->addnodo(miNodo1);
    nodo * miNodo2 = new nodo(3);
    lista1->addnodo(miNodo2);
    nodo * miNodo3 = new nodo(1);
    lista1->addnodo(miNodo3);
    nodo * miNodo4 = new nodo(6);
    lista1->addnodo(miNodo4);
    nodo * miNodo5 = new nodo(7);
    lista1->addnodo(miNodo5);
    cout << miNodo4->getizquierda()->getnumero() << endl;
    nodo * miNodo6 = new nodo(4);
    lista1->addnodo(miNodo6);
    cout << "Funciona" << endl;

    nodo * miNodo7 = new nodo(10);
    lista1->addnodo(miNodo7);
    nodo * miNodo8 = new nodo(14);
    lista1->addnodo(miNodo8);
    //nodo * miNodo9 = new nodo(13);
    //lista1->addnodo(miNodo9);
    lista1->imprimirtamano();
    cout<< "La raiz es: " << lista1->raiz->getnumero() << endl;

    return 0;
}
