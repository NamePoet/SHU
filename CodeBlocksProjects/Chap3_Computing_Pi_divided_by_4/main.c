#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double i,sum,bound,An,Bn,sign;
    printf("Please enter the upper bound of the error: (less than 0.33333)");
    scanf("%lf",&bound);
    sign = 1;
    sum = 0;
    i = 1;
    An = 1 / (2*i-1) * sign;
    Bn = fabs(An);
    while (Bn > bound) {
       sum += An;
       sign = -sign;
       i++;
       An = 1 / (2*i-1)  * sign;
       Bn = fabs(An);
    }
    printf("The approximation value of Pi/4 is %lf", sum);
    return 0;
}
