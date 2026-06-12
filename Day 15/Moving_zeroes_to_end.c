#include <stdio.h>
int main()
{
  int i, n, a[100], count=0;
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
       for(i=0; i<n; i++)
         {
           if(a[i] != 0)
           {
             a[count] = a[i];
             count++;
           }
         }
         while (count < n)
           {
             a[count] = 0;
             count++;
           }
           printf("\nResultant Array - ");
           for(i=0; i<n; i++)
             {
               printf("%d", a[i]);
             }
             printf("\n");     
             return 0;
}


