#include <stdio.h>
//Text reading
int main(void)
{   char text[50];
    int num_char;
    printf("Enter a text:\n" );
    scanf ("%c", &text[0]);
    num_char = 0;
    while ( (text[num_char]!='\n') && (num_char < 49) )
    {
        num_char = num_char + 1;
        scanf( "%c", &text[num_char] );
    }
    text[num_char] = '\0';
    printf("\n%s",text);
    return 0;
}