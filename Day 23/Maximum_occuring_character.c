#include <stdio.h>
int main() 
{
    char str[100], max_char = '\0';
    int i, j, max_count = 0;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' || str[i] == '\n') 
        {
            continue; 
        }
        int current_count = 0;
        for (j = 0; str[j] != '\0'; j++) 
        {
            if (str[i] == str[j]) 
            {
                current_count++;
            }
        }
        if (current_count > max_count) 
        {
            max_count = current_count;
            max_char = str[i];
        }
    }
    printf("Max occurring character: %c\n", max_char);
    return 0;
}

