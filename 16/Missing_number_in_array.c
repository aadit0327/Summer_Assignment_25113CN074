#include <stdio.h>
int main()
{
  int i, n, a[100], sum=0, total=0, missing;
  printf("Enter the number of elements upto 100 only\n");
  printf("Enter number of elements : ");
  scanf("%d", &n);
  printf("\nEnter the elements of array - \n");
    for(i=0; i<n; i++)
      {
         printf("Enter a[%d] = ", i);
         scanf("%d", &a[i]);
      }
      printf("\nEntered array - ");
       for(i=0; i<n; i++)
         {
            printf(" %d", a[i]);
         }
          printf("\n");
          total = (n + 1) * (n + 2) / 2;         
          for(i=0; i<n; i++)
          {
             sum = sum + a[i];
          }          
          missing = total - sum;
          printf("The missing number in the given array is %d", missing);        
          return 0;
}
