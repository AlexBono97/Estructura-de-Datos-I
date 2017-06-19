#include <iostream>

using namespace std;

class Nodo{
    public:
        int data;
        Nodo* derecho;
        Nodo* izquierdo;
        Nodo* prev;
        Nodo(int x){
            derecho = 0;
            izquierdo = 0;
            prev = 0;
            data = x;
        }

        void printPreOrden(){
            cout << "-" << data << endl;
            if(izquierdo != 0)
                izquierdo->printInOrden();
            if(derecho != 0)
                derecho->printInOrden();
        }

        void printPostOrden(){
            if(izquierdo != 0)
                izquierdo->printInOrden();
            if(derecho != 0)
                derecho->printInOrden();
            cout << "-" << data << endl;
        }

        void printInOrden(){
            if(izquierdo != 0)
                izquierdo->printInOrden();
            cout << "-" << data << endl;
            if(derecho != 0)
                derecho->printInOrden();
        }

        int getHeight(){
            return maxNum(derecho == 0 ? 0 : derecho->getHeight(), izquierdo == 0 ? 0 : izquierdo->getHeight()) + 1;
        }

        int countLeaves(){
            if(izquierdo == 0 && derecho == 0){
                cout << "-" << data << endl;
                return 1;
            }
            else{
                return (izquierdo == 0 ? 0 : izquierdo->countLeaves()) + (derecho == 0 ? 0 : derecho->countLeaves());
            }
            //return (izquierdo == 0 && derecho == 0 ? 1 : (izquierdo == 0 ? 0 : izquierdo->countLeaves()) + (derecho == 0 ? 0 : derecho->countLeaves()));
        }

        Nodo* searchNodo(int x){
            if(data == x)
                return this;
            if(x > data)
                return (derecho == 0 ? 0 : derecho->searchNodo(x));
            else
                return (izquierdo == 0 ? 0 : izquierdo->searchNodo(x));
        }

    private:
        int maxNum(int x, int y){
            return (x >= y ? x : y);
        }
};

class Arbol{
    public:
        int cant;
        Nodo* raiz;
        Arbol(){
            cant = 0;
            raiz = 0;
        }

        void add(int x){
            add(new Nodo(x));
        }

        void add(Nodo* n){
            if(raiz == 0){
                raiz = n;
            }
            else{
                Nodo* temp = raiz;
                while(temp != 0){
                    if(n->data > temp->data){
                        if(temp->derecho != 0)
                            temp = temp->derecho;
                        else
                            break;
                    }
                    else{
                        if(temp->izquierdo != 0)
                            temp = temp->izquierdo;
                        else
                            break;
                    }
                }
                if(n->data > temp->data)
                    temp->derecho = n;
                else
                    temp->izquierdo = n;
                n->prev = temp;
            }
            cant++;
        }

        void eliminar(int x){
            Nodo* temp = searchNodo(x);
            if(temp == 0){
                cout << "Nodo no existe" << endl;
                return;
            }
            eliminar(temp);
        }

        void printInOrden(){
            raiz->printInOrden();
        }

        int getHeight(){
            raiz->getHeight();
        }

        int getNivel(){
            raiz->getHeight() - 1;
        }

        int getLeaves(){
            raiz->countLeaves();
        }

    private:
        void eliminar(Nodo* n){
            Nodo* tempG;
            Nodo* tempP = 0;
            Nodo* padre = n->prev;
            if(n->derecho != 0 && n->izquierdo != 0){
                tempG = n->derecho->data > n->izquierdo->data ? n->derecho : n->izquierdo;
                tempP = n->derecho->data > n->izquierdo->data ? n->izquierdo : n->derecho;
            }
            else if(n->derecho == 0 && n->izquierdo == 0)
                tempG = 0;
            else
                tempG = n->derecho != 0 ? n->derecho : n->izquierdo;
            if(padre->data >= n->data)
                padre->izquierdo = tempG;
            else
                padre->derecho = tempG;
            if(tempG != 0)
                tempG->prev = padre;
            if(tempP != 0){
                add(tempP);
                cant--;
            }
            cant--;
        }

        Nodo* searchNodo(int x){
            return raiz->searchNodo(x);
        }
};

int main()
{
    Arbol* arbol = new Arbol();
    arbol->add(8);
    arbol->add(3);
    arbol->add(10);
    arbol->add(1);
    arbol->add(6);
    arbol->add(4);
    arbol->add(7);
    arbol->add(14);
    arbol->add(13);
    arbol->eliminar(1);
    arbol->printInOrden();
    cout << arbol->getHeight() << endl;
    cout << arbol->getLeaves() << endl;
    cout << arbol->cant << endl;
    return 0;
}
