//24. searching for palindrome
#include<stdio.h>
int main()
{
	int rem=0,num,Originalnum,temp=0,i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	Originalnum = num;
	
	while(num!=0)
	{
		rem = num%10;
		temp = temp * 10 + rem;
		num = num/10;
	}
	
	//checking if number matches
	if(temp == Originalnum)
		printf("%d is a palindrome.",Originalnum);
	else
		printf("%d is not a palindrome.",Originalnum);
		
	return 0;	
}

