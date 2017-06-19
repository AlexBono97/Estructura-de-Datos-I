#include "checkin.h"

CheckIn::CheckIn()
{
   head=0;
   cant=0;//ctor
}

CheckIn::~CheckIn()
{
    //dtor
}
void CheckIn::checkIn()
{
    cant--;
    if (head->next!=0){
    cout << "The passenger " << head->nombre << " has been checked with a luggage of a total weight: " << head->pesoE << "Kg." << endl;
    if (!isEmpty()) head=head->next;
    cout << "Next in line:" << head->nombre << endl;
    cout << "Passengers awaiting: " << cant << endl;
    } else {
        cout << "The passenger " << head->nombre << " has been checked with a luggage of a total weight: " << head->pesoE << "Kg." << endl;
        if (!isEmpty()) head=head->next;
        cout<< "All the passengers have been checked"<< endl;
    }
}

void CheckIn::add(Pasajero* nod)
{
    if (head==0){
        head=nod;
    } else {
        Pasajero* tmp=head;
        while (tmp->next!=0)
            tmp=tmp->next;
        tmp->next=nod;
    }
    cant++;
}

bool CheckIn::isEmpty()
{
    return (head==0);
}
