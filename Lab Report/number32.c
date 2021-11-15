//32. Generating fibonacci numbers
#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c,sum=0;
	
	printf("How many number of series? ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		c = a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	
	return 0;
}
