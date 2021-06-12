#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c;
    int val, sign;
    int isfirst, isbreak;
    int Char2Num(char ch);

    sign = 1;
    val = 0;
    isfirst = 1; //True
    isbreak = 0; //False
    printf("Please enter your sequence one by one:\n");
    scanf("%c",&c);

    while( (c!='\n') && (!isbreak) ) {          //'\0'»»³É'\n'
        if ((c!='-') && (c<'0' || c>'9')) {
            printf("It is not an integer!\n");
            isbreak = 1;
        }
        else
            if (isfirst) {
                if (c == '-') {
                    sign = -1;
                }
                else {
                    val = Char2Num(c);
                }
                //endif
                isfirst = 0;
            }
            else
                if (c =='-') {
                    printf("It is not an integer!\n");
                    isbreak = 1;
                }
                else {
                    val = val*10 + Char2Num(c);
                }
                //endif
            //endif
         //endif
         printf("Please enter your sequence one by one:\n");
         getchar();
         scanf("%c",&c);
    }
    //endwhile

    if (!isbreak) {
        val = val * sign;
        printf("The integer number is: %d\n", val);
    }
    //endif

    return 0;
}

int Char2Num(char ch)
{
    int ret;
    ret = ch - 48;
    return ret;
}




