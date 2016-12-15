#include "max_suma.h"

Max_suma::Max_suma()
{
    srand (time(NULL));
    lista=new vector<int> (TAMA);
    int rango=TAMA /5;
    for (int i=0;i<TAMA ;i++)
        (*lista)[i]= rand() % rango - (rango/2);
    cout<<"creado!"<<endl;
}

Max_suma::~Max_suma()
{
    delete lista;
}

int Max_suma::calcular_n2()
{
    int i,j, actual,cabeza=0,cola=0 ;
    int mayor;
    mayor=(*lista)[0];
    for (i=0 ; i<TAMA-1 ; i++)
    {
        actual=(*lista)[i];
        if (actual>mayor)
        {
            cabeza=i;  cola=i;   mayor=actual;
        }
        for(j=i+1 ; j<TAMA ; j++)
        {
            actual+=(*lista)[j];
            if (actual>mayor)
            {
                cabeza=i;   cola=j;     mayor=actual;
            }
        }
    }
    cout<<cabeza<<" "<<cola<<endl;
    return mayor;
}


int Max_suma::calcular_n3()
{
    int i,j, actual,cabeza=0,cola=0 ;
    int mayor;
    mayor=(*lista)[0];
    for (i=0 ; i<TAMA-1 ; i++)
    {
        actual=(*lista)[i];
        if (actual>mayor){
            cabeza=i;  cola=i;   mayor=actual;
        }
        for(j=i+1 ; j<TAMA ; j++)
        {
            for (int z=i+1 ; z<=j ; z++)
                actual+=(*lista)[z];

            if (actual>mayor){
                cabeza=i;   cola=j;     mayor=actual;
            }
        }
    }
    cout<<cabeza<<" "<<cola<<endl;
    return mayor;
}
