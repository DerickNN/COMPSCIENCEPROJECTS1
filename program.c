// a program to add two numbers
//Derick Ngururi
//REG: BCS -03-0010/2024
#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    sum = a + b;
    printf("The sum of a and b is:%d", sum);
    
    return 0;
}