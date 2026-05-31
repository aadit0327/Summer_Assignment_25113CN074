#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, i, r, count = 0, sum, temp1, temp2, digits;
    printf("Enter lower limit of the range: ");
    scanf("%d", &a);
    printf("Enter upper limit of the range: ");
    scanf("%d", &b);

    printf("Armstrong numbers between %d and %d are:\n", a, b);

    for (i = a; i <= b; i++) 
    {
        if (i > 0) 
        {
            digits = 0; 
            sum = 0;    
            temp1 = i;
            temp2 = i;
            while (temp1 != 0) 
            {
                digits++;
                temp1 /= 10;
            }
          
            while (temp2 != 0) {
                r = temp2 % 10;
                sum += (int)round(pow(r, digits));
                temp2 /= 10;
            }

            if (sum == i) 
            {
                printf("%d ", i);
                count++;
            }
        }
    }

    if (count > 0) 
    {
        printf("\nFound %d Armstrong number(s).\n", count);
    }
    else 
    {
        printf("\nThere are no Armstrong numbers in this range.\n");
    }

    return 0;
}
