#include <stdio.h>
int main()
{
  int a[100][100], b[100][100], c[100][100], i, j, r1, r2, c1, c2;
  printf("Enter the number of rows of matrix 1 : ");
  scanf("%d", &r1);
  printf("Enter the number of columns of matrix 1 : ");
  scanf("%d", &c1);
  printf("\nEnter the number of rows of matrix 2 : ");
  scanf("%d", &r2);
  printf("Enter the number of columns of matrix 2 : ");
  scanf("%d", &c2);
  if(r1 == r2 && c1 == c2)
   {
      printf("\nEnter the elements of matrix 1 - \n");
      
      for(i=0; i<r1; i++)
        {
         for(j=0; j<c1; j++)
           {
              printf("Enter a[%d][%d] = ", i,j);
              scanf("%d", &a[i][j]);
           }
        }
        printf("\nEnter the elements of matrix 2 - \n");
        for(i=0; i<r2; i++)
          {
           for(j=0; j<c2; j++)
             {
                printf("Enter b[%d][%d] = ", i,j);
                scanf("%d", &b[i][j]);
             }
          }
          printf("\nMatrix 1 - \n");
          for(i=0; i<r1; i++)
            {
             for(j=0; j<c1; j++)
                {
                   printf("%d\t", a[i][j]);
                }   
                printf("\n");
            }    
                printf("\nMatrix 2 - \n");
                for(i=0; i<r2; i++)
                 {
                   for(j=0; j<c2; j++)
                     {
                       printf("%d\t", b[i][j]);
                     }   
                     printf("\n");
                 }    
          printf("\nAddition of matrix 1 and matrix 2 gives - \n");
          for(i=0; i<r1; i++)
            {
             for(j=0; j<c1; j++)
               {
                  c[i][j] = a[i][j] + b[i][j];
               }
            }
            printf("\nResultant Matrix - \n");
            for(i=0; i<r1; i++)
            {
             for(j=0; j<c1; j++)
                {
                   printf("%d\t", c[i][j]);
                }   
                printf("\n");
            }    
   }
  else
  {
    printf("Order of both the matrices must be same for addition!");
  }
  return 0;
}
