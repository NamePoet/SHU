#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,factorial;
    double x,An,approx_res;
    printf("Enter an integer N please:\n");
    scanf("%d",&n);
    printf("Enter a real number:\n");
    scanf("%lf",&x);
    approx_res = 1;
    factorial = 1;
    for (i=1,j=1 ; i<=n,j<=n ; i++,j++) {
        factorial *= j;
        An = pow(x,i)/factorial;
        approx_res = approx_res + An;

    }
    printf("the approximate value of the pow(e,x) is: %.10lf", approx_res);
    return 0;
}
