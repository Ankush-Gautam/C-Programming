//11. Execution error (Real root of quadratic equation)
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c ,discriminant, PosRoot,NegRoot;
	
	printf("Enter the value of a,b and c: ");
	scanf("%f%f%f",&a,&b,&c);
	
	discriminant = b*b - (4*a*c);
	
	PosRoot = (-b + sqrt(discriminant)) / (2*a);
	NegRoot = (-b - sqrt(discriminant)) / (2*a);

	printf("Root1 = %.4f Root2 = %.4f",PosRoot,NegRoot);
    return 0;
}
