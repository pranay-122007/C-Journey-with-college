// Searching :

#include<stdio.h>
void main()
{
	int n,i,temp,j,search,flag=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	//input
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search elements: ");
	scanf("%d",&search);
	//print orignal array
	printf("Display the elements of original array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//Loop for searching an array
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		printf("Element is found");
	else
		printf("Element is not found");
}
	
