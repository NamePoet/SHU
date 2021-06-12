#include <stdio.h>
#include <stdlib.h>

int main()
{
    double value,mean,sum;
    int nb_val;
    char Answer;
    char temp;
    sum = 0;
    nb_val = 0;
    Answer = 'N';
    while (Answer != 'Y') {
        nb_val = nb_val + 1;
        printf("Enter the value No.%d (Real between 0 and 20):", nb_val);
        scanf("%lf",&value);
        sum = sum + value;
        printf("Do you want to stop ?(Y/N)?\n");
        scanf("%c",&temp);
        scanf("%c",&Answer);
    }
    mean = sum / nb_val;
    printf("The mean is %lf", mean);
    return 0;
}
