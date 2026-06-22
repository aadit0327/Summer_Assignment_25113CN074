#include <stdio.h>
char firstRepeating(char* str) 
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; j < i; j++) 
        {
            if (str[i] == str[j]) 
            {
                return str[i];
            }
        }
    }
    return '\0'; 
}

int main()
{
    char str[100]; 
    printf("Enter any string: ");
    scanf("%s", str); 
    char result = firstRepeating(str);
    if (result != '\0')
    {
        printf("First repeating: %c\n", result);
    }
    else
    {
        printf("None found!\n");
    }
        return 0;
}
