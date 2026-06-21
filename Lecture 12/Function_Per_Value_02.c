// Function - perfect value - with args and with return value

#include<stdio.h>
int check(int);
int check(int n)//formal parameter
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	return 1;
	else
	return 0;
}
void main()
{
	int n,res;
	printf("Enter the number: ");
	scanf("%d",&n);
	res=check(n);
	if(res==1)
		printf("number is perfect");
	else
		printf("number is not perfect");
	check(n);//actual parametre
}
