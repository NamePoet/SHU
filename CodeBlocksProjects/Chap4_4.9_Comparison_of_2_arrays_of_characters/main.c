#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringA[1002],stringB[1002];
    int i;

    printf("Enter the first string in A:");
    scanf("%c",&stringA[1]);
    i = 1;
    while(stringA[i]!='\n') {
        i++;
        scanf("%c",&stringA[i]);
    }
    //stringA[i]='\0';

    printf("Enter the second string in B:");
    scanf("%c",&stringB[1]);
    i = 1;
    while(stringB[i]!='\n') {
        i++;
        scanf("%c",&stringB[i]);
    }
    //stringB[i]='\0';

    i = 1;
    while ( (stringA[i]==stringB[i]) && (stringA[i]!='\n') ) {
        i++;
    }

    if ( stringA[i] == stringB[i] ) {
        printf("The two arrays are the same.");
    }else {
        printf("The two arrays are not the same.");
    }
    return 0;
}
