#include <stdio.h>
int main() 
{
    int n1, n2, i, j, k;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int a1[n1]; 
    printf("Enter %d sorted elements: \n", n1);
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &a1[i]);
    }
    printf("\nEnter size of second sorted array: ");
    scanf("%d", &n2);
    int a2[n2];
    printf("Enter %d sorted elements: \n", n2);
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &a2[i]);
    }
    int merged[n1 + n2];
    i = j = k = 0;
    while (i < n1 && j < n2) 
    {
        if (a1[i] < a2[j]) 
        {
            merged[k++] = a1[i++];
        } 
        else 
        {
            merged[k++] = a2[j++];
        }
    }
    while (i < n1) 
    {
        merged[k++] = a1[i++];
    }
    while (j < n2) 
    {
        merged[k++] = a2[j++];
    }
    printf("\nMerged array: ");
    for (i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

