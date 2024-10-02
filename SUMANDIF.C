//combining sum and the if else
#include <stdio.h>

int main() 
{
  int a, b, sum;
  
  printf("Enter the first number: ");
  scanf("%d", &a);
  
  printf("Enter the second number: ");
  scanf("%d", &b);
  
  sum = a + b;
  printf("The sum of a and b is: %d", sum);
  
  if(a < b)
  {
    printf("A is less than b");
  }
  else
  {
    printf("A is equal to or "
           "greater than b");
  }  
  return 0;
}