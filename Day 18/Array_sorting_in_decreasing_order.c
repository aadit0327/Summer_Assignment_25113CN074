#include <stdio.h>
int main() 
{
    int i, n, a[100], temp; 
    printf("Enter the number of elements of array (upto 100 only): ");
    scanf("%d", &n);
    printf("\nEnter the elements of array (MUST BE SORTED) - \n");
    for(i = 0; i < n; i++)
     {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEntered Array - ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    for (i = 0; i < n - 1; i++)
     {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] < a[j + 1])
             { 
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nArray Sorted in Descending Order: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

