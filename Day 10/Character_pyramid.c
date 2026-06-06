#include <stdio.h>

int main()
{
    int rows = 5, i, j, k;
    char ch;
    
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
         ch = 'A';
        for(k = 1; k <= i; k++)
        {
            printf("%c", ch);
            ch++;
        }
        ch = ch - 2;
        for(k = i - 1; k >= 1; k--)
        {
            printf("%c", ch);
            ch--;
        } 
        printf("\n");
    }
    return 0;
}
