/*
   6. Write a C program to convert uppercase string to lowercase.
*/
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    
    printf("Enter a string in Uppercase : ");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]+32;
    }
   
    printf("OUTPUT: %s",str);

}
