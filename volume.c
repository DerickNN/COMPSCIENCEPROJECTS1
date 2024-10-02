//A PROGRAM TO GET THE VOLUME OF A CYLINDER
//DERICK NGURURI
//BCS-03-0010/2024

#include<stdio.h>
int main()
{
    int radius;
    int height;
    float PI = 3.142;
    float volume;
    
    printf("Enter the radius: ");
    scanf("%d", &radius);
    
    printf("Enter the height: ");
    scanf("%d", &height);
    
    volume = PI * radius * radius * height;
    printf("The volume of the cylinder is:%f", volume);
    
    return 0;
