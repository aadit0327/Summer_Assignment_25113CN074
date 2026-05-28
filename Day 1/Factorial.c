# include <stdio.h>
int main () {
  int n, i, fact = 1;
printf ("Enter a number:");
scanf ("%d", &n);
i=1;
while (i<=n) {
  fact = fact * i;
  i++;
  }
    printf ("Factorial of %d = %d", n, fact);
    return 0;
}
