#include <stdio.h>
int main() 
{
    int i, n, a[100], key, beg, end, mid, count = 0; 
    printf("Enter the number of elements of array (upto 100 only): ");
    scanf("%d", &n);
    printf("\nEnter the elements of array (MUST BE SORTED) - \n");
    for(i = 0; i < n; i++)
     {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEntered Array - ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("\nEnter the searching element = ");
    scanf("%d", &key);
    
    beg = 0;
    end = n - 1;
    
    while (beg <= end)
     {
        mid = (beg + end) / 2;
        
        if (key == a[mid])
         {
            count = 1;
            break; 
        } 
        else if (key > a[mid]) 
        {
            beg = mid + 1;
        } 
        else 
        {
            end = mid - 1;
        }
    }
    if (count == 1) 
    {
        printf("\nElement found at index = %d \n", mid);
    } 
    else 
    {
        printf("\nElement not found!\n");
    }
    return 0;
}

