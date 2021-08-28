/*
    3. Write a C program to concatenate two strings.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    
    printf("Write something in String 1: ");
    gets(str1);
    printf("Write something in String 2: ");
    gets(str2);
    
    strcat(str1,str2);
    printf("%s",str1);
}
