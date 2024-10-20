//A PROGRAM TO OUTPUT NUMBERS 1 TO 10 using while LOOP

#include<stdio.h>
int main(){
    int i = 5, sum = 0;
    
    while(i > 0){
        printf("%d \n", i);
        i = i - 1;
        sum = sum + i;
    }
    printf("Loop is finished. \n");
    printf("%d", sum);
    return 0;
}