#include <stdio.h>
int main() 
{
    int n, count = 0, temp;
    printf("Enter any number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) 
    {
        if (temp % 2 == 1) 
        {
            count++;
        }
        temp = temp / 2; 
    }
    printf("Number of set bits: %d", count);
    return 0;
}

