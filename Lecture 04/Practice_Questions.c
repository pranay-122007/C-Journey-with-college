//Practice work - to find the area of a circle

//#include<stdio.h>
//void main() 
//{
//	float r,area;
//	printf("Enter the radius of the circle r");
//	scanf("%f",&r);
//		
//	//area = 3.14*r*r
//	area = 3.14159*r*r;
//	printf("Area of circle = %2f\n",area);
//}



//Practice work - to find the area of a triangle

//#include<stdio.h>
//void main() 
//{
//	float base,height,area;
//	
//	printf("enter the base of a triangle");
//	scanf("%f",&base);
//	
//	printf("enter the height of a triangle");
//	scanf("%f",&height);
//	
//	//area of triangle = 0.5*base*height
//	area = 0.5*base*height;
//	printf("Area of a triangle = %2f\n",area);
//}



//practice work - to find simple intrest
#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("Enter the values of p,r and t");
	scanf("%f%f%f",&p,&r,&t);
	//SI=P*R*T/100
	si = (p*r*t)/100;
	printf("Simple Intrest = %2f\n",si);
}
