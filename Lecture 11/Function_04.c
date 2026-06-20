// Fuction : with args and with return value
// Addition

#include<stdio.h>
void add(float,float);
void add(float p)
{
	float a,b,sum;
	printf("Enter the value of a and b: ");
	scanf("%f%f",&a,&b);
	sum=a+b;
	return sum;
}
void main()
{
	float res;
	res=add();
	printf("Sum=%f",res);
}
