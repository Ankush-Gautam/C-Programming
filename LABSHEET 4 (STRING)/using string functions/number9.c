/*
   9. Write a C program to count total number of vowels and consonants in a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,vowel=0,consonant=0;
    printf("Enter a string: ");
    gets(str);
    
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else
            consonant++;
    }
    
    printf("\n Vowel count = %d \n Consonant count = %d ",vowel,consonant);
}
