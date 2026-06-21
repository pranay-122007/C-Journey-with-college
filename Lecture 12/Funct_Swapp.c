// Function - with args and no return value
//swapping using call by value

#include<stdio.h>
void swapp(int p, int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	printf("After swapping value of p in main = %d\n",p);
	printf("After swapping value of p in main = %d\n",q);
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("")
}
	
}
void main()
{
	int a,b;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("Before swapping the value of a in main = %d\n",a);
	printf("Before swapping the value of b in main = %d\n",b);
	swapp(a,b);
	printf("After swapping the value of a in main = %d\n",a);
	printf("After swapping the value of b in main = %d\n",b);
}
