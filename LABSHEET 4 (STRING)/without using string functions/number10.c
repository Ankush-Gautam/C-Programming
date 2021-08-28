/*
    10. Write a C program to count total number of words in a string.
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int i=0, count=0;
    
    printf("Enter a string: ");
    gets(str);
    
    for(i=0;i!=str[i];i++)
    {
        if(str[i] == ' '&& isalpha(str[i+1]) ) //isalpha is not necessary but is used for precise wordcount
        {
            count++;
        }  
    }
    count++;
    printf("Total word count : %d",count);
}
