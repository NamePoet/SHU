#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ind, k, dim, nP;
    int E[25];
    int P[25];
    //int E[401];
    //int P[401];
    printf("Enter an integer(2<=n<=100000),please:");
    scanf("%d",&n);

    for (ind=1; ind<=n-1; ind++) {
        E[ind] = ind+1;
    }

    dim = n-1;
    nP = 0;
    while (dim > 0) {
        nP ++;
        P[nP] = E[1];


    for (ind=1; ind<=dim; ind++) {
        if (E[ind] % P[nP] == 0) {
            for (k=ind; k<=dim-1; k++) {
                E[k] = E[k+1];
            }
            dim--;
            ind--;
        }
    }
    }

    for (k=1; k<=nP; k++) {
        printf("%d ",P[k]);
    }
    return 0;
}
