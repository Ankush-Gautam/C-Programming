//33. Deviation about an average
#include<stdio.h>
#include<math.h>
#define size 50
int main()
{
	float data[size],sum=0,mean=0,average=0;
	int i,n;
	
	printf("Enter the size of data: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter number%d: ",i+1);
		scanf("%f",&data[i]);
		sum += data[i];
	}
	
	mean = sum/n;
	
	//finding average deviation using formula
	for(i=0;i<n;i++)
	{
		average += abs(data[i] - mean);
	}
	printf("%f\n",mean);
	printf("Average Deviation = %.2f",average/n);
	
	return 0;
}
