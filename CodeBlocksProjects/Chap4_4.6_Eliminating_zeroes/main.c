#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim, ind;
    int valarray[401];
    printf("enter the number of values[1,400]:");
    scanf("%d", &dim);
    for (ind=1; ind<=dim; ind++) {
        printf("enter a value:");
        scanf("%d", &valarray[ind]);
    }
    ind = 1;
    while (ind <= dim) {
        if (valarray[ind] == 0) {
            valarray[ind] = valarray[dim];
            dim--;
        }
        else {
            ind++;
        }
    }
    for (ind=1; ind<=dim; ind++) {
        printf("%d ",valarray[ind]);
    }
    return 0;
}
