//A PROGRAM TO CALCULATE THE COMPOUND INTEREST
//DERICK NGURURI
//BCS-03-0010/2024

#include<stdio.h>
#include<math.h>

int main()
{
   int A;//Final amount
   int P;//principal amount
   int r;//interest rate
   int n;//number of times compounded per year
   int t;//number of years
   int CI;//compound interest
   
   printf("Enter principal amount: ");
   scanf("%d", &P);
   
   printf("Enter interest rate: ");
   scanf("%d", &r);
   
   printf("Enter number of times compounded per year: ");
   scanf("%d", &n);
   
   printf("Enter number of time periods: ");
   scanf("%d", &t);
   
   A = P * pow((1 + (r/n)) ,n * t);
   printf("The final amount is:%d", A);
   
    return 0;
}