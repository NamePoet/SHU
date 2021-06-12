#include <stdio.h>
#include <stdlib.h>
//3.15 A game with matches
int main()
{
    int N, p, picked_number, player;
    printf("Enter the number of matches: integer>0\n");
    scanf("%d",&N);
    while (N <=1) {
        printf("this number is <=1\n");
        printf("Enter the number of matches: integer>0\n");
        scanf("%d",&N);
    }
    printf("Enter the maximum number of matches to be picked up: integer >0 and <%d\n",N);
    scanf("%d",&p);
    while (p <= 0 || p >= N) {
        printf("this number is <=0 or >=N\n");
        printf("Enter the maximum number of matches to be picked up: integer >0 and <%d\n",N);
        scanf("%d",&p);

    }
    player = 1; //player = 0 or 1, transformed into 1 or 2 when display
    while (N > 0) {
        player = (player+1) % 2;
        printf("It's turn to player %d  %d remaining\n",player+1,N);       //%d remaining
        printf("How many matches do you want to pick up?\n");
        scanf("%d",&picked_number);
        while (picked_number <= 0 || picked_number > N || picked_number > p) {
            printf("This number is not correct. How many matches do you want to pick up?\n");
            scanf("%d",&picked_number);
        }
        N -= picked_number;
    }
    printf("Winner = player%d\n",player+1);
    return 0;
}
