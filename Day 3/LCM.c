#include <stdio.h>
int main() 
{
    int n1, n2, a, b, gcd, temp, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    a = n1;
    b = n2;
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (n1 / gcd) * n2;

    printf("LCM of %d and %d is %d", n1, n2, lcm);
    return 0;
}

