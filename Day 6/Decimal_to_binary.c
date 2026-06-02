#include <stdio.h>
int main() 
{
    int n, i = 0, j, r[32]; 
    printf("Enter any decimal number: ");
    scanf("%d", &n);

    if (n == 0) 
    {
        printf("Binary number = 0\n");
        return 0;
    }

    while (n > 0) 
    {
        r[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary number = ");
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", r[j]);
    }
    printf("\n");
    return 0;
}

