//A PROGRAM TO GET THE SURFACE AREA OF A CYLINDER
//DERICK NGURURI
//BCS-03-0010/2024

#include<stdio.h>
int main()
{
    int radius;
    int height;
    float PI = 3.142;
    float surface_area;
    
    printf("Enter the radius: ");
    scanf("%d", &radius);
    
    printf("Enter the height: ");
    scanf("%d", &height);
    
    surface_area = (2 * PI * radius * radius) + (2 * PI *radius * height);
    printf("The surface area of the cylinder is:%f", surface_area);
    
    return 0;
}