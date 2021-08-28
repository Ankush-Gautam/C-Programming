/*
    8. Write a C program to find total number of alphabets, digits or special character in a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int alpha=0,digit=0,symbol=0,i=0;
    
    printf(" Write a sentence: ");
    gets(str);
    
   while(str[i]!='\0')
   {
       if((str[i]>= 'a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
       {
           alpha++;
       }
       else if(str[i]>='0'&&str[i]<='9')
       {
           digit++;
       }
       else
       {
           symbol++;
       }
       i++;
   }
   
   printf("\n Alphabets count = %d\n Digits count = %d\n Symbol counts = %d\n",alpha,digit,symbol);
}
