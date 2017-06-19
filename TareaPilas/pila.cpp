#include "pila.h"
#include <cmath>
pila::pila()
{
   head=0; //ctor
}

void pila::push(nodo * n)
{
    if (head != 0)
    {
       n->sig = head;
    }
        head = n;
}

nodo * pila::top()
{
    return head;
}

int pila::getSize()
{
    int n=0;
    nodo* temp=head;
    while(temp!=0){
        n++;
        temp=temp->sig;
    }
    return n;
}

void pila::imprimir()
{
     nodo* temp=head;
     while(temp!=0){
        cout<<temp->num<<endl;
        temp=temp->sig;
    }
}

void pila::pushO(nodo * n)
{
    int aux=head->num;
    nodo* temp = head->sig;
    delete head;
    head = temp;
    head->ant = NULL;

    int aux2=head->num;
    nodo *temp2=head->sig;
    delete head;
    head=temp2;

    int num;
    if(n->signo=="+"){
        num=aux+aux2;
    }else if(n->signo=="-"){
        num=aux-aux2;
    }else if(n->signo=="*"||n->signo=="x"){
        num=(aux*aux2);
    }
    else if(n->signo=="/"){
        double x=aux/aux2;
        num=std::floor(x+0.5);
    }
        nodo* tmp=new nodo(num);
        push(tmp);
}

pila::~pila()
{
    //dtor
}
