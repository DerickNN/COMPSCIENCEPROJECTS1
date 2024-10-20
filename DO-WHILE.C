//A PROGRAM TO OUTPUT NUMBERS 1 TO 10 using do-while loop

#include<stdio.h>
int main(){
    int i, j, sum = 0;
    printf("Enter a number:");
    scanf("%d",&i);
    printf("Enter a number:");
    scanf("%d",&j);
    
    do {
        printf("%d \n", i);
        i++;
        sum += i;
        
    }
    while(i < j);
    {
    printf("%d \n", i);
   
        
    }
    printf("%d", sum);
    return 0;
}