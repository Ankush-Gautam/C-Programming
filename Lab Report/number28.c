//28.printing backwards
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	
	printf("Enter a string to print backward: ");
	gets(str);

	printf("%s",strrev(str));
	
	return 0;	
}
