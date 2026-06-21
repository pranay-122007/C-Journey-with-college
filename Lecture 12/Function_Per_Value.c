// write a program to check the given number is perfect or not - with args and no return value

#include<stdio.h>
void check(int);
void check(int n)// formal parametre
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("number is perfect");
	else
	printf("number is not perfect");
}
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	check(n);//actual parametre
}
