#include <stdio.h>
#include <math.h>
void perfect_number(int n)
{
    int i, sum=0;
    for(i=1; i<=n/2; i++)
    {
        if(n % i == 0)
        {
            sum = sum+i;
        }
    }
    if(n == sum && n != 0)
    {
        printf("%d is a perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
}
int main()
{
    int n;
    printf("Enter any positive number : ");
    scanf("%d", &n);
    perfect_number(n);
    return 0;
}
