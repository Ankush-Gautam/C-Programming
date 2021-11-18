//46.Reading a data file
#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp = fopen("file.txt","r");
	
	//reading from the file and printing in the console
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	
	fclose(fp);
	return 0;
}
