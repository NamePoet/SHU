#include <stdio.h>
#include <stdlib.h>

struct TPoly{ int deg;    double Coeff[41];   };

struct TPoly SumPoly (struct TPoly poly1, struct TPoly poly2, struct TPoly poly3) ;

int main()
{
    int i;
    struct TPoly poly1;
    struct TPoly poly2;
    struct TPoly poly3;
    printf("Please enter the degree of polynomial 1:\n");
    scanf("%d",&poly1.deg);
    printf("Please enter the degree of polynomial 2:\n");
    scanf("%d",&poly2.deg);

    printf("Please enter the coefficients of polynomial 1 in a descending order:\n");
    for (i=poly1.deg;i>=0;i--) {
        scanf("%lf ",&poly1.Coeff[i]);
    }

    printf("Please enter the coefficients of polynomial 2 in a descending order:\n");
    for (i=poly2.deg;i>=0;i--) {

        scanf("%lf ",&poly2.Coeff[i]);
    }

	struct SumPoly (poly1,poly2,poly3);
    printf("The degree of SumPoly is: %d", poly3.deg);
    printf("The coefficients of SumPoly are :\n ");
    for (i=poly3.deg;i>=0;i--) {
       printf("%lf ",poly3.Coeff[i]);
    }

    return 0;
}



struct TPoly SumPoly (struct TPoly poly1, struct TPoly poly2, struct TPoly poly3 ) {
    int i;
    for (i=1;i<=20;i++) {
        poly3.Coeff[i] = poly1.Coeff[i] + poly2.Coeff[i];
    }
    if(poly1.deg > poly2.deg) {
        poly3.deg = poly1.deg;
    }else {
        poly3.deg = poly2.deg;
    }
    return struct TPoly poly3;
};
