#include <stdio.h>
int main() 
{
    int choice;
    float a, b;
    char repeat;
    do 
    {
        printf("\nCalculator\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Select choice (1-5): ");
        scanf("%d", &choice);
        if (choice == 5) 
        {
            printf("\nExiting calculator. Goodbye!\n");
            break;
        }
        if (choice >= 1 && choice <= 4) 
        {
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);

            switch(choice) 
            {
                case 1: printf("\nResult: %.2f\n", a + b); break;
                case 2: printf("\nResult: %.2f\n", a - b); break;
                case 3: printf("\nResult: %.2f\n", a * b); break;
                case 4: 
                    if (b != 0) 
                    {
                        printf("\nResult: %.2f\n", a / b);
                    } 
                    else 
                    {
                        printf("\nError! Division by zero is not allowed.\n");
                    }
                    break;
            }
        } 
        else 
        {
            printf("\nInvalid choice! Please select a number between 1 and 5.\n");
        }
        printf("\nDo another calculation? (y/n): ");
        scanf(" %c", &repeat); 
    }
     while (repeat == 'y' || repeat == 'Y');
     return 0;
}
