#include <iostream>
#include "Nodo.h"
#include "arbol.h"


using namespace std;

int main()
{

    Arbol * ar = new Arbol();

    while(true)
    {
        cout << "-------------Menu-------------"<<endl;
        cout << "1)Agregar nodo" << endl;
        cout << "2)Eliminar nodo" << endl;
        cout << "3)Recorrido preorden" << endl;
        cout << "4)Recorrido postorden" << endl;
        cout << "5)Recorrido inorden" << endl;
        cout << "6)Imprimir altura" << endl;
        cout << "7)Imprimir nivel" << endl;
        cout << "8)Imprimir tamano" << endl;
        cout << "9)Imprimir hojas" << endl;
        cout << "10)Salir" << endl;
        int sel;
        cout << "Ingrese su eleccion: ";
        cin>>sel;

        switch(sel)
        {
        case 1:
            {
                int data;
                cout << "Ingrese el numero a almacenar: ";
                cin>>data;
                ar->addNodo(data);
                break;
            }
        case 2:
            {
                int x;
                cout << "Ingrese el dato a eliminar: ";
                cin>>x;
                ar->eliminar(ar->raiz,x);
                break;
            }
        case 3:
            {
                ar->preOrden(ar->raiz);
                break;
            }
        case 4:
            {
                ar->postOrden(ar->raiz);
                break;
            }
        case 5:
            {
                ar->inOrden(ar->raiz);
                break;
            }
        case 6:
            {
                ar->PrintAltura(ar->raiz);
                break;
            }
        case 7:
            {

                ar->Nivel(ar->raiz);
                break;
            }
        case 8:
            {
                ar->tamano(ar->raiz);
                break;
            }
        case 9:
            {
                ar->Hojas(ar->raiz);
                break;
            }
        case 10:
            {
                cout << "Adios" << endl;
                return 0;
            }
        }

    }
}
