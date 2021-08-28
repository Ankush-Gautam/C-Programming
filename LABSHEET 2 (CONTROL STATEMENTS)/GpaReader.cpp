/*
Write a program to compute grade of students using if else. The grades are
assigned as followed:
Marks               Grade
Marks<50              F
50<=marks<60          C
60<=marks<70          B
70<=marks<80         B+
80<=marks<90        A
90<=marks<=100      A+
*/
#include<stdio.h>
int main()
{
    float marks;
    
    printf("Enter your marks: ");
    scanf("%f",&marks);
    
    if(marks < 50 )
        printf("Your Grade is 'F'.");
    else if(marks >= 50 && marks < 60)
        printf("Your Grade is 'C'.");
    else if(marks >= 60 && marks < 70)
        printf("Your Grade is 'B'.");
    else if(marks >= 70 && marks < 80)
        printf("Your Grade is 'B+'.");
    else if(marks >= 80 && marks < 90)
        printf("Your Grade is 'A'.");
    else
        printf("Your Grade is 'A+'.");
}
