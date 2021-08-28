/*
    18.Write a C program to sort array elements in ascending or descending order.
*/
#include<stdio.h>
void main ()
{
    int a[10],i, j,temp,choice;
    
    for(i=0;i<10;i++)
    {
        printf("Enter num%d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the type you want to sort data\n");
    printf("\n1 = Ascending Order\n");
    printf("2 = Descending Order\n=>");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        for(i = 0; i<10; i++)
        {
            for(j = i+1; j<10; j++)
            {
                if(a[j] < a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("Data in Ascending order:\n");
        for(i = 0; i<10; i++)
        {
             printf("%d\n",a[i]);
        }
    }
    else if(choice==2)
    {
        for(i = 0; i<10; i++)
        {
            for(j = i+1; j<10; j++)
            {
                if(a[j] > a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("Data in Descending order:\n");
        for(i = 0; i<10; i++)
        {
             printf("%d\n",a[i]);
        }
    }
    else
    {
        printf("\nInvalid choice!!!\n\n");
    }
}
