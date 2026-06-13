// To  Check whether a triangle is equilateral, isosceles, or scalene

#include<stdio.h>
void main()
{
    int side1, side2, side3;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral triangle");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
}
