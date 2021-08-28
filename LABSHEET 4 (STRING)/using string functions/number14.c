/*
    14. Write a C program to trim leading white space characters from given string.
*/
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void trimLeading(char * str);

int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string starting with lots of space: ");
    gets(str);

    printf("\nString before trimming leading whitespace: \n%s", str);

    trimLeading(str);

    printf("\n\nString after trimming leading whitespace: \n%s", str);

    return 0;
}


/*
 * Remove leading whitespace characters from string
 */
void trimLeading(char * str)
{
    int index, i, j;

    index = 0;

    /* Find last index of whitespace character */
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }


    if(index != 0)
    {
        /* Shift all trailing characters to its left */
        i = 0;
        while(str[i + index] != '\0')
        {
            str[i] = str[i + index];
            i++;
        }
        str[i] = '\0'; // Make sure that string is NULL terminated
    }
}
