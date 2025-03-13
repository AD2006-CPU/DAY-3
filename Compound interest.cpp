#include <stdio.h>
#include <math.h>
int main() 
{
    float principle, rate, time, ci;
    printf("Enter Principle amount: ");
    scanf("%f", &principle);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter Time: ");
    scanf("%f", &time);
    ci = principle * (pow((1 + rate / 100 ),time));
    printf("Compound Interest = %f\n", ci);
    return 0;
}

