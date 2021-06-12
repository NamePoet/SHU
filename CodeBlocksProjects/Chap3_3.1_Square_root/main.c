#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double nb;
    printf("Input a POSITIVE real!\n");
    scanf("%lf", &nb);
    n = 1;
    while( n*n <= nb ) {
        n++;
    }
    printf("%d %d",n-1,n);
    return 0;
}
