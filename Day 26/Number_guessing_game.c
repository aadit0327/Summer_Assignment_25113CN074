#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int secret, guess, attempts = 0;
    srand(time(0)); 
    secret = rand() % 100 + 1; 
    printf("Guess any number between 1 and 100:\n");
    do 
    {
        scanf("%d", &guess);
        attempts++;
        if (guess > secret) 
        {
          printf("Lower!\n");
        }
        else if (guess < secret) 
        {
          printf("Higher!\n");
        }
        else 
        {
          printf("Correct! You took %d attempts.\n", attempts);
        }
    }
    while (guess != secret);
    return 0;
}
