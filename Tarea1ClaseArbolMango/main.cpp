#include <iostream>
#include "frutamango.h"
#include "arbolmango.h"

using namespace std;

int main()
{
    frutamango * f();
    arbolmango * a = new arbolmango();
    while(true)
    {
        cout << "MENU" << endl;
        cout << "---------------------------------"<<endl;
        cout << "1)Agregar una fruta"<<endl;
        cout << "2)Insertar una fruta"<<endl;
        cout << "3)Eliminar una fruta"<<endl;
        cout << "4)Imprimir peso de todas las frutas"<<endl;
        cout << "5)Salir"<<endl;

        cout<<endl;
        cout << "Elija una opcion: ";
        int seleccion;
        cin>>seleccion;

        switch(seleccion)
        {
        case 1:
            {
                cout << "Ingrese el peso de la fruta: ";
                int peso;
                cin>>peso;
                a->agregarfruta(new frutamango(peso));
                break;
            }
        case 2:
            {
                cout << "Ingrese el peso de la fruta: ";
                int peso;
                cin>>peso;
                cout << "Ingrese la posicion deseada: ";
                int pos;
                cin>>pos;
                a->insertafruta(new frutamango(peso),pos);
                break;
            }
        case 3:
            {
              cout << "Ingrese la posicion deseada: ";
            int pos;
            cin>>pos;
            a->eliminarfruta(pos);
            break;
            }
         case 4:
            {
                a->imprimirpeso();
                break;
            }
         case 5:
            return 0;
        }


    }

    //frutamango * fruta1 = new frutamango(12);
    return 0;
}
