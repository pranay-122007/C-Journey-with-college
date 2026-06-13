// Program to check greater b/w three numbers

#include<stdio.h>
void main()
{
	float S1,S2,S3,S4,S5,total,per;
	printf("Enter the marks of five subject");
	scanf("%f%f%f%f%f",&S1,&S2,&S3,&S4,&S5);
	total = S1+S2+S3+S4+S5;
	per = total/5;
	printf("Total marks = %.2f\n",total);
	printf("Percentage = %.2f\n",per);
	
	if(per>=90 && per<=100)
	{
		printf("A+");
	}
	else if(per>=80 && per<90)
	{
		printf("A");
	}
	else if(per>=70 && per<80)
	{
		printf("B+");
	}
	else if(per>=60 && per<70)
	{
		printf("B");
	}
	else if(per>=50 && per<60)
	{
		printf("C+");
	}
	else if(per>=45 && per>50)
	{
		printf("c");
	}
	else
	{
		printf("Fail");
	}
}
