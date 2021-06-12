#include <stdio.h>
#include <stdlib.h>

double F2C(double Tf);
double C2F(double Tc);

int main()
{
    char sys;
    double T1,T2;
    printf("Please choose your system, C for Celsius, F for Fahrenheit:");
    scanf("%c",&sys);
    printf("Please enter the temperature:");
    scanf("%lf",&T1);

    if(sys == 'C') {
        printf("User had chosen Celsius system.\n");
        T2 = C2F(T1);
        printf("Temperature converted in Fahrenheit system is: %lf\n", T2);
    }else {
        printf("User had chosen Fahrenheit system.\n");
        T2 = F2C(T1);
        printf("Temperature converted in Celsius system is: %lf\n", T2);
    }
    return 0;
}


double F2C(double Tf)
{
    double Tc;
    Tc = (Tf-32)*5/9;
    return Tc;
}

double C2F(double Tc)
{
    double Tf;
    Tf = Tc*9/5+32;
    return Tf;
}
