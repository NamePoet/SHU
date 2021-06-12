#include <stdio.h>

int main() {
    double value_array[100];
    int num_value, nb_values;
    printf("Enter (at most 100) real values between 0 and 20, use 30 to indicate the end of your list\n");
    printf("Enter value number 1:");
    scanf("%lf",&value_array[1]);
    num_value = 1;
    while ((value_array[num_value] != 30) && (num_value < 100)) {
        num_value++;
        printf("Enter value number %d:",num_value);
        scanf("%lf", &value_array[num_value]);
    }


    return 0;
}
