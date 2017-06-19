#include "hash.h"
#include "lista.h"
#include "nodo.h"
#include <iostream>

hash::hash()
{
    tamano=10;

}

void hash::insertar(string c,int num)
{
    nodo * n = new nodo(c,num);
    int pos=hashh(claveN(c));
    tabla[pos].addNodo(n);
}

nodo * hash::buscar(string c)
{
    int pos=hashh(claveN(c));
    if(tabla[pos].vacio())
        return 0;
    return tabla[pos].buscar(c);
}
bool hash::eliminar(string c)
{
    int pos=hashh(claveN(c));
    if(tabla[pos].vacio())
        return false;
    return tabla[pos].eliminar(c);
}

int hash::claveN(string cadenaux)//OBTIENE LA SUMA DE LOS VALORES ASCII DE CADA CARACTER DE LA CADENA
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

int hash::hashh(int clave)//SE DETERMINA LA POSICION EN LA QUE SE GUARDARA LA CADENA
{
    return clave%maximo;
}





hash::~hash()
{
    //dtor
}
