#include <stdio.h>
int main() 
{
    int a[100], n, i, j, found = 0;
    printf("Enter the number of elements upto 100 only");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements of array - \n");
    for (i = 0; i < n; i++) 
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nDuplicate elements: ");
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++)
          {
            if (a[i] == a[j]) 
            {
                printf("%d ", a[i]);
                found = 1;
                break; 
            }
          }
    }
    if (!found) 
    {
        printf("None");
    }
    return 0;
}

