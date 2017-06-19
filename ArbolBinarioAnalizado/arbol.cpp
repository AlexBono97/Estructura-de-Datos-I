#include "arbol.h"
#include <iostream>

using namespace std;

Arbol::Arbol()
{
    raiz=0;
    tam=0;
    //ctor
}

void Arbol::addNodo(int x)
{
    Nodo * n= new Nodo(x);
    agregarNodo(raiz,n);
    tam++;
}

void Arbol::agregarNodo(Nodo *&raiz,Nodo *n)
{
    if(raiz==0)
    {
        raiz=n;
    }
    else
    {
        if(raiz->data > n->data)
        {
            agregarNodo(raiz->izquierdo,n);
        }
        else
        {
            agregarNodo(raiz->derecho,n);
        }
    }

}

void Arbol::eliminar(Nodo * raiz,int x)
{
    Nodo * temp= buscar(raiz,x);
    if(temp==0)
    {
        cout << "El elemento solicitado no existe" <<endl;
    }
    Nodo *tempMenor=temp->izquierdo;
    *temp =*temp->derecho;
    agregarNodo(raiz,tempMenor);
    tam--;
}

Nodo * Arbol::buscar(Nodo * r,int n)
{
    if(r==0)
    {
        return 0;
    }
    else if(r->data==n)
    {
        return r;
    }
    else if(n< r->data)
    {
        buscar(r->izquierdo,n);
    }
    else if(n> r->data)
    {
        buscar(r->derecho,n);
    }
}


void Arbol::preOrden(Nodo * r)
{
    if(r==0)
    {
        return;
    }
    cout << r->data<<endl;
    preOrden(r->izquierdo);
    preOrden(r->derecho);
}
void Arbol::postOrden(Nodo * r)
{
    if(r==0)
    {
        return;
    }
    postOrden(r->izquierdo);
    postOrden(r->derecho);
    cout << r->data<<endl;
}
void Arbol::inOrden(Nodo * r)
{
    if(r==0)
        return;
    inOrden(r->izquierdo);
    cout << r->data<<endl;
    inOrden(r->derecho);
}

int Arbol::Altura(Nodo *r)
{
    if(r==0)
    {
        return 0;
    }
    else
    {
        int iz=Altura(r->izquierdo);
        int de=Altura(r->derecho);
        if(iz > de)
        {
            return iz+1;
        }
        else
        {
            return de+1;
        }
    }

}

void Arbol::PrintAltura(Nodo * r)
{
    cout << Altura(r)<<endl;
}

void Arbol::tamano(Nodo *r)
{
    cout<< tam<<endl;
}

void Arbol::Nivel(Nodo *r)
{
    cout << Altura(r)-1<<endl;
}

void Arbol::Hojas(Nodo * r)
{
   if(r==0)
   {
       return;
   }
    if(r->izquierdo==0 && r->derecho==0)
    {
        cout<< "Hoja "<<r->data<<endl;
    }
    Hojas(r->izquierdo);
    Hojas(r->derecho);
}


Arbol::~Arbol()
{
    //dtor
}
