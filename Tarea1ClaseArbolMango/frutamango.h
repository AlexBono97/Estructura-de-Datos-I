#ifndef FRUTAMANGO_H
#define FRUTAMANGO_H


class frutamango
{
    public:

        frutamango();

        frutamango(int peso);//constructor 2
        frutamango(int peso, frutamango * f);//constructor 3

        void setPeso(int v);//ya en el cpp
        int getPeso();//ya en el cpp
        //int getValorSiguientes();

        void setSig(frutamango * s);//ya en el cpp
        frutamango * getSig();//ya en el cpp

        void setAnt(frutamango * s);
        frutamango * getAnt();

        int peso;
        frutamango * anterior;
        frutamango * siguiente;

        virtual ~frutamango();

    protected:

    private:
};

#endif // FRUTAMANGO_H
