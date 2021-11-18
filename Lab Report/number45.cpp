//45. Creating a data file (lowercase to uppercase conversion)
#include<stdio.h>
#include<ctype.h>
int main()
{
	char text[100],ch;
	FILE *fp;
	fp = fopen("file.txt","w"); //opening a file in write mode
	
	printf("Enter a string(sentence): ");
	while((ch=getchar())!='\n')
	{
		fputc(toupper(ch),fp);
	}
	
	fclose(fp);
	return 0;
}
