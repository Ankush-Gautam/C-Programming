//16. Calculating division of students
#include<stdio.h>

int main()
{
	float division, marks[20],total=0,percent;
	int i,n;
	
	tryagain:
	system("cls");
	printf("Enter the number of subject : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the marks of subject%d : ",i+1);
		scanf("%f",&marks[i]);
		total += marks[i];
	}
	
	percent = total/n;
	printf("\nPercentage = %.2f%%\n",percent);
	printf("GPA = %.2f\n",percent/25);
	
	if(percent >= 90 && percent<=100)
	{
		printf("Division = A+\n");
	}
	else if(percent >= 80 && percent<90)
	{
		printf("Division = A\n");
	}
	else if(percent >= 70 && percent<80)
	{
		printf("Division = B+\n");
	}
	else if(percent >= 60 && percent<70)
	{
		printf("Division = B\n");
	}
	else if(percent >= 50 && percent<60)
	{
		printf("Division = C+\n");
	}
	else if(percent >= 40 && percent<50)
	{
		printf("Division = C\n");
	}
	else if(percent >= 30 && percent<40)
	{
		printf("Division = D+\n");
	}
	else if(percent >= 20 && percent<30)
	{
		printf("Division = D\n");
	}
	else if(percent > 0 && percent<20)
	{
		printf("Division = F\n");
	}
	else
	{
		printf("\nInvalid details! Try Again\n");
		system("pause");
		goto tryagain;
	}
			
	return 0;
}
