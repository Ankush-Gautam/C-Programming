//31.Search for a maximum
#include<stdio.h>
#define size 50
int main()
{
	float largest,num[size];
	int i,n;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter num%d: ",i+1);
		scanf("%f",&num[i]);
	}
	
	largest = num[0];
	
	for(i=0;i<n;i++)
	{
		if(largest<num[i])
			largest = num[i];
	}
	
	printf("Maximum Number = %.2f",largest);
	
	return 0;
}
