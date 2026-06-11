#include <stdio.h>
int main()
{
    int a[100], n, i, target, found = -1;
    printf("Enter the number of elements upto 100\n");
    printf("Enter the number of elements : ");
    scanf("%d" , &n);
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d" , &a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
        if(i < n - 1) 
        {
            printf(" "); 
        }
    }
    printf("\n\n");
    printf("Enter the element to be searched = ");
    scanf("%d" ,&target);

    for (i=0; i<n; i++)
    {
        if (a[i] == target)
        {
            found = i;
            break;
        }
    }
    if (found != -1)
    {
        printf("Element found at index: %d\n", found);
    }
    else
    {
        printf("Element not found.\n");
    }
    return 0;
}


