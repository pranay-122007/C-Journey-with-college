// A simple calculator using if-else-if

#include<stdio.h>
void main()
{
    int a, b;
    char choice;
    printf("Enter choice (+, -, *, /): ");
    scanf("%c", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    if (choice == '+')
    {
        printf("Result = %d", a + b);
    }
    else if (choice == '-')
    {
        printf("Result = %d", a - b);
    }
    else if (choice == '*')
    {
        printf("Result = %d", a * b);
    }
    else if (choice == '/')
    {
        if (b != 0)
        {
            printf("Result = %d", a / b);
        }
        else
        {
            printf("Error! Division by zero");
        }
    }
    else
    {
        printf("Invalid choice");
    }
}
