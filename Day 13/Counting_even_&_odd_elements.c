#include <stdio.h>
int main()
{
    int a[100], i, n, even=0, odd=0;
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

  for(i=0; i<n; i++)
    {
      if(a[i]%2==0)
      {
        even++
      }
      else
      {
        odd++
      }
    }
    printf("Total %d number of even elements are present in the array", even);
    printf("Total %d number of odd elements are present in the array", odd);      
    return 0;
}
