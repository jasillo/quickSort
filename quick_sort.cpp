#include "quick_sort.h"

Quick_sort::Quick_sort()
{
    srand (time(NULL));
    lista=new vector<int> (TAM);
    int rango=TAM /10;
    for (int i=0;i<TAM ;i++)
        (*lista)[i]= rand() % rango;
    cout<<"creado!"<<endl;
}

Quick_sort::~Quick_sort()
{
    delete lista;
}

void Quick_sort::ordenar ()
{
    quick_iterativo(0,TAM-1);
    cout<<"listo!";
}

int Quick_sort::particion(int low, int high)
{
    int i = low;
    int x = conseguir_pivot(low,high);
    swap((*lista)[x],(*lista)[low]);
    x=(*lista)[low];
    for (int j=i+1 ; j<= high ; j++)
    {
        if ((*lista)[j]<=x)
        {
            i++;
            if (i!=j)
                swap((*lista)[i],(*lista)[j]);
        }
    }
    swap((*lista)[i],(*lista)[low]);
    return i;
}

int    Quick_sort::conseguir_pivot(int low, int high)
{
    if (aleatorio)
        return rand() % (high-low) + low;
    else{
        int i=(high+low)/2;
        if ((*lista)[low]>(*lista)[low])
            swap(low,high);
        if ((*lista)[low]>(*lista)[i])
            swap(low,i);
        if ((*lista)[high]<(*lista)[i])
            swap(high, i);
        return i;
    }
}

void Quick_sort::quick_iterativo(int low, int high)
{
    if (low<high)
    {
        int r=particion(low,high);
        if (insertion and high-low<=10)
            insertion_sort(low,high);
        else{
            quick_iterativo(low,r-1);
            quick_iterativo(r+1,high);
        }

    }
}

void Quick_sort::mostrar()
{
    for (int i=0;i<TAM;i++)
    {
        cout<<(*lista)[i];
        cout<<" ";
    }
}

void Quick_sort::insertion_sort(int low, int high)
{
    int j;
    for (int i=low;i<=high;i++)
    {
        j=i;
        while (j>low and (*lista)[j-1]>(*lista)[j])
        {
            swap((*lista)[j-1],(*lista)[j]);
            j--;
        }
    }
}
