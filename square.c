//A C PROGRAM TO FIND THE SQUARE OF ANY NUMBER
#include<stdio.h>
int square(int z){
    int y;
    y = z * z;
    
    return y;
}
int main(){
    float squar;
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    squar = square(2);
    
    printf("The square of %d is %.2f", n,squar);
    
    return 0;
}