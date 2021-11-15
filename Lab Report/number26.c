//calculating factorials
#include<stdio.h>
int main()
{
	int i,num,factorial=1;
	
	printf("Enter the number to find its factorial: ");
	scanf("%d",&num);
	
	for(i=num;i>0;i--)
	{
		factorial *= i;
	}
	printf("factorial = %d",factorial);
	return 0;
}
