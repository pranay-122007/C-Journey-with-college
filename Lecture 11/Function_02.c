// Fuction : with args and no return value
// Addition

#include<stdio.h>
void add(float,float);
void add(float p,float q)// formal parametre
{
	float sum;
	sum=p+q;
	printf("Sum = %f",sum);
}
void main()
{
	float a,b;
	printf("Enter the value of a and b: ");
	scanf("%f%f",&a,&b);
	add(a,b);//actual parametre
}
