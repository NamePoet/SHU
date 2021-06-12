#include <stdio.h>
struct complexe {
    double a;
    double b;
};
typedef struct complexe Complexe;
int main() {
    Complexe C[10];
    Complexe  res;
    int index;
    res.a = 0;
    res.b = 0;
    for (index =1; index<=2; index++) {
        printf("enter the complexe:");
        scanf("%lf",&C[index].a);
        scanf("%lf",&C[index].b);
        res.a = res.a + C[index].a;
        res.b = res.b + C[index].b;
    }
    printf("the sum is: %lf+%lfi\n",res.a,res.b);
    return 0;
}
