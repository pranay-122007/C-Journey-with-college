// To Find the maximum among four numbers

#include<stdio.h>
void main()
{
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a > b && a > c && a > d)
    {
        printf("A is maximum");
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is maximum");
    }
    else if (c > a && c > b && c > d)
    {
        printf("C is maximum");
    }
    else
    {
        printf("D is maximum");
    }
}
