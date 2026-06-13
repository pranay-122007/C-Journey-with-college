// To Find the second largest among three numbers

#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a > b && a < c) || (a < b && a > c))
    {
        printf("A is the second largest");
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        printf("B is the second largest");
    }
    else
    {
        printf("C is the second largest");
    }
}
