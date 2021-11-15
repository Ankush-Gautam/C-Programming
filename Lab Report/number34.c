//34.Reordering a list of numbers
#include<stdio.h>
#define size 50
int main()
{
	int i,j,num[size],n,temp;
	
	printf("How many numbers you want to record? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number%d: ",i+1);
		scanf("%d",&num[i]);	
 	}
 	
 	//reordering the numbers
 	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	//printing the reordered numbers
	printf("Numbers in Ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	
 	}
	
	return 0;	
}
