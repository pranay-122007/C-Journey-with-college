// To Convert distance from kilometer to millimeter

#include<stdio.h>
void main()
{
    float km, mm;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &km);
    
    // 1 km = 1,000,000 mm
    mm = km * 1000000;
    
    printf("Distance in millimeters = %2f\n", mm);
}
