#include <stdio.h>
#include <stdlib.h>

int main()
{
    double bubu,fifi;
    int rara,indice,nono;
    printf("Type an integer!\n");
    scanf("%d",&rara);
    printf("Type a Real!\n");
    scanf("%lf",&fifi);
    nono = 0;
    for (indice=1;indice<=rara;indice++) {
        printf("Type a Real!\n");
        scanf("%lf",&bubu);
        if (bubu > fifi) {
            nono++;
        }
    }
    printf("%d",nono);
    return 0;
}
