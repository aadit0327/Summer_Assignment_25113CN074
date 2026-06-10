#include <stdio.h>
int main()
{
    int i, n, a[100];
    float sum=0, avg;
    printf("Enter the number of elements of array : ");
    scanf("%d" , &n);
    printf("Enter elements - \n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d" , &a[i]);
    }
    for(i=0; i<n; i++)
      {
        sum = sum + a[i];
      }
      avg = sum/n;
      printf("Array of %d elements - ", n);
      for(i=0; i<n; i++)
      {
        printf("%d ", a[i]);
      }
      printf("\n");
      printf("Sum of the elements of array is %.2f" , sum);
      printf("Average of the elements of array is %.2f" , avg);
      return 0;
}

