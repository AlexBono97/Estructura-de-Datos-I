#include <iostream>
#include "nodo.h"
#include "tablahash.h"
#include "lista.h"

using namespace std;

int main()
{

    tablahash * tabla= new tablahash();
    while(true)
    {
       cout << "Menu"<< endl;
       cout <<"1)Insertar datos"<< endl;
       cout <<"2)Buscar Datos"<< endl;
       cout <<"3)Eliminar Datos"<< endl;
       cout <<"4)Salir"<< endl;
       cout <<"Ingrese una opcion: ";
       int sel;
       cin>>sel;
       switch(sel)
       {
       case 1:
        {
            cout<<"Ingrese el nombre"<<endl;
            string name;
            cin>>name;
            cout<<"Ingrese el numero"<<endl;
            int num;
            cin>>num;
            tabla->insersion(name,num);
            break;
        }
       case 2:
        {
            cout<<"Ingrese el nombre"<<endl;
            string name;
            cin>>name;
            nodo * n=tabla->busqueda(name);
            if(n!=0)
            {
                cout<< n->clave<<" "<<n->numero<<endl;
            }
            else
            {
                cout<< "No se encontraron los datos"<<endl;
            }
            break;
        }
       case 3:
        {
            cout<<"Ingrese el nombre"<<endl;
            string name;
            cin>>name;
            if(tabla->eliminacion(name))
            {
                cout<<"Se eliminaron los datos"<<endl;
            }
            else
            {
                cout<< "No se eliminaron los datos"<<endl;
            }
            break;
        }
       case 4:
        {
            return 0;
        }

       }

    }

    return 0;
}

