#include <stdio.h>
int main () {
  int n, i, Sum;
printf("Enter any number : ");
scanf("%d", &n);
Sum = n * (n + 1)/2;
printf("Sum of first %d natural numbers is %d", n,Sum);
return 0;
}
