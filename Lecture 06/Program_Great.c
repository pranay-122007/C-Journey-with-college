//

#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a and b");
	scanf("%d%d, &a,&b");
	
	if(a==b)
	{
		printf("Number is Equal");
	}
	else
	{
		if(a>b)
		{
			printf("Number a is Greater");
		}
		else
		{
			Printf("Number b is Greater");
		}
	}
}
