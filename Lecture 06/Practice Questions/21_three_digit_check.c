// To Check whether a number is a 3-digit number 

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num >= 100 && num <= 999)
    {
        printf("It is a 3-digit number");
    }
    else
    {
        printf("It is not a 3-digit number");
    }
}
