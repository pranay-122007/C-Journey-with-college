//Array : Intilizing :

#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50},i;
	//manual access
	printf("first ele = %d\n",a[0]);
	printf("second ele = %d\n",a[1]);
	printf("third ele = %d\n",a[2]);
	printf("fourth ele = %d\n",a[3]);
	printf("fifth ele = %d\n",a[4]);
	
	//loop access
	printf("Display the element of array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
