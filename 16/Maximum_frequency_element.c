#include <stdio.h>
int main()
{
  int i, j, n, a[100], count, max=0, element;
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
          
          for(i=0; i<n; i++)
            {
                count=0;
               for(j=0; j<n; j++)
                 {
                    if(a[i] == a[j])
                     {
                        count++;
                     }  
                 }  
                 if(count > max)
                 {
                     max = count;
                     element = a[i];
                 }
            }
            printf("%d occurred %d times in the array", element, max);          
          return 0;
}
