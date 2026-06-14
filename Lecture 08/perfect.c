// To check 

#include<stdio.h>
void main()
{
	int n,i,
	printf("Enter the numder: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i)
	{
		if(n%i=10)
		{
			printf("%d",i);
			sum=sum+i;
		}
		if(sum==n)
		printf("Number is not perfect");
	}
}
