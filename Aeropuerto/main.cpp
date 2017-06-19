#include <iostream>
#include "checkin.h"
using namespace std;

int main()
{
    int peso;
    CheckIn fila;
    string nombre;
    int op=0;
    while (op!=4){
    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "MENU" << endl;
    cout << "1. Add new passenger (Encolar)" << endl;
    cout << "2. Check in (Desencolar)" << endl;
    cout << "3. Empty?" << endl;
    cout << "4. Exit" << endl;
    cout << "Cantidad: "<< fila.cant << endl;
    cout << "Enter you option" << endl;
    cin >> op;
    switch (op){
        case 1:
            cout << "Enter the name" << endl;
            cin >> nombre;
            cout << "Enter the weight" << endl;
            cin >> peso;
            fila.add(new Pasajero(nombre, peso));
            break;
        case 2:
            fila.checkIn();
            break;
        case 3:
            if (fila.isEmpty())
                cout << "The line is empty" << endl;
            else
                cout << "The line is not empty" << endl;
            break;
    } cout << endl;
    }

    return 0;
}
