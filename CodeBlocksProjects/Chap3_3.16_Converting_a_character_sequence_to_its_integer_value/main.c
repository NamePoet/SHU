#include <stdio.h>
#include <stdlib.h>


int Char2Num(char char_number)
{
    int int_number;
    int_number = (int) char_number;

    return int_number;

}


int main()
{
    int i,j,count,res,flag;
    char seq_char[20];
    int Val[20];
    res = 0;
    count = 0;
    flag = 0;
    i = 0;
    printf("write a sequence of value one by one\n");
    scanf("%c", &seq_char[0]);
    while (seq_char[i] != '\0') {
        if (seq_char[i] >= '0' && seq_char[i] <= '9') {
            Val[i] = Char2Num(seq_char[i]);
        }
        else if (seq_char[i] == '-') {
            flag = 1;
        }
        else {
            printf("The sequence is not an integer, please rewrite from the beginning, still one by one\n");
            i = 0;
            scanf("%c",&seq_char[i]);
        }
        i = i + 1;
        scanf("%c", &seq_char[i]);
        }
    for (j=i;j>=0;j--) {
        res = res + Val[j] * pow(10 , count);
        count++;
    }
    if (flag == 1) {
        res = -res;
    }
    printf("The integer value of the text is %d",res);



    return 0;
}
