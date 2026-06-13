// To Calculate employee bonus based on salary slabs

#include<stdio.h>
void main()
{
    int salary;
    float bonus;
    printf("Enter employee salary: ");
    scanf("%d", &salary);
    
    if (salary < 10000)
    {
        bonus = salary * 0.15; // 15% Bonus
    }
    else if (salary >= 10000 && salary < 25000)
    {
        bonus = salary * 0.10; // 10% Bonus
    }
    else
    {
        bonus = salary * 0.05; // 5% Bonus
    }
    
    printf("Employee Bonus = Rs. %2f", bonus);
}
