#include <stdio.h>
int main()
{
    int rows = 5, i, j, k;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for(k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
