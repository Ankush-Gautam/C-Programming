/*
    2. Write a C program to copy one string to another string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    
    printf("Enter a string: ");
    gets(str1);
    
    strcpy(str2,str1);
    printf("COPIED STRING: %s",str2);
}
