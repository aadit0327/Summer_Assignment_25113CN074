#include <stdio.h>
#include <math.h> 
int main ()
{
    int n, r, num, count=0; result=0;
    printf("Enter any positive number : ");
    scanf("%d", &n); 
    num = n;
  
    while ( n > 0 )
    {
        n = n / 10;
        count++;
    }
  
    printf("Number of Digits are %d\n", count);
    n = num;
    
    while ( n > 0 ) 
    {
        r = n % 10; 
        result = result + pow(r, count);
        n = n / 10;
    }
    if ( num == result )
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is NOT an Armstrong Number", num);
        
    return 0;
}
