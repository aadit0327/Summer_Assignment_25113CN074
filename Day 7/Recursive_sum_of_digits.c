# include <stdio.h>
int sum(int n)
{
  if(n==0)
    return 0; // Base Case
    return (n%10) + sum(n/10);
}
int main() 
{
    int num;
  printf("Enter any positive integer : ");
  scanf("%d", &num);
  printf("Sum of digits of %d is %d", num, sum(num));
    return 0;
}
