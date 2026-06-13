// To find the area of a triangle

#include<stdio.h>
void main()
{
	float base,height,area;
	printf("Enter the base of trianlge");
	scanf("%f",&base);
	
	printf("Enter the height of triangle");
	scanf("%f",&height);
	
	area = 0.5*base*height;
	printf("Area of triangle = %2f/n");
}
