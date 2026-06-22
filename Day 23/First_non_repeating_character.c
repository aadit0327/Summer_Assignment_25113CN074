#include <stdio.h>
char firstNonRepeating(char* str) 
{  
    int i, j, repeated;
    for (i = 0; str[i] != '\0'; i++) 
    {
        repeated = 0;
        for (j = 0; str[j] != '\0'; j++)
         {
            if (i != j && str[i] == str[j]) 
            {
                repeated = 1;
                break;
            }
         }
        if (repeated == 0)
        return str[i];
    }
    return '\0';
}

int main()
{
    char str[100]; 
    printf("Enter any word: ");
    scanf("%s", str); 
    char result = firstNonRepeating(str);
    if (result)
    {
        printf("First non-repeating: %c\n", result);
    }
    else
    {
        printf("None found!\n");  
    }
        return 0;
}
