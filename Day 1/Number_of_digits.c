#include <stdio.h>
int main () {
  int n, temp, count=0;
printf("Enter any number : ");
scanf("%d", &n);
  temp=n;
  if(n==0) {
    count = 1;
  }
  else {
    while (n != 0) {
      n = n/10;
      count++;
    }
  }
printf("Total number of digits in %d is %d", temp, count);
return 0; 
}
