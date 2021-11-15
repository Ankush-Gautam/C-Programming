//19. Converting Several lines of character to uppercase
#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];

    printf("Write sentences: ");
    gets(str);

    strupr(str);
    puts(str);
}
