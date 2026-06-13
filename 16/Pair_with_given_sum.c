#include <stdio.h>
int main()
{
    int i, j, n, a[100], sum;
    printf("Enter the number of elements upto 100 only\n");
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("\nEnter elements of the array - \n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEntered Array - ");
    for(i=0; i<n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    printf("\nEnter the required sum pair = ");
    scanf("%d", &sum);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Found pair - (%d, %d)\n", a[i], a[j]);
            }
        }
    }
    return 0;
}
