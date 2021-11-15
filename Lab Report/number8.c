//8. Averaging student exam scores
#include<stdio.h>
int main()
{
    float marks[10],sum=0, avg_marks;
    int i,n;
	
	printf("Enter the no. of subjects: ");
	scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter marks of subject%d : ",i+1);
        scanf("%f",&marks[i]);
        sum += marks[i];
    }
    
    avg_marks = sum/n;

    printf("Average exam score = %.2f\n",avg_marks);


    return 0;
}
