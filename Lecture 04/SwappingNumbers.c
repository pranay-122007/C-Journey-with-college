// To Swapping two numbers using third number

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("find the value of a and b");
	scanf("%d%d,&a,&b");
	
	printf("before swapping value of a = %d/n",a);
	printf("before swapping value of b = %d/n",b);
	c = a;
	a = b;
	b = c;
	
	printf("after swapping value of a = %d/n",a);
	printf("after swapping value of a = %d/n",a);
}
