#include <stdio.h>
int main()
{
   char str[100];
   int len = 0;
   printf("Enter any string : ");
   scanf("%s", str);
   while(str[len] != '\0')
     {
        len++;
     }
     printf("\nLength of the string (%s) is %d", str, len);   
     return 0;
}  
   
   
