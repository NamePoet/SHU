#include <stdio.h>
int Fibonacci(int n) {
    int val;
    if (n==1) {
        val = 1;
    }
    else if (n==2) {
        val = 2;
    } else
        val = Fibonacci(n-1) + Fibonacci(n-2);

    return val;
}
//int Fibonacci(int n);
int main() {
    int number,value;
    printf("Please enter an integer n: \n");
    scanf("%d", &number);
    value = Fibonacci(number);
    printf("The %dth of the Fibonacci sequence is %d",number,value);

    return 0;
}

//
//int Fibonacci(int n) {
//    int val;
//    if (n==1) {
//        val = 1;
//    }
//    else if (n==2) {
//        val = 2;
//    } else
//        val = Fibonacci(n-1) + Fibonacci(n-2);
//
//    return val;
//}