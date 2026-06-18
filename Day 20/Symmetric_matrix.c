#include <stdio.h>
int main()
{
  int a[100][100], i, j, r, c, symm=1;
  printf("Enter the number of rows of matrix : ");
  scanf("%d", &r);
  printf("Enter the number of columns of matrix : ");
  scanf("%d", &c);
  if( r==c )
  {
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
      
      for(j = 0; j < r; j++)
        {
          for(i = 0; i < c; i++) 
            {
               if( a[i][j] != a[j][i] )
               {
                  symm = 0;
                  break;
               }   
            }
            if( symm == 0 )
             break;
        }
        if( symm == 1 )
        {
           printf("\nThe matrix is symmetric matrix.");
        }
        else
        {
           printf("\nThe matrix is not symmetric matrix.");
        }   
  }
        else
        {  
           printf("\nError! Only square matrix can be a symmetric matrix.");
        }   
        return 0;
}
