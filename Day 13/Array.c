#include <stdio.h>
int main()
{
    int a[100], i, n;
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
    return 0;
}
