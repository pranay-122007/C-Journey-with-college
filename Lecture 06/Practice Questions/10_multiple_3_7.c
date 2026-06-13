// To check a number is a multiple of 3 or 7

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 || num % 7 == 0)
    {
        printf("Multiple of 3 or 7");
    }
    else
    {
        printf("Not a multiple of 3 or 7");
    }
}
