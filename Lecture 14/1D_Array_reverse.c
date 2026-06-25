// reverse :

#include<stdio.h>
void main()
{
	int n,i,temp;
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
	//Loop for reverse an array
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	//print reverse array
	printf("\nDisplay the elements of reverse array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
