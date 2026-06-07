// To find the circumference of a circle

#include<stdio.h>
void main()
{
    float r, circum;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    
    // Formula: 2 * pi * r
    circum = 2 * 3.14159 * r;
    
    printf("Circumference of circle = %2f\n", circum);
}
