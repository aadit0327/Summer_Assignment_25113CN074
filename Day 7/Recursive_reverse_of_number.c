#include <stdio.h>
int reverse(int n, int rev)
{
  if(n==0)
    return rev; // Base Case
    return reverse(n/10, rev*10+(n%10); //Recursive Case
}
int main() 
{
    int num;
    printf("Enter any Number : ");
    scanf("%d" , &num);
    printf("Reverse of %d is %d", num, reverse(num, 0));
    return 0;
}
