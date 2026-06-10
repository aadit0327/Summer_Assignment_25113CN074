#include <stdio.h>
int main()
{
    int a[100], i, n, large, small;
    printf("Enter the number of elements of array : ");
    scanf("%d" , &n);
    printf("Enter elements - \n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d" , &a[i]);
    }
    printf("Array of %d elements - ", n);
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

  large = a[0];
    small = a[0];
    for(i = 1; i < n; i++) 
    {
        if(a[i] > large) 
        {
            large = a[i];
        }
        if(a[i] < small) 
        {
            small = a[i];
        }
    }
    printf("Largest element is %d\n", large);
    printf("Smallest element is %d\n", small);
    return 0;
}

