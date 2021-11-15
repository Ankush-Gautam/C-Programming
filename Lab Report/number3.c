//3. Area and circumference of circle
#include <stdio.h>
#define PI 3.14

int main()
{
    float radius, area, c;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    area = PI * radius * radius;
    c = 2 * PI * radius;

    printf("Area = %.3f and Circumference = %.3f",area,c);

    return 0;
}
