// To check a number lies between 100 and 20012

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num >= 100 && num <= 200)
    {
        printf("Number lies between 100 and 200");
    }
    else
    {
        printf("Number does not lie between 100 and 200");
    }
}
