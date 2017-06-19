#ifndef NODO_H
#define NODO_H


class nodo
{
    public:
        nodo();
        nodo(int c);


        void setnumero(int n);//
        void setcantidad(int c);//
        void setanterior(nodo * n);//
        void setderecha(nodo * n);//
        void setizquierda(nodo * n);
        nodo * getanterior();
        nodo * getderecha();
        nodo * getizquierda();
        int getcantidad();//
        int getnumero();//

        nodo * anterior;
        nodo * izquierda;
        nodo * derecha;

        int numero;
        int cantidad;
        virtual ~nodo();

    protected:

    private:
};

#endif // NODO_H
