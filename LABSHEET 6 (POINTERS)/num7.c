///7. Write a C program to reverse an array using pointers.
#include<stdio.h>
#define n 10
int main()
{
    int a[n],*ptr,i,j,temp[n],*temp_ptr;

    ptr = a;
    temp_ptr = temp;

    //asking elements of array from user
    printf("Enter the elements of Array: \n");
    for(i=0;i<n;i++)
    {
        printf("Element%d : ",i+1);
        scanf("%d",(ptr+i));
    }

    //storing elements of a[] in temp[] in reverse order
   for(i=0,j=n-1;i<n;i++)
   {
       *(temp_ptr+j)=*(ptr+i);
       j--;
   }

    //now copying elements of temp[] to a[]
    printf("\n\nPrinting elements in reverse order: \n");
    for(i=0;i<n;i++)
   {
      *(ptr+i) = *(temp_ptr+i);
      printf("%d\n",*(ptr+i));
   }


}
