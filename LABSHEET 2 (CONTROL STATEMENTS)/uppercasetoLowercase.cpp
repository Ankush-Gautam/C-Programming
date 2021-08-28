/*
    WAP to convert upper case character to lowercase character and vice versa.
*/
#include <stdio.h>
int main()
{
    char c,upr,lwr;
    printf("Enter a letter: ");
    scanf("%c", &c);
    
    if(c >= 'a')
    {
        upr = c - 32;
        printf("Uppercase = %c", upr);
    }
    else 
    {
        lwr = c + 32;
        printf("Lowercase = %c",lwr);
    }       
}
