//A PROGRAM TO OUTPUT NUMBERS 1 TO 10 using do-while loop

#include<stdio.h>
int main(){
    int i, j, sum = 0;
    printf("Enter a number and a number when to stop:");
    scanf("%d%d",&i,&j);
    
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