#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fifi,bubu,dada,nono;
    printf("Type a Real!\n");
    scanf("%lf",&fifi);
    printf("Type a Real!\n");
    scanf("%lf",&bubu);
    nono = fifi;
    dada = 0;
    while (nono >= bubu) {
        nono = nono - bubu;
        dada++;
    }
    printf("%lf",dada);
    return 0;
}
