#include <stdio.h>

int main() {
    float score,mean_scores,sum_scores;
    int nb_scores;
    printf("Type scores between 0 and 20, to notify the end, type 30\n");
    sum_scores = 0;
    nb_scores = 0;
    printf("Type the score 1:\n");
    scanf("%f", &score);
    while (score != 30) {
        sum_scores = sum_scores + score;
        nb_scores = nb_scores + 1;
        printf("Type the next score\n");
        scanf("%f", &score);
    }
    mean_scores = sum_scores / nb_scores;
    printf("the mean score is: %f", mean_scores);
    return 0;
}
