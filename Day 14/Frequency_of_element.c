#include <stdio.h>
int main() 
{
    int a[100], n, i, target, count = 0;
    printf("Enter the number of elements upto 100\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
      {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
      }
      printf("\nArray: ");
      for(i = 0; i < n; i++) 
      {
        printf("%d ", a[i]);
      }
      printf("\n");
      printf("Enter the element to find its frequency: ");
      scanf("%d", &target);
      printf("%d elements is found on these indices : ", target);
      for (i = 0; i < n; i++) 
      {
        if (a[i] == target) 
        {
            printf("%d ", i); 
            count++;          
        }
    }
    if (count > 0)
    {
        printf("\nFrequency of %d: %d\n", target, count);
    }
    else 
    {
        printf("\nElement not found.\n");
    }
    return 0;
}
