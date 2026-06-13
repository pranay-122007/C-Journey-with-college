// To find the area of circle

#include<stdio.h>
void main()
{
	float r,area;
	printf("Enter the value of radius");
	scanf("%f",&r);
	
	//area = 3.14*r*r
	area = 3.14159*r*r;
	printf("Area of circle = %2f\n",area);
}
