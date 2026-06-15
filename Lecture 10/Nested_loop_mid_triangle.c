// Nested loop:

#include<stdio.h>
void main()
{
	int row,i,j,sp;
	printf("Enter the value of row: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(sp=1;sp<=row-i;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
} 
