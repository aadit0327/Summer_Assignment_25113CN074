#include <stdio.h>
int main() 
{
    int n, i, temp, j, a[100];
    printf("Enter the number of Elements upto 100\n");
    printf("Enter number of Elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array : ");
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}
