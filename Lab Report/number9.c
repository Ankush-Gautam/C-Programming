//9. Compound interest calculation
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,c_amt,ci;

    printf("Enter principal(in Rs): ");
    scanf("%f",&p);
    printf("Enter Rate: ");
    scanf("%f",&r);
    printf("Enter Time(in yrs): ");
    scanf("%f",&t);

    c_amt = p* pow(1+(r/100),t);
    ci = c_amt - p;

    printf("Compound Interest = Rs.%.3f and Compound Amount = Rs.%.3f\n",ci,c_amt);

    return 0;
}
