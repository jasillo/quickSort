#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


//const int TAM = 32768;
//const int TAM = 262144;
const int TAM = 1048576;

const bool aleatorio=false; //aleatorio o mediana de 3
const bool insertion=true; //con sinsertion sort

using namespace std;

class Quick_sort
{
    public:
        Quick_sort();
        virtual ~Quick_sort();
        void mostrar();
        void ordenar();


    protected:
    private:
        vector<int> *lista;

        int conseguir_pivot(int low, int high);
        int particion(int low, int high);
        void quick_iterativo(int low, int high);
        void insertion_sort(int low, int high);

};

#endif // QUICK_SORT_H
