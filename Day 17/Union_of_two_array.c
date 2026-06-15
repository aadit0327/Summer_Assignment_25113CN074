#include <stdio.h>
int main()
{
    int a[100], b[100], n1, n2, i, j, duplicate=0;
    printf("Enter the number of elements of 1st array (upto 100 only) : ");
    scanf("%d", &n1);
    printf("Enter the number of elements of 2nd array (upto 100 only) : ");
    scanf("%d", &n2);
    
    printf("\nEnter the elements of 1st array - \n");
    for(i=0; i<n1; i++)
      {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
      }
    printf("\nEnter the elements of 2nd array - \n");
    for(i=0; i<n2; i++)
      {
        printf("Enter b[%d] = ", i);
        scanf("%d", &b[i]);
      }
      printf("\nEntered 1st Array - ");
    for(i=0; i<n1; i++)
      {
        printf(" %d", a[i]);
      }
      printf("\n");
      printf("Entered 2nd Array - ");
    for(i=0; i<n2; i++)
      {
        printf(" %d", b[i]);
      }
      printf("\n");

    printf("\nUnion of the two arrays - ");
    for(i=0; i<n1; i++)
    {
        printf(" %d", a[i]);
    }
    for(i=0; i<n2; i++)
    {
        for(j=0; j<n1; j++)
        {
            if(b[i] == a[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate==0)
        {
            printf(" %d", b[i]);
        }
    }
    printf("\n");
    return 0;
}
