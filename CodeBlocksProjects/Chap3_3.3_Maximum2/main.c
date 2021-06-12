#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,max,i,rank_of_max;
    i = 1;
    printf("Enter number #%d :",i);
    scanf("%d",&n);
    max = n;
    rank_of_max = 1;
    while (i< 20) {
        i++;
        printf("Enter number #%d :",i);
        scanf("%d",&n);
        if (n > max) {
            max = n;
            rank_of_max = i;
        }
    }
    printf("The greatest number entered was : %d\n", max);
    printf("It was entered as number #%d",rank_of_max);
    return 0;
}
