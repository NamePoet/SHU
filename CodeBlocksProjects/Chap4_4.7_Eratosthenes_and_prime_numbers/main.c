#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nb_prime, ind, prime;
    //int E[100001];
    //int P[50001];
    int E[20];
    int P[10];
    int empty;
    printf("enter the upper bound of [2..100000]:");
    scanf("%d",&n);
    for (ind=2; ind<=n; ind++) {
        E[ind] = ind;
    }
    empty = 0;   // 初始化让判断空集合为空不真，即E数组中有数字
    nb_prime = 0;
    while (empty == 0) {
        ind = 2;
        while (E[ind] == 0) {
            ind++;
        }
        prime = E[ind];
        nb_prime++;
        P[nb_prime] = prime;
        for (ind=prime; ind<=n; ind=ind+prime) {
            E[ind] = 0;
        }
        ind = 2;
        while ( !(E[ind]!=0 || ind == n) ) {
            ind++;
        }
        if (E[ind] == 0) {
            empty = 1;
        }
    }
    for (ind=1; ind<=nb_prime; ind++) {
        printf("%d ", P[ind]);
    }

    return 0;
}
