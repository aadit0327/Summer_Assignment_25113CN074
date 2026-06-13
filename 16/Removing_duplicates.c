#include <stdio.h>
int main() 
{
    int i, j, k, n, a[100];
    printf("Enter the number of elements upto 100 only\n");
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("\nEnter the elements of array - \n");
    for (i = 0; i < n; i++) 
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEntered array - ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++)
          {
            if (a[i] == a[j]) 
            {
                for (k = j; k < n - 1; k++)
                  {
                    a[k] = a[k + 1];
                  }
                  n--;
                  j--;
            }
        }
    }
    printf("\nArray after removing duplicates - ");
    for (i = 0; i < n; i++)
      {
        printf("%d ", a[i]);
      }
      printf("\n");
      return 0;
}
