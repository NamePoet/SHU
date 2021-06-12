#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,coef;
    float x,fx;
    printf("Enter the highest exponent n:\n");
    scanf("%d",&n);
    printf("Enter the value of a real number:\n");
    scanf("%f",&x);

    printf("Enter the polynomial coefficients in decreasing order,remember your n, now the first:\n");
    scanf("%d",&coef);
    fx = coef;
    for (i=n-1;i>=0;i--) {
        printf("Enter next polynomial coefficient(the last coefficient is constant):\n");
        scanf("%d",&coef);
        fx = fx*x + coef;
    }
    printf("The polynomial value at x is :%f\n",fx);
    return 0;
}
