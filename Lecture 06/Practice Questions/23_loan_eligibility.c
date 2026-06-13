// Determine if a person is eligible for a loan

#include<stdio.h>
void main()
{
    int monthly_income, credit_score;
    printf("Enter monthly income and credit score: ");
    scanf("%d %d", &monthly_income, &credit_score);
    
    if (monthly_income >= 30000 && credit_score >= 750)
    {
        printf("Eligible for loan");
    }
    else
    {
        printf("Not eligible for loan");
    }
}
