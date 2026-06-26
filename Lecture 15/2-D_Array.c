// 2-D Array :
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the size of row and column: ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter the elements of 2-D Array\n");
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
		}
		printf("\n");
	}
}
	
