#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int len, i, j, count;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    printf("Character frequencies:\n");
    for (i = 0; i < len; i++) 
    {
        if (str[i] == '\0')
        {
            continue;
        }
         count = 1; 
        for (j = i + 1; j < len; j++) 
        {
            if (str[i] == str[j]) 
            {
                count++;
                str[j] = '\0'; 
            }
        }
        printf("'%c' : %d\n", str[i], count);
    }
    return 0;
}
