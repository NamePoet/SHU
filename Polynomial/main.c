#include <stdio.h>

struct TPoly{
    int deg;
    float Coeff[41];
};

struct TPoly SumPoly(struct TPoly poly1, struct TPoly poly2)    //每一个input parameter前面其数据类型是必不可少的
{
    struct TPoly poly3;
    int i;
    for (i=0; i<=19; i++) {
        poly3.Coeff[i] =poly1.Coeff[i] + poly2.Coeff[i];   //如果紧跟一条指令，大括号是可以省略的
    }
    if (poly1.deg > poly2.deg) {
        poly3.deg = poly1.deg;
    } else {
        poly3.deg = poly2.deg;
    }
    return poly3;       //return 0; 会与实现定义的函数返回值类型起冲突
}

struct TPoly InputValPoly()
{
    struct TPoly polyout;
    int i;
    for (i=0; i<=39; i++) {
        polyout.Coeff[i] = 0;
    }

    printf("Enter the degree of your polynomial:\n");
    scanf("%d", &polyout.deg);
    printf("Enter the coefficients of your polynomial (increasing order from 0th polynomial):\n");
    for (i=0; i<=polyout.deg;i++) {
        scanf("%f", &polyout.Coeff[i]);
    }

    return polyout;
}


int main() {
    int i;
    struct TPoly poly4, poly5, poly6;

    poly4 = InputValPoly();
    poly5 = InputValPoly();
    poly6 = SumPoly(poly4, poly5);

    printf("The degree of poly6 is %d\n", poly6.deg);
    printf("The coefficients of the polynomial is: \n");
    for (i = 0; i <= poly6.deg; i++) {
        printf("%.2f ", poly6.Coeff[i]);
    }
    return 0;
}

