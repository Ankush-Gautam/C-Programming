//7. Reading and writing a line of text
#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];

    printf("Enter a line of text: ");
    gets(text);

    printf("You wrote : ");
    puts(text);

    return 0;
}
