// To calculate Simple Intrest

#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("Enter the value of p,r,t");
	scanf("%f%f%f",&p,&r,&t);
	si = (p*r*t)/100;
	printf("simple intrest = %f",si);
}
