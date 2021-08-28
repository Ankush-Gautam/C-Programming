/*
    Write a program to find whether a character is consonant or vowel
*/
#include<stdio.h>
int main()
{
    char input;
    
    printf("Enter a letter: ");
    scanf("%c",&input);
    
    if(input=='a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'||
        input=='A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')
    {
        printf("%c is a vowel.",input);
    }
    
    else
         printf("%c is a consonant.",input);
}
