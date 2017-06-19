#include "tablahash.h"
#include "lista.h"
#include "nodo.h"
#include <iostream>
using namespace std;

tablahash::tablahash()
{
    tamano=10;

}

void tablahash::insersion(string c,int num)
{
    nodo * n = new nodo(c,num);
    int pos=hashh(claveN(c));
    tabla[pos].addNodo(n);
}

nodo * tablahash::busqueda(string c)
{
    int pos=hashh(claveN(c));
    if(tabla[pos].vacio())
        return 0;
    return tabla[pos].buscar(c);
}
bool tablahash::eliminacion(string c)
{
    int pos=hashh(claveN(c));
    if(tabla[pos].vacio())
        return false;
    return tabla[pos].eliminar(c);
}

int tablahash::claveN(string cadenaux)//OBTIENE LA SUMA DE LOS VALORES ASCII DE CADA CARACTER DE LA CADENA
{
    int clavee=0, ascii, x=0;
    while(x < (cadenaux.length()-1))
    {
       ascii= (int)(cadenaux[x]);
       clavee+=ascii;
       x++;
    }
    return clavee;
}

int tablahash::hashh(int clave)//SE DETERMINA LA POSICION EN LA QUE SE GUARDARA LA CADENA
{
    return clave%tamano;
}



tablahash::~tablahash()
{
    //dtor
}
