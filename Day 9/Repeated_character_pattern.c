# include <stdio.h>
int main ()
{
  char rows=5, i, j, ch;
    for(i=1; i<=rows; i++)
      {
        ch = 'A'+i-1;
        for(j=1; j<=i; j++)
          {
            printf("%c", ch);
          }
            printf("\n);
       }
              return 0;
}
            
