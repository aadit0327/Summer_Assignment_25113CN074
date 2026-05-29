#include <stdio.h>
int main() 
{
    int n, product=1, digit;
    printf("Enter any positive integer : ");
    scanf("%d", &n);
    while (n > 0) 
    {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }
    printf("Product of the digits of given number is %d" , product);
    return 0;
}
