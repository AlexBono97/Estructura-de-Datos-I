#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        Nodo(int x);
        int data;
        Nodo * derecho;
        Nodo * izquierdo;
        Nodo * anterior;

        virtual ~Nodo();

    protected:

    private:

};

#endif // NODO_H
