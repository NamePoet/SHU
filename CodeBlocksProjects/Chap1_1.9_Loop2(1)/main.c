#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1,val2;
    printf("Type an Integer!\n");
    scanf("%d",&val1);
    printf("Type an Integer!\n");
    scanf("%d",&val2);
    while (val1 * val1 >= val2) {
        val1 --;
    }
    printf("%d",val1);
    return 0;
}
