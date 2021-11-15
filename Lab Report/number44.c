//44. Raising a number to a power
#include<stdio.h>
int main()
{
	int i;
	float num, power,value=1;
	
	printf("Enter the number: ");
	scanf("%f",&num);
	printf("Enter the power: ");
	scanf("%f",&power);
	
	for(i=1;i<=power;i++)
	{
		value *= num;
	}
	
	printf("Answer = %.4f",value);
	
	return 0;
}
