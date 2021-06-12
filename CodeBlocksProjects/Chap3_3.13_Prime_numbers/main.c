#include <stdio.h>
#include <stdlib.h>
//3.13 Prime numbers
int main()
{
    int n,div;
    printf("Enter the number(integer > 1):\n");
    scanf("%d",&n);
    if (n == 2) {
        printf("%d is a prime number\n", n);
    }
    else {
        if (n % 2 == 0) {
            printf("%d is not a prime number\n",n);
        }
        else {
            div = 3;
            while ((div * div <= n) && (n % div != 0)) {
                div += 2;
            }
            if (div * div > n) {
                printf("%d is a prime number\n",n);
            }
            else {
                printf("%d is not a prime number\n",n);
            }
        }
    }
    return 0;
}
