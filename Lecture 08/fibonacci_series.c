// fibonacci : 0 1 1 2 3 5 8 13........................

#include<stdio.h>
void main()
{
	int a=-1,b=1,n,i,sum;
	printf("Enter the last term of series: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
	}
}
