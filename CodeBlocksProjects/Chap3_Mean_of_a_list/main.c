#include <stdio.h>
#include <stdlib.h>

int main()
{
    double value,mean,sum;
    int nb_value;
    sum = 0;
    nb_value = 1;
    printf("Enter the value n¡ã%d (Real between 0 and 20, -1 to quit): ",nb_value);
    scanf("%lf",&value);
    while (value != -1) {
        sum = sum + value;
        nb_value = nb_value + 1;
        printf("Enter the value n¡ã%d (Real between 0 and 20, -1 to quit): ",nb_value);
        scanf("%lf",&value);
    }
    mean = sum / (nb_value - 1);
    printf("the mean is %.2lf",mean);
    return 0;
}
