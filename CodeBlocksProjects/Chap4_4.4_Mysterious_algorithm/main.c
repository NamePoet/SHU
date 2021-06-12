#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabA[7],tabB[7];    //401
    int equal, dim, maxval, ind;
    int tabX[9]; //100

    printf("Enter an integer as dim:\n");
    scanf("%d",&dim);
    for (ind=1; ind<=dim; ind++) {
        printf("Enter No.%d integer in tabA\n",ind);
        scanf("%d",&tabA[ind]);
        printf("Enter No.%d integer in tabB\n",ind);
        scanf("%d",&tabB[ind]);
    }
    printf("Enter an integer as maxval\n");
    scanf("%d",&maxval);
    for (ind=1; ind<=maxval; ind++) {
        tabX[ind] = 0;
    }
    for (ind=1; ind<=dim; ind++) {
        tabX[tabA[ind]] = tabX[tabA[ind]] + 1;
        tabX[tabB[ind]] = tabX[tabB[ind]] - 1;
    }
    equal = 1;  //True
    ind = 1;
    while (equal && (ind <= maxval)) {
        if (tabX[ind] != 0) {
            equal = 0;  //False
        }else {
            ind = ind + 1;
        }
    }
    if (equal) {
        printf("These arrays are equivalent as Combination.");
    } else {
        printf("These arrays are different as Combination.");
    }
    return 0;
}
