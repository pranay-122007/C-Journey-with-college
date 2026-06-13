// Program to check greater b/w three numbers

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a,b and c");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is greater");
		}
		else
		{
			printf("C is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is greater");
		}
		else
		{
			printf("C is greater");
		}
	}
}
