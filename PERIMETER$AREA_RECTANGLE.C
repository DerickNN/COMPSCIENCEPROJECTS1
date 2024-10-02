//A PROGRAM TO CALCULATE THE PERIMETER OF A RECTANGLE
//DERICK NGURURI
//BCS-O3-0010/2024

#include<stdio.h>

int main()
{
    int L;//length of the rectangle
    int W;//width of the rectangle
    int P;//perimeter of the rectangle
    int A;//area of the rectangle
    
    printf("Enter the Length: ");
    scanf("%d", &L);
    
    printf("Enter the width: ");
    scanf("%d", &W);
    
    P = (2 * ( L + W));
    A = L * W;
    
    printf("The perimeter of the rectangle is:%d \n", P);
    printf("The area of the rectangle is:%d", A);
    
    return 0;
}