#ifndef NODO_H
#define NODO_H


class nodo
{
    public:
        nodo();
        nodo(int n);
        nodo * derecha;
        nodo * izquierda;

        int valor;
        virtual ~nodo();

    protected:

    private:
};

#endif // NODO_H
