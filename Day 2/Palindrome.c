#include <stdio.h>
int main ()
{
  int n, rem, org, rev=0;
printf("Enter a number : ");
scanf("%d" , &n);
org = n;
while ( n > 0 )
{
  rem = n % 10;
  rev = rev*10 + rem;
  n = n/10;
}
if ( org == rev )
  printf("Entered number is PALINDROME");
    else 
  printf(" Entered number is NOT PALINDROME");
return 0;
}
  
  
