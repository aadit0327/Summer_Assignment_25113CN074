#include <stdio.h>
int main() 
{
    int a[100], i, n, first_largest=0, second_largest=0;
    printf("Enter number of elements upto 100\n");
    printf("Enter number of elements : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
      {
        printf("Enter a[%d] = ", i);
        scanf("%d" ,&a[i]);
      }
      printf("\nEntered Array - ");
      for(i=0; i<n; i++)
        {
          printf(" %d", a[i]);
        }
         printf("\n");
          
    for (i=0; i<n; i++) 
    {
        if (a[i] > first_largest)
        {
            second_largest = first_largest;
            first_largest = a[i];
        } 
        else if (a[i] > second_largest && a[i] != first_largest) 
        {
            second_largest = a[i];
        }
    }
    printf("\nThe second largest element is: %d\n", second_largest);
    return 0;
}

