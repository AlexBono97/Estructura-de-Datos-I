#include "arbolmango.h"
#include <iostream>

using namespace std;

arbolmango::arbolmango()
{
    cant=0;
    //ctor
}

void arbolmango::agregarfruta(frutamango * f)
{
    if(cant==0)
    {
        head=f;
        tail=f;
        cant=1;
    }else if(cant==1)
    {
        head->setSig(f);
        tail=f;
        tail->setAnt(head);
        cant++;
    }else
    {
        tail->setSig(f);
        temp1=tail;
        tail=f;
        tail->setAnt(temp1);
        cant++;
    }

}

void arbolmango::eliminarfruta(int pos)
{
    int w=pos;
    frutamango * anterior;
    frutamango * siguiente;
    int cont=1;
    int deletos=0;

    if(cant==0)
    {

    }else if(cant==1)
    {
        if(cont==w)
        {
            head=0;
            tail=0;
            cant=0;
        }
    }else if(pos==1)
    {
        head=head->getSig();
        siguiente=head->getSig();
        anterior=0;
        cant--;

    }else if(pos>1 && pos<cant)
    {//temp3=temp2;
        //anterior=temp2->getAnt();
        //siguiente=temp2->getSig();
       temp2=head->getSig();

            while(deletos==0)
            {cont++;
                temp3=temp2;
                anterior=temp2->getAnt();
                siguiente=temp3->getSig();

                if(cont==pos && cont<cant){
                    anterior->setSig(siguiente);
                    siguiente->setAnt(anterior);
                    temp2=0;
                    cant--;
                    deletos++;
            }
            temp2=temp3->getSig();

        }
    }
    else if(pos==cant)
    {
        anterior=tail->getAnt();
        siguiente=0;
        tail->setAnt(0);
        anterior->setSig(0);
        tail=anterior;
        cant--;
    }
}

void arbolmango::insertafruta(frutamango * f, int posicion)
{
    int w=posicion;
    frutamango * anterior;
    frutamango * siguiente;
    int cont=1;
    int deletos=0;
    temp1=f;

     if(posicion==1)
    {
        temp2=head;
        head->setAnt(temp1);
        temp1->setSig(head);
        head=temp1;
        cant++;
    }else if(posicion==cant)
    {
        anterior=tail->getAnt();
        siguiente=0;
        anterior->setSig(temp1);
        temp1->setAnt(anterior);
        temp1->setSig(tail);
        tail->setAnt(temp1);
        cant++;
    }else if(posicion==cant+1)
    {
        tail->setSig(temp1);
        temp1->setAnt(tail);
        temp1->setSig(0);
        tail=temp1;
        cant++;
    }

    else if(posicion>1 && posicion<cant)
    {
        temp2=head->getSig();
        //temp3=temp2;
        //anterior=temp2->getAnt();
        //siguiente=temp2->getSig();
            while(deletos==0)
            {
                anterior=temp2->getAnt();
                siguiente=temp2->getSig();
                temp3=temp2;
                if(cont==posicion && cont < cant){
                    anterior->setSig(temp1);
                    temp1->setAnt(anterior);
                    temp1->setSig(temp2);
                    temp2->setAnt(temp1);
                    cant++;
                    deletos++;
            }
            temp2=temp3->getSig();
            cont++;
        }
    }
}

void arbolmango::imprimirpeso()
{

    frutamango * temp=head;
    int fru=1;
    while(temp!=0)
    {
        cout << "Peso de la fruta "<< fru<<": " << temp->getPeso()<< endl;
        temp=temp->getSig();
        fru++;
    }

}

arbolmango::~arbolmango()
{
    //dtor
}
