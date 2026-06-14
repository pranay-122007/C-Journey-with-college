// 

#include<stdio.h>
void main()
{
	int n,i,f;
	printf("Enter the numder  ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial = %d",f);
}
