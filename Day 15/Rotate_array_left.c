#include <stdio.h>
int main()
{
  int i, n, a[100], temp;
  printf("Enter the number of elements of array upto 100 only\n");
  printf("Enter the number of elements of array : ");
  scanf("%d", &n);
  printf("\nEnter the elements of array - \n");
  for(i=0; i<n; i++)
    {
       printf("Enter a[%d] = ", i);
       scanf("%d", &a[i]);
    }
     printf("\nEntered Array - ");
    for(i=0; i<n; i++)
      {
         printf(" %d", a[i]);
      }
      printf("\n");
      
      temp = a[0]; 
      for(i = 0; i < n - 1; i++) 
      {
         a[i] = a[i + 1];
      }
       a[n - 1] = temp; 
       printf("\nArray after left rotation - ");
       for(i = 0; i < n; i++) 
       {
          printf(" %d ", a[i]);
       }
        printf("\n");
       return 0;
}

