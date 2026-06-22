// Wirite a program to find sum of digit of a number

#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return (n%10)+sum(n/10);
}
void main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("sum of digit = %d",sum(n));
}
