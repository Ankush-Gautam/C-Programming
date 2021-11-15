//2. Simple interest calculation
#include <stdio.h>

int main()
{
    float p,t,r,si;

    printf("Enter the value of p, t and r: ");
    scanf("%f%f%f",&p,&t,&r);

    si = (p*t*r)/100;
    printf("Simple Interest = Rs.%.2f",si);

    return 0;
}
