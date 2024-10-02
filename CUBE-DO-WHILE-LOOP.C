//A PROGRAM TO OUTPUT THE CUBE OF NUMBERS 1 TO 5 USING DO-WHILE LOOP

#include<stdio.h>
int main(){
    int i;
    int j;
    
    printf("Enter a number:");
    scanf("%d", &i);
    printf("Enter a number:");
    scanf("%d", &j);
    
    do{
    printf("Number is: %d and cube of the %d is %d \n", i, i, i*i*i);
        i++;
    }while(i < j);
    {
      printf("Number is: %d and cube of the %d is %d \n", i, i, i*i*i);  
    }
    return 0;
}