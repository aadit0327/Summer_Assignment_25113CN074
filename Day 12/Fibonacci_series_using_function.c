#include <stdio.h>
void fibonacci(int n)
{
  int a = 0, b = 1, i, sum = 0;
  printf("The fibonacci series upto %d terms is ", n);
  for(i=1; i<=n; i++)
    {
      printf("%d " , a);
      sum = a + b;
      a = b;
      b = sum;
    }
    printf("\n");
}
int main()
{
  int n;
  printf("Enter number of terms : ");
  scanf("%d" , &n);
  fibonacci(n);
  return 0;
}
      
