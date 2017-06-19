#include "lista.h"
#include "nodo.h"
#include <iostream>
using namespace std;
lista::lista()
{
   head=0;
   tail=0;
}
//Agrego un nodo
void lista::addNodo(nodo *n)
{
    if(head==0)
        head=n;
    else
        tail->sig=n;
    tail=n;
}
//Busco el nodo con la clave sin el hash y lo retorno si no lo encuentra retorno 0
nodo* lista::buscar(string  c)
{
    nodo * tmp=head;
    while(tmp!=0)
    {
      if(tmp->clave==c)
         break;
      tmp=tmp->sig;
    }
    return tmp;
}
//si el head es igual a 0 retorno que esta vacio sino retorno false
bool lista::vacio()
{
    return head==0 ? true:false;
}

bool lista::eliminar(string c)
{
    if(vacio())
        return false;
    else
    {
        if(head->clave==c)
        {
            head=head->sig;
            return true;
        }
        nodo * tmp=head;
            while(tmp!=0)
            {
                if(tmp->sig->clave==c)
                {
                    tmp->sig=tmp->sig->sig;
                    break;
                }
                tmp=tmp->sig;
            }
        return tmp==0 ? false:true;
    }
}

void lista::imprimir()
{
    nodo * tmp=head;
    while(tmp!=0)
    {
        cout<<tmp->clave<< " "<< tmp->numero<<endl;
    }
}

lista::~lista()
{
    //dtor
}
