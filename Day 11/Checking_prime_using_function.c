#include <stdio.h>
void check_prime(int num) 
{
    int i, count = 0;
    if (num <= 1)
    {
        count = 1;
    }
    else 
    {
        for (i = 1; i <= num; i++)
          {
            if (num % i == 0) 
            {
                count++;
            }
        }
    }

    if (count == 2)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
}

int main() 
{
    int num;
    printf("Enter any positive number: ");
    scanf("%d", &num);
    {
        check_prime(num);
    }
    return 0;
}

