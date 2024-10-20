//A PROGRAM TO OUTPUT NUMBERS 1 TO 10 WITH FOR LOOP

#include<stdio.h>
int main(){
    int i, sum = 0;//variable declaration
    //for(start; stop; step)
    for(i=1; i<100; i++)
    {
        printf("%d \n", i);
        sum += i;
    }
    printf("%d", sum);
    
    return 0;
}