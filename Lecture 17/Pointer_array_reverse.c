// Pointr to array 
#include<stdio.h>
void main()
{
	int n,*start,*end,i,temp;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the element of array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	start=a;
	end=a+n-1;
	printf("Display the original array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	//print reverse
	printf("\nDisplay the elements of reverse array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
