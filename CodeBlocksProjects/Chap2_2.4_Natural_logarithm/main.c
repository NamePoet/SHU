#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,flag;
    double x,s;
    printf("Input a x and an n: (-1<x<=1)\n");
    printf("eg:0.5 100\n");
    scanf("%lf %d", &x,&n);
    s = 0;
    flag = 1;
    i = 1;
    while ( i<=n ) {
        s += pow(x,i)/i*flag;
        flag = -flag;
        i++;
    }

    printf("ln(1+%.2f) = %.6f",x,s);
    return 0;
}
