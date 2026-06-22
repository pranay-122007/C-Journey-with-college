//Array : Intilizing :

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the number of element: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display the element of array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		sum = sum+a[i];
	}
	printf("sum =%d\n",sum);
}
