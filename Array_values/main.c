#include <stdio.h>
//Horner算法
int main() {
    int val,i,x;
    i = 0;
    val = 0;
    while (i<3) {
        printf("enter an x:");
        scanf("%d", &x);
        val = 10 * val + x;
        i++;
    }

    printf("val = %d\n ", val);
    return 0;
}
