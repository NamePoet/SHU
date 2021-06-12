#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[100],b[100];
    float ins,num;
    int count,i,k;
    printf("input a series of real numbers from keyboard, no more than 100\n");
    count = 1;
    scanf("%f",&a[count]);
    while (a[count] != -1) {
        count++;
        scanf("%f",&a[count]);
    }
    printf("enter an integer k as the location where you want to put the number\n");
    scanf("%d",&k);
    printf("enter the real number that you want to insert\n");
    scanf("%f",&ins);
    for (i=1;i<=k-1;i++) {
        b[i] = a[i];
    }
    for (i=k;i<=count;i++) {
        b[i+1] = a[i];
    }
    b[k] = ins;
    printf("Display the new sequence of value:\n");
    for (i=1;i<=count;i++) {
        printf("%.0f ",b[i]);
    }
    return 0;
}
