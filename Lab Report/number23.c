//23.Calculating depreciation
#include<stdio.h>
#include<math.h>
int main()
{
	float p, year, rate,currentValue,depAmt;
	
	printf("Enter Original Cost: ");
	scanf("%f",&p);
	printf("Enter no. of year used: ");
	scanf("%f",&year);
	printf("Enter rate to be applied: ");
	scanf("%f",&rate);
	
	currentValue = p * pow((1 - (rate/100)),year); 	
	depAmt = p - currentValue;
	
	printf("Depreciation = %.2f",depAmt);
	return 0;	
}
