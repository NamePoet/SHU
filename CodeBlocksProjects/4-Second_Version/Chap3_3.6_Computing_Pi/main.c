#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,flag,An,upper_bound,approx_res;
    printf("Please enter a very very small number(eg:0.01) as upper bound!\n");
    scanf("%lf",&upper_bound);
    i = 1;
    flag = 1;
    An = 1/(2*i-1)*flag;
    approx_res = 0;
    while (fabs(An) > upper_bound) {
        approx_res = approx_res + An;
        i++;
        flag = -flag;
        An = 1/(2*i-1)*flag;
    }
    printf("The approximated value of Pi/4 is %lf", approx_res);
    return 0;
}
