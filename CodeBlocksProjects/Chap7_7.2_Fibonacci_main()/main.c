#include <stdio.h>
#include <stdlib.h>



int FibR(int n);
int main()
{
    int n,fibn;
    printf("Enter a positive integer n:");
    scanf("%d",&n);
    fibn = FibR(n);
    printf("The %dth Fibonacci element is:%d",n,FibR(n));

    return 0;
}

int FibR(int n)
{
    int value;
    if (n == 1) {
        value = 1;
    } else if (n == 2) {
        value = 2;
    } else {
        value = FibR(n-1) + FibR(n-2);      //函数体中调用自己本身
    }

    return value;
}
