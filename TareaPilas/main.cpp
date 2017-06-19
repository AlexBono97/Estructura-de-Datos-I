#include <iostream>
#include "nodo.h"
#include "pila.h"

using namespace std;

int main()
{
    pila p;

    while(true){
    cout << "MENU" << endl;
    cout << "---------------------------" << endl;
    cout << "1)Insertar numero" << endl;
    cout << "2)Insertar operador" << endl;
    cout << "3)Imprimir Pila" << endl;
    cout << "4)Salir" << endl;
    cout << "Elija una opcion: ";
    int seleccion;
    cin>>seleccion;

    switch(seleccion)
    {
    case 1:
        {
            cout<<"Ingrese un valor"<<endl;
            int n;
            cin>>n;
            nodo *nd=new nodo(n);
            p.push(nd);
            break;
        }
    case 2:
        {
            if(p.getSize()>=2){
                    cout<<"Ingrese el operador"<<endl;
                    string next;
                    cin>>next;
                    while(!(next=="+"||next=="-"||next=="*"||next=="x"||next=="/")){
                        cout<<"Ingrese un operador"<<endl;
                        cout<<"Operador: ";
                        cin>>next;
                        cout<<""<<endl;
                    }
                    nodo *tmp=new nodo(next);
                    p.pushO(tmp);
                    cout<<"Exito!!"<<endl;
                }else
                    cout<<"No hay valores suficientes"<<endl;
            break;
        }
    case 3:
        {
            p.imprimir();
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
