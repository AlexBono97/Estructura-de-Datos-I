#include <iostream>
#include "nodo.h"
#include "arbol.h"

using namespace std;

int main()
{
    arbol * apoyo = new arbol();

    apoyo ->crearnodo(8);
    apoyo->insertar(8);


    cout << "Hello world!" << endl;
    return 0;
}
