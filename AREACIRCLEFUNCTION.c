// C FUNCTIONS THE AREA OF A CIRCLE
#include <stdio.h> 

float area(int r){
    
    float A;
    
     A = 3.142 * r * r;
     
     return A;
}


int main() {
    float y;
    
    y = area(5);
    
    printf("The area of a circle is %.2f \n", y);
    
    return 0;
}
