#ifndef MAX_SUMA_H
#define MAX_SUMA_H
#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

const int TAMA = 2000;

using namespace std;

class Max_suma
{
    public:
        Max_suma();
        virtual ~Max_suma();
        int calcular_n2();
        int calcular_n3();

    protected:
    private:
        vector<int> *lista;
};

#endif // MAX_SUMA_H
