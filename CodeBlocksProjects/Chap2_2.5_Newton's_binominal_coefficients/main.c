#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,Coef;
    printf("The task is to print the Binomial Coefficients\n");
    printf("Enter a positive integer please:");
    scanf("%d",&n);
    Coef = 1;
    p = 1;
	printf("%d ",Coef);
    while (p<=n) {
        Coef = Coef * (n-p+1) / p;
        printf("%d ",Coef);
        p++;
    }

    return 0;
}
