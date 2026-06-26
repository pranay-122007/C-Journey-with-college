//Write a program to add two matrix

//01. write a program to find a sum of the diagonal fo the matrix
// 2-D Array :
#include<stdio.h>
void main()
{
	int r,c,i,j,sum=0;
	printf("Enter the size of row and column: ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c];
	if(r==c)
	{
	printf("Enter the elements of 2-D Array 1\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of 2-D Array 2\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Display the elements of 2-D Array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
			//if(i==j)
			if(i+j==r-1)
			sum=sum+a[i][j];
		}
		printf("\n\n");
	}
	//loop to add a matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=a[i][j]+b[i][j];
		}
	}
	printf("sum of diagonal = %d\n",sum);
	}
	else
	{
		printf("Invalid Matrix");
	}
}
	
