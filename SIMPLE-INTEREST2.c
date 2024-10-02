//A PROGRAM TO CALCULATE SIMPLE INTEREST
//DERICK NGURURI
//BCS-003-0010/2024

#include<stdio.h>

int main()
{
    float rate;
    float principal_amount;
    float time;
    float simple_interest;
    
    printf("Enter the rate: ");
    scanf("%f", &rate);
    
    printf("Enter the amount: ");
    scanf("%f", &principal_amount);
    
    printf("Enter the time: ");
    scanf("%f", &time);
    
    simple_interest = (rate * principal_amount * time)/100;
    printf("The simple interest is:%f ",simple_interest);
    
    return 0;
}