#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    int i = 0, words = 0, in_word=0;

    printf("Enter any sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1; 
    }
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' || str[i] == '\t') 
        {
            in_word = 0; 
        } 
        else if (in_word == 0) 
        {
            in_word = 1; 
            words++;     
        }
    }
    printf("Total number of words in the given sentence is/are - %d\n", words);
    return 0;
}
