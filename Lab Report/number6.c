//6. Character conversion from uppercase to lowercase and vice versa
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch >= 97 && ch<= 122)
    {
        ch = ch - 32;
        printf("Uppercase = %c",ch);
    }
    else
    {
        ch = ch + 32;
        printf("Lowercase = %c",ch);
    }

    return 0;
}
