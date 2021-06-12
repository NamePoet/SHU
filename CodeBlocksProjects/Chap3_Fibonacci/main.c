#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, i, n;
    a = 0;
    b = 1;
    i = 3;
    printf(" Write a number that you like to compute to: \n ");
    scanf("%d", &n);
    while ( i <= n) {
        c = a + b;     // 初始化c是第三项
        a = b;
        b = c;
        i++;
    }


    printf("No.%d of the Fibonacci is %d",n,c);
    return 0;
}
