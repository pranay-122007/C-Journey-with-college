//write a program to print a table of a given number using recursion : with args and no return value

#include<stdio.h>
void table(int n, int i)
{
	if(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		table(n,i+1);
	}
}
void main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	table(n,1);
}
