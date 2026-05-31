#include <stdio.h>
int main() 
{
    int n, a = 0, b = 1, c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n == 1) 
    {
      printf("Term 1 is: %d", a);
    }
    else 
    {
        for (int i = 3; i <= n; i++) 
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Term %d is %d", n, b);
    }
    return 0;
}

