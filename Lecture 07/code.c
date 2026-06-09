#include<stdio.h>
void main()
{
    int choice;
    float radius, side, length, breadth, base, height, area;

    printf("--- Select a Shape to Calculate Area ---\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        case 3:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f%f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 4:
            printf("Enter base and vertical height of the triangle: ");
            scanf("%f%f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
            break;
    }
}
