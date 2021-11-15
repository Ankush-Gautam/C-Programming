//15. Calculating bonus
#include<stdio.h>
int main()
{
    float bonus_percent, bonus_amt, amount;

    printf("Enter the Total Amount : Rs.");
    scanf("%f",&amount);
    printf("Enter the bonus%% : ");
    scanf("%f",&bonus_percent);
    
    bonus_amt = (bonus_percent * amount)/100;
    
    printf("\nBonus amount = Rs.%.2f",bonus_amt);

    return 0;
}
