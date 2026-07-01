// Pointr to array 
#include<stdio.h>
void main()
{
	int a[5],*p,i;
	printf("enter the element of array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;//p=&a[0]
	// 1 2 3 4 5
	printf("Display the elements of array: \n");
	for(i=0;i<5;i++)
	{
		//printf("%d\t",*p++);//*1000
		printf("%d\t",*(p+1));
	}
}
