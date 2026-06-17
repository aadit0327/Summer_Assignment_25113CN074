#include <stdio.h>
int main() 
{
    int a[100][100], i, j, r, c, sum = 0;
    printf("Enter the number of rows of matrix = ");
    scanf("%d", &r);
    printf("Enter the number of columns of matrix = ");
    scanf("%d", &c);
    if (r == c) 
    {
        printf("Enter the elements of matrix - \n");
        for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) 
            {
                printf("Enter a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nMatrix - \n");
        for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) 
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) 
            {
                if (i == j || i + j == r - 1) 
                {
                    sum = sum + a[i][j]
                }
            }
        }
        printf("\nSum of the diagonal elements is %d\n", sum);
    } 
    else 
    {
        printf("Diagonals only exist in square matrix!\n");
    }

    return 0;
}
