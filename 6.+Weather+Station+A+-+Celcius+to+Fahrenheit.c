#include<stdio.h>

int main()
{
    double ftemp, ctemp;
    printf("Enter degrees in Celcius: ");
    scanf("%lf", &ctemp);
    ftemp = ctemp * 1.8 + 32;
    printf("Conversion of %.2lf Celcius degrees is %.2lf Fahrenheit Degrees\n", ctemp, ftemp);
    return 0;
}