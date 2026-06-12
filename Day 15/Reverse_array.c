#include <stdio.h>
int main()
{
  int i, n, a[100];
  printf("Enter the number of elements of array upto 100 only");
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
       printf("\nReversed Array - ");

    for(i=n-1; i>=0; i--)
      {
        printf(" %d", a[i]);
      }
       printf("\n");
       return 0;
}
