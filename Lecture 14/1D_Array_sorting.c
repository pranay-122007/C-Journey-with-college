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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
