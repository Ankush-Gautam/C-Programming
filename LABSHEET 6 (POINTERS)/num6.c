///6. Write a C program to swap two arrays using pointers.
#include<stdio.h>
#define n 5
int main()
{
    int a[n],b[n],temp[n],*a_ptr,*b_ptr,*temp_ptr,i;

    //initializing pointers
    a_ptr = a;
    b_ptr = b;
    temp_ptr =temp;

    //asking user for input
    printf("Enter the elements of First Array : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter element%d: ",i+1);
        scanf("%d",(a_ptr+i));
    }

    //for second array
    printf("\nEnter the elements of Second Array : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter element%d: ",i+1);
        scanf("%d",(b_ptr+i));
    }

    //copying elements of first array to temp
    for(i=0;i<n;i++)
    {
        *(temp_ptr+i)=*(a_ptr+i);
    }

    //copying elements of second array b[] to first a[]
    //(as we have stored the value of a[] to temp to copy it to b[]
    printf("\n\nElements of First Array after swapping: \n");
    for(i=0;i<n;i++)
    {
        *(a_ptr+i)=*(b_ptr+i);
        printf("%d\n",*(a_ptr+i));
    }

    //copying elements from temp[] to b[]
     printf("\n\nElements of Second Array after swapping: \n");
    for(i=0;i<n;i++)
    {
        *(b_ptr+i)=*(temp+i);
        printf("%d\n",*(b_ptr+i));
    }

}
