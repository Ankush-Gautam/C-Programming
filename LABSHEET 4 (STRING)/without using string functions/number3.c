/*
    3. Write a C program to concatenate two strings.
*/
#include <stdio.h>
int main()
{
   char str1[50], str2[50], i, j;
   printf("\nEnter first string: ");
   gets(str1);
   printf("\nEnter second string: ");
   gets(str2);
   
   /* This loop is to store the length of str1 in i
    * It just counts the number of characters in str1
    */
   for(i=0; str1[i]!='\0'; ++i); 
 
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   
   str1[i]='\0';
   printf("\nOutput: %s",str1);
   
   return 0;
}
