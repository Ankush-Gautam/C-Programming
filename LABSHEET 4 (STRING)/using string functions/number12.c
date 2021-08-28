/*
    12. Write a C program to check whether a string is palindrome or not.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],copy[20];
    
    printf("Enter a string : ");
    gets(str1);
    strcpy(copy,str1);
    strcpy(str2,strrev(copy));
    
//    printf("%s %s\n",str2,str1);
    
    if(strcmp(str1,str2)==0)
    {
        printf("%s is a palindrome letter.",str1);
    }
    else
        printf("%s is not a palindrome letter.",str1);
}
