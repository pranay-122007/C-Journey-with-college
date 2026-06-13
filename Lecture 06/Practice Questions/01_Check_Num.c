//To check whether a number is Positive, Negative or Zero

#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("Zero");
	}
	else
	{
		if(num>0)
		{
			printf("Positive");
		}
		else
		{
			printf("Negative");
		}
	}
}
