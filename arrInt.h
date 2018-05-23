#ifndef ARRINT_H
#define ARRINT_H


class arrInt{
        int *arr;
        int size;
    public:
        arrInt();
        arrInt(int);
        arrInt(int[],int);
        ~arrInt();
        void insertar(int);
        void insertar(int,int);
        void eliminar(int);
        void vaciar();
        int menor();
        int mayor();
        int promedio();
        int mayorP();
        int menorP();
        void ordenar();
        int suma();
        void invertir();
        void mostrar();
};

#endif // ARRINT_H
