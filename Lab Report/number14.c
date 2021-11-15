//calculating total expenses
#include<stdio.h>
int main()
{
	float price, quantity, total_exp;
	
	printf("Total Expense Calculator (provide quantity and its price)\n");
	printf("Enter the quantity: ");	
	scanf("%f",&quantity);
	printf("Enter the price(in Rs.): ");
	scanf("%f",&price);
	
	total_exp = quantity * price;
	printf("Total expense = %.2f",total_exp);
	return 0;	
}
