#include <stdio.h>
i
nt main() 
{
    int n, temp, decimal = 0, base = 1, r;
    printf("Enter any binary number: ");
    scanf("%d", &n);
    temp = n; 

    while (n > 0) 
    {
        r = n % 10;          
        decimal = decimal + r * base;
        n = n / 10;           
        base = base * 2;       
    }
    printf("Decimal number = %d\n", decimal);
    return 0;
}
