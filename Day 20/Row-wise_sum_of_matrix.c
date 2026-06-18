#include <stdio.h>
int main()
{
  int a[100][100], i, j, r, c, sum;
  printf("Enter the number of rows of matrix : ");
  scanf("%d", &r);
  printf("Enter the number of columns of matrix : ");
  scanf("%d", &c);
  printf("\nEnter the elements of matrix  - \n");
  for(i=0; i<r; i++)
    {
       for(j=0; j<c; j++)
         {
            printf("Enter a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
         }
    }
    printf("\nMatrix  - \n");
    for(i=0; i<r; i++)
      {
         for(j=0; j<c; j++)
           {
              printf("%d\t", a[i][j]);
           }   
           printf("\n");
      }
      for(i=0; i<r; i++) 
        {
           sum = 0;
           for(j = 0; j < c; j++) 
             {
                sum = sum + a[i][j];
             }
             printf("\n\nSum of row %d = %d", i + 1, sum);
        }
        return 0;
}

