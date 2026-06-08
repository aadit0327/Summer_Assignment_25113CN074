#include <stdio.h>
void factorial(int num)
{
  int i, result=1;
  for( i=1; i<=num; i++)
    {
      result = result * i;
    }
  printf("Factorial of %d is %d", num, result);
}

int main ()
{
  int num; 
  printf("Enter any number : ");
  scanf("%d" , &num);
  factorial(num);
  return 0;
}

  
