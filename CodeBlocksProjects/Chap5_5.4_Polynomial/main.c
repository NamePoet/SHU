#include <stdio.h>

struct tpoly
{
    int deg;
    double Coeff[41];
};

typedef struct tpoly TPoly;

TPoly SumPoly(TPoly poly1, TPoly poly2);
TPoly ProdPoly(TPoly poly1, TPoly poly2);
double CompValPoly(TPoly poly1, double x);
TPoly InputValPoly(int N, double Coeffs[41]);

int main() {
    TPoly P1,P2,P3;
    TPoly polyR;
    double ValpolyR;
    int i;
    double x;

    for (i=1; i<=40; i++) {     // 初始化，都填满0
        P1.Coeff[i] = 0;
        P2.Coeff[i] = 0;
        P3.Coeff[i] = 0;
    }
    printf("Enter the degree of your first polynomial: ");
    scanf("%d",&P1.deg);
    printf("Enter the coefficients of your first polynomial: ");
    for (i=1; i<=P1.deg + 1; i++ ) {
        scanf("%d", &P1.Coeff[i]);
    }

        printf("Enter the degree of your first polynomial: ");
        scanf("%d",&P2.deg);
        printf("Enter the coefficients of your first polynomial: ");
        for (i=1; i<=P2.deg + 1; i++ ) {
            scanf("%d", &P2.Coeff[i]);
        }

            printf("Enter the degree of your first polynomial: ");
            scanf("%d",&P3.deg);
            printf("Enter the coefficients of your first polynomial: ");
            for (i=1; i<=P3.deg+1; i++ ) {
                scanf("%d", &P3.Coeff[i]);
            }
    SumPoly(P1, P2);
    ProdPoly(polyR, P3);

    printf("Enter the value of x:");
    scanf("%lf",&x);
    CompValPoly(P3,x);
    printf("the value of polynomial at point x is: ", ValpolyR);

    return 0;
}

TPoly SumPoly(TPoly poly1, TPoly poly2)
{
    TPoly poly3;
    int i;
    for (i=1; i<=20; i++) {
        poly3.Coeff[i] = poly1.Coeff[i] + poly2.Coeff[i];
    }
    if (poly1.deg > poly2.deg) {
        poly3.deg = poly1.deg;
    } else {
        poly3.deg = poly2.deg;
    }

    return poly3;
}
TPoly ProdPoly(TPoly poly1, TPoly poly2)
{
    TPoly poly3;
    int i,k;
    poly3.Coeff[1] = poly1.Coeff[1] * poly2.Coeff[1];
    for (i=2; i<=40; i++) {
        poly3.Coeff[i] = 0;
        for (k=1; k<=i; k++) {
            poly3.Coeff[i] = poly3.Coeff[i] + poly1.Coeff[k] * poly2.Coeff[i+1-k];
        }
    }
    poly3.deg = poly1.deg + poly2.deg;

    return poly3;
}
double CompValPoly(TPoly poly1, double x)
{
    double y;
    int i;
    y = poly1.Coeff[poly1.deg+1];
    for (i=poly1.deg;i>=1;i--) {             // Horner算法
        y = y*x + poly1.Coeff[i];
    }

    return y;
}
TPoly InputValPoly()
{
    TPoly poly1;
    int i;
    poly1.deg = N;
    for (i=1; i<=40; i++) {
        poly1.Coeff[i] = Coeffs[i];
    }

    return poly1;
}
