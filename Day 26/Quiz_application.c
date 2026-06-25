#include <stdio.h>
int main() 
{
    int answer, score = 0;
    printf("Q1: What is the capital of India?\n1. Lucknow\n2. New Delhi\n3. Islamabad\n4. None of these\nAnswer: ");
    scanf("%d", &answer);
    if (answer == 2) 
    {
        printf("Correct!\n");
        score++;
    } 
    else 
    {
        printf("Wrong. It's Paris.\n");
    }
    printf("Your final score: %d/1\n", score);
    return 0;
}

