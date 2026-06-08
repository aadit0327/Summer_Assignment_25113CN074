#include <stdio.h>
void max(int a, int b)
{
  if(a > b)
  {
     printf("The maximum number is %d" , a);
  }
   else
   {
     printf("The maximum number is %d" , b);
   }
}

int main ()
{
  int a, b;
  printf("Enter the value of a and b :\n");
  scanf("%d %d" , &a , &b);
  max(a , b);
  return 0;
}


