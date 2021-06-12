#include <stdio.h>

int main() {
    int a[5],i,j,nb_small_is_position;
    int b[5];
    printf("Please enter the sequence:\n");
    for (i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<5; i++) {
        nb_small_is_position= 0;
        for (j=0; j<5; j++) {
            if (a[j] < a[i]) {
                nb_small_is_position++;

            }
        }
        b[nb_small_is_position] = a[i];
    }

    printf("The array after ranking sort is: \n");
    for (i=0 ; i<5; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
