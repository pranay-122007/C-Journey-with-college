// Write a program to check given number is even or odd

#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number");
	scanf("%d", &a);
	
	if(a%2==0)
	{
		printf("Given number is even");
	}
	else
	{
		printf("Given number is odd");
	}
}
