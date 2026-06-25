#include <stdio.h>
int main() 
{
    int choice, withdraw, pin, actual=0;
    float balance = 50000.0, amount;
    printf("Enter PIN number : ");
    scanf("%d", &pin);
    if(pin == 1234)
    {
      printf("\n1. Check Balance\n2. Withdraw\n3. Fast Cash\n4. Mini Statement\n\nEnter choice number : ");
      scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            printf("\nBalance: %.2f\n", balance);
            break;

        case 2:
            printf("\nEnter amount (Multiple of 500): ");
            scanf("%f", &amount);
            if(amount <= balance) 
            {
                balance = balance - amount; 
                printf("\nWithdrawal of %.2f is successful! New balance: %.2f\n", amount, balance);
            } 
            else 
            {
                printf("\nInsufficient funds.\n");
            }
            break;

        case 3: 
            printf("\n1. 1000\n2. 2000\n3. 5000\n");
            printf("Select amount to withdraw: ");
            scanf("%d", &withdraw);
            
            if (withdraw == 1) actual = 1000;
            else if (withdraw == 2) actual = 2000;
            else if (withdraw == 3) actual = 5000;
            else 
            {
                printf("\nInvalid choice.\n");
                break; 
            }
            if (actual <= balance) 
            {
                balance = balance - actual;
                printf("\nWithdrawal of %d successful!\nNew balance: %.2f\n", actual, balance);
            } 
            else 
            {
                printf("Insufficient funds!\n");
            }
            break;

        case 4:
           printf("\nMini Statement Generated.\nThanks for visiting!");
           break;

        default:
            printf("Invalid choice.\n");
    }
    }
    else
    {
      printf("\nError! Entered PIN is wrong.");
    }

    return 0;
}

