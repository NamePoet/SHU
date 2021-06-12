#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,a,b,h,i;
    int p,counter,Nslice;
    printf("Enter the lower bound and the upper bound!\n");
    scanf("%lf %lf",&a,&b);
    printf("Enter the number of slices\n");
    scanf("%d",&Nslice);
    p = 0;
    h = (b-a) / Nslice;
    i = 1/2 * (a*exp(cos(a))-1.35*a + b*exp(cos(b))-1.35*b);
    for( counter = 1; counter <= Nslice-1; counter++) {
       p = p + 1;
       x = a + p * h;
       i = i + 1*(x*exp(cos(x))-1.35*x);
    }
    i = h * i;
    write("An approximated value of the integral is %lf", i);

    return 0;
}
