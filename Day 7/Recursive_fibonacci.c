#include <stdio.h>
int fibonacci(int n) 
{
    if (n <= 1) 
      return n; // Base Case
      return fibonacci(n - 1) + fibonacci(n - 2); // Recursive Case
}
  int main() 
{
    int n;
    printf("Enter position : ");
    scanf("%d" , &n);
    printf("Fibonacci at position %d is %d", n, fibonacci(n));
    return 0;
}

