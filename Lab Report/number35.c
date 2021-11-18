//35.piglatin generator
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i,pos;
	
	printf("Enter a string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i] == "a" || str[i] == "e" || str[i] == "i" || str[i] == "o" || str[i] == "u"){
			pos = i;
			break;
		}
	}
	
	for(i=pos;str[i]!='\0';i++)
		printf("%c",str[i]);
	
	for(i=0;i<pos;i++)
		printf("%c",str[i]);
	
	return 0;
}
