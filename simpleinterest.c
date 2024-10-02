//CALCULATE THE SIMPLE INTEREST
#include <stdio.h>

int main(){
    float amount;
    int time;
    float rate;
    float simple_interest;
    
    printf("Enter the amount: ");
    scanf("%f", &amount);
    
    printf("Enter the time: ");
    scanf("%d", &time);
    
    printf("Enter the rate: ");
    scanf("%f", &rate);
    
    simple_interest = (amount * time * rate)/100;
    printf("The simple interest is %f", simple_interest);
    
    return 0;
    
}