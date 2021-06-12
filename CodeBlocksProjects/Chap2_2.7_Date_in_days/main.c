#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dd,mm,yy,Number_of_the_year,num_31,num_30;
    printf("Please input a precise day like 14/03/2005:\n");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    num_30 = 0;
    num_31 = 0;
    if (mm == 1) {
        Number_of_the_year = dd;
    }else if(mm == 2) {
        Number_of_the_year = 31 + dd;
    }else if ((mm >= 3) && (mm % 2 != 0)) {
        num_31 = mm / 2 - 1;
        num_30 = mm / 2 - 1;
    }else if ((mm >= 3) && (mm % 2 == 0)) {
        num_31 = mm / 2 - 1;
        num_30 = mm / 2 - 2;
    }
    if (mm >= 3) {
        Number_of_the_year = 31 + 28 + 31 * num_31 + 30 * num_30 + dd;
        if ((yy%4==0 && yy%100!=0) || (yy%400==0)) {
            Number_of_the_year++;
        }
    }

    printf("%02d/%02d/%d is day number %d of the year %d",dd,mm,yy,Number_of_the_year,yy);
    return 0;
}
