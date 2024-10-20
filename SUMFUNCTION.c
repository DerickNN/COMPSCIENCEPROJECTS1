// C FUNCTIONS
#include <stdio.h>
int sum(int x, int y);
float divide(float a, float b);

int main() {
    int x, z;
    float y;
    
    x = sum(10, 20);
    z = sum(30, 40);
    y = divide(12, 36);
    
    printf("The sum is %d \n", x);
    printf("The sum is %d \n", z);
    printf("The division is %.2f", y);
    

    return 0;
}
int sum(int x, int y){
    int z;
     z = x + y;
     return z;
}
float divide(float a, float b){
    float c;
    c = a/b;
    return c;
}