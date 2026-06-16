#include <stdio.h>
void selection(int a[], int n) 
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++) 
    {
        min = i;
        for (j = i + 1; j < n; j++) 
        {
            if (a[j] < a[min]) 
            {
                min = j;
            }
        }
        if (min != i) 
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
void print(int a[], int n) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int main() 
{
    int a[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
{
    printf("Enter a[%d]:", i);
    scanf("%d", &a[i]);
}
    printf("\nBefore Sorting Array is:\n");
    print(a, n);
    selection(a, n);
    printf("After Sorting Array is:\n");
    print(a, n);
    return 0;
}
