#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1,nb2;
    printf("Type an Integer!\n");
    scanf("%d",&nb1);
    printf("Type an Integer!\n");
    scanf("%d",&nb2);
    while (nb1 >nb2) {
        if (nb1 > nb2) {
            nb1 = nb1 - nb2;
        }else {
            nb2 = nb2 - nb1;
        }
    }
    printf("%d",nb1);
    return 0;
}
