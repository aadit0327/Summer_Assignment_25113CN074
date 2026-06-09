#include <stdio.h>
void palindrome(int num)
{
    int rev = 0, r, org;
    org = num;
    while (num != 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    if (org == rev)
    {
        printf("%d is a Palindrome", org);
    }
    else
    {
        printf("%d is not a Palindrome", org);
    }
}
int main()
{
    int num;
    printf("Enter any positive number : ");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}

