/*
    4. Write a C program to compare two strings.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    
    if(strcmp(str1,str2)==0)
    {
        printf("String 1 and String 2 are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }
}
