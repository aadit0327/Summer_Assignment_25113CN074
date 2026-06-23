#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, n, count;
    printf("Enter any string: ");
    scanf("%s", str); 
    n = strlen(str);
    for (i = 0; i < n; i++) 
    {
        count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) 
        {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
    return 0;
}

