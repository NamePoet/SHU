#include <stdio.h>

int main() {
    int i,j,t;
    int a[5];
    printf("Please enter the sequence!\n");
    for (i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    for (i=0; i<5-1; i++) {
        for (j=0; j<5-1; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }

    }

    printf("The array after Bubble_Sort is: \n");
    for (i=0; i<5; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}
