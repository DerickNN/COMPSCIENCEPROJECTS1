//A C PROGRAM TO CALCULATE THE AREA AND PERIMETR OF A CIRCLE
#include <stdio.h>
float area(int x){
    float r;
    r = 3.142 * x * x;
    
    return r;
}
float perimeter(int y){
    float z;
    z = 2 * 3.142 * y;
    
    return z;
}
struct circle{
    int radius;
} circle1, circle2;
int main(){
    float t;
    float f;
    
    printf("Enter the radius of the circle:");
    scanf("%d", &circle1.radius);
    
    t = area(circle1.radius);
    f = perimeter(circle1.radius);
    
    printf("The area of the circle:%.2f\n", t);
    printf("The perimeter of the circle:%.2f", f);
    
    
    return 0;
}