/*
    12. Write a C program to check whether a string is palindrome or not.
*/
#include<stdio.h>
int compare(char [],char[]); //declaring
int main()
{
    char str[20],rev[20];
    int i,j,z;
    
    printf("\nEnter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++); //for counting length of the string
    
    i--;
    for(j=0;str[j]!='\0';j++)
    {
        rev[i]=str[j];
        i--;
    }
    
    z=compare(str,rev);
    
    if(z==0)
        printf("Strings are Palindrome");
    else
        printf("Strings are not Palindrome!!!");
    
    return 0;
}

int compare(char a[], char b[])
{
    int flag=0,i;
    
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    
    if(flag==0)
    return 0;
    
    else
    return 1;
}
