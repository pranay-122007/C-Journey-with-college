// To Determine a triangle is valid based on its three angles

#include<stdio.h>
void main()
{
    int ang1, ang2, ang3;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    
    if (ang1 + ang2 + ang3 == 180 && ang1 > 0 && ang2 > 0 && ang3 > 0)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
}
