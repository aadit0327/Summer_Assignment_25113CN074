#include <stdio.h>
int main() 
{
  int n, i, org, r, sum = 0;
  printf("Enter any number: ");
  scanf("%d", &n);
  org = n;

    while (n > 0) 
    {
        r = n % 10;
        int fact = 1;
        
        for (i = 1; i <= r; i++) 
        {
            fact = fact * i;
        }
        
        sum = sum + fact;
        n = n / 10; 
    }

    if (sum == org)
        printf("%d is a Strong Number.\n", org);
    else
        printf("%d is not a Strong Number.\n", org);

    return 0;
}
