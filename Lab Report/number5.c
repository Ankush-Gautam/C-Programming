//5. Character conversion from lowercase
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character in lowercase: ");
    scanf("%c",&ch);

    if(ch >= 97 && ch <= 122)
        ch = ch - 32;

    printf("Uppercase = %c",ch);
    return 0;
}
