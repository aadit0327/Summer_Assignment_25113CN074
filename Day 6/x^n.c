#include <stdio.h>
int main() {
    int x, n, i, positivepower;
    float result = 1.00

    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    positivepower = n;
    if (n < 0) 
    {
        positivepower = -n;
    }
    for (i = 0; i < positivepower; i++) 
    {
        result = result * x;
    }
    if (n < 0) 
    {
        result = 1.00 / result;
    }

    printf("%d^%d = %.2f\n", x, n, result);
    return 0;
}

