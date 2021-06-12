#include <stdio.h>
#include <stdlib.h>

struct cplxcartesian {
       float Re;
       float Im;
    };
struct cplxpolar {
    float Mod;
    float Arg;
};
struct cplx {
    char sys;              //system代表坐标系：直角坐标系和极坐标系
    float param1;
    float param2;
};
typedef struct cplxcartesian CplxCartesian;
typedef struct cplxpolar CplxPolar;
typedef struct cplx Cplx;


int main()
{



    return 0;
}

float RealPart(Cplx nb)
{
    float nb_Re;
    if (Cplx.sys == 'C') {
        nb_Re = Cplx.param1;
    } else {
        nb_Re = Cplx.param1 * cos(Cplx.param2);
    }

    return nb_Re;
}

int NearestNeighbours(Cplx V[], Cplx nb)
{
    int k,Index;
    Cplx temp;
    float distanceMin, distance;

    Subtract(nb, V[1]);
    Modulus(temp);
    Index = 1;

    k = 2;
    while (v[k].sys == 'C' || V[k].sys == 'P') {
        Subtract(nb, V[k]);
        Modulus(temp);
        if
    }

}













