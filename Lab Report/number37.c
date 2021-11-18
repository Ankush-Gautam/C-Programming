//Adding two tables of number
#include<stdio.h>
int main()
{
	int table1[10],table2[10],temp[10];
	int i,j,num1,num2;
	
	printf("Enter the numbers for their table: ");
	scanf("%d%d",&num1,&num2);
	
	printf("\n\nTable of %d\n",num1);
	for(i=0;i<10;i++)
	{
		table1[i]=num1*(i+1);
		printf("%d X %d = %d\n",num1,i+1, num1*(i+1));
	}
	
	printf("\n\nTable of %d\n",num2);
	for(i=0;i<10;i++)
	{
		table2[i]=num2*(i+1);
		printf("%d X %d = %d\n",num2,i+1, num2*(i+1));
	}
	
	//adding the two tables
	printf("\n\nAdding two tables\n");
	for(i=0;i<10;i++)
	{
		temp[i]=table1[i] + table2[i];
		printf("%d\n",temp[i]);
	}
	return 0;
}
