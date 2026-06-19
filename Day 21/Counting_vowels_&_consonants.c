#include <stdio.h>
int main()
{
    char str[100];
    int i, v = 0, c = 0;
    printf("Enter any string: ");
    scanf("%s", str);
    for (i = 0; str[i]; i++)
    {
        char ch= str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("\nTotal number of vowels in the (%s) is %d", str, v);
    printf("\nTotal number of consonants in the (%s) is %d\n", str, c);
    return 0;
}

