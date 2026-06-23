#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100]; 
    int i, j, n, index = 0;
    printf("Enter any string: ");
    scanf("%s", str); 

    n = strlen(str);
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < i; j++) 
        {
            if (str[i] == str[j]) 
            break;
        }
        if (j == i) 
        {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
    printf("\nResultant string: %s", str);
    return 0;
}
