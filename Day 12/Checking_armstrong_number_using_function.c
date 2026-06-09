#include <stdio.h>
#include <math.h>
void armstrong(int num)
{
  int r, org, temp, count=0, sum=0;
  org = num;
  temp = num;
  
  while(temp > 0)
    {
      temp = temp / 10;
      count++;
    }
    while(num > 0)
   {
        r = num % 10;
        sum = sum + pow(r, count);
        num = num / 10;
   }

   if(org == sum)
   {
        printf("%d is an Armstrong Number" , org);
    }
    else
    {
        printf("%d is not an Armstrong Number", org);
    }
}

int main()
{
  int num;
  printf("Enter any number : ");
  scanf("%d" , &num);
  armstrong(num);
  return 0;
}
