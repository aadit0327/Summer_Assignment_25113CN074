#include <stdio.h>
int main()
{
    int a[100], b[100], n1, n2, i;
    printf("Enter the number of elements of 1st array (upto 100 only) : ");
    scanf("%d", &n1);
    printf("Enter the number of elements of 2nd array (upto 100 only) : ");
    scanf("%d", &n2);
    int merged[n1 + n2];
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

    for(i = 0; i < n1; i++) 
    {
        merged[i] = a[i];
    }
    for(i = 0; i < n2; i++)
    {
        merged[i + n1] = b[i];
    }

    printf("\nMerged Array - ");
    for(i = 0; i < n1 + n2; i++)
      {
        printf("%d ", merged[i]);
      }
    return 0;
}


