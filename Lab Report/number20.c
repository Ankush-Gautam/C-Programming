//encoding a string of characters
#include<stdio.h>
#define n 50
void main()
{
    char str[n];
    int i=0;

    printf("Write some text to encode it: ");
    gets(str);

    while(str[i] != '\0')
    {
       str[i] -= 30;	//deduct the ascii value by 30 , which make the string appear encoded
       i++;
    }

    printf("Encoded word: ");
    puts(str);
}
