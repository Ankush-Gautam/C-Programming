//4. Area and perimeter of rectangle
#include<stdio.h>
int main()
{
    float l,b,area,p;

    printf("Enter the length and breadth: ");
    scanf("%f%f",&l,&b);

    area = l*b;
    p = 2 * (l+b);

    printf("Area = %.3f and Perimeter = %.3f",area,p);

    return 0;
}
