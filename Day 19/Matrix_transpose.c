#include <stdio.h>

int main()
{
  int a[100][100], b[100][100], i, j, r, c;
  printf("Enter the number of rows of matrix: ");
  scanf("%d", &r);
  printf("Enter the number of columns of matrix: ");
  scanf("%d", &c);
  
  printf("\nEnter the elements of matrix - \n");
  for(i=0; i<r; i++)
  {
     for(j=0; j<c; j++)
     {
        printf("Enter a[%d][%d] = ", i, j);
        scanf("%d", &a[i][j]);
     }
  }
   printf("\nMatrix - \n");
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
     for(j=0; j<c; j++)
     {
        b[j][i] = a[i][j];
     }
  }
   printf("\nTranspose of the matrix - \n");
  for(i=0; i<c; i++)
  {
     for(j=0; j<r; j++)
     {
        printf("%d\t", b[i][j]);
     }   
     printf("\n");
  }    
  
   return 0;
}
