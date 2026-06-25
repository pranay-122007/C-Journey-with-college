// sorting :

#include<stdio.h>
void main()
{
	int n,i,temp,j;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	//input
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//print orignal array
	printf("Display the elements of original array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//Loop for sort an array
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//print sorted array
	printf("\nDisplay the elements of sorted array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
