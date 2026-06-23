#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], word[25], maxWord[25] = "";
    int i = 0, j = 0, maxLen = 0;

    printf("Enter any sentence: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i <= strlen(str); i++) 
    {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') 
        {
            word[j] = '\0';             
            if (j > maxLen) 
            {
                maxLen = j;
                strcpy(maxWord, word);
            }
            j = 0; 
        } 
        else 
        {
            word[j++] = str[i];
        }
    }
    printf("Longest word: %s\n", maxWord);
    return 0;
}

