#include <stdio.h>
void sum(int a, int b)
{
  int result = a + b;
  printf("The Sum of two number is %d" , result);
}

int main ()
{
  int a, b;
  printf("Enter the value of a and b :\n");
  scanf("%d %d" , &a , &b);
  sum (a , b);
  return 0;
}


