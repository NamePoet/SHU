#include <stdio.h>

void Fibonacci (int bound, int *ptr_num, int *ptr_t);
int main() {
    int bound, number, term;
    printf("enter the bound!\n");
    scanf("%d", &bound);
    Fibonacci (bound, &number, &term);
    printf("%d\n", number);
    printf("%d\n", term);
    return 0;
}

void Fibonacci (int bound, int *ptr_num, int *ptr_t)
{
    int t1,t2;
    t1 = 1;
    t2 = 2;
    *ptr_t = t1 + t2;
    *ptr_num = 3;
    while (*ptr_t < bound ) {
        t1 = t2;
        t2 = *ptr_t;
        *ptr_t = t1 + t2;
        *ptr_num = *ptr_num + 1;
    }
}
