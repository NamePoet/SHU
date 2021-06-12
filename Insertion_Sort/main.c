#include <stdio.h>

int main() {
    int a[5],i,j,t;
    printf("Please enter the array please:\n");
    for (i=0 ;i<5; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0+1; i<5; i++) {
        t = a[i];
        for (j=i-1; j>=0&&a[j]>t; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = t;
    }




    printf("The array after insertion sort is:\n");
    for (i=0 ;i<5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
