#include <stdio.h>
#include <string.h>
void sortString(char str[], int len) 
{
    char temp;
    for (int i = 0; i < len - 1; i++) 
    {
        for (int j = i + 1; j < len; j++) 
        {
            if (str[i] > str[j]) 
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char s1[], char s2[]) 
{
    int len1 = strlen(s1), len2 = strlen(s2);
    if (len1 != len2) 
    {
        return 0;
    }
    sortString(s1, len1);
    sortString(s2, len2);
    if (strcmp(s1, s2) == 0) 
    {
        return 1;
    }
    return 0;
}

int main() 
{
    char s1[100];
    char s2[100];
    printf("Enter first string: ");
    scanf("%s", s1); 
    printf("Enter second string: ");
    scanf("%s", s2);
    if (areAnagrams(s1, s2)) 
    {
        printf("Strings are anagrams\n");
    } else 
    {
        printf("Strings are not anagrams\n");
    }
    return 0;
}

