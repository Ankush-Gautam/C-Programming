//40. Displaying the Day of the year
#include<stdio.h>
int main()
{
	int month,days, totalday;
	
	printf("Enter the month: ");
	scanf("%d",&month);
	printf("Enter today's day: ");
	scanf("%d",&days);
	
	totalday = (month-1) * 30 + days;
	
	printf("Current day of the year = %d ",totalday);
	
	return 0;
}
