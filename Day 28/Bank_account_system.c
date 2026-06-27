#include <stdio.h>
int main() 
{
    int choice;
    float balance = 0.0, amount;
    printf("Bank Account System \n");

    while (1) 
    {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("\nEnter your choice number : ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Successfully deposited $%.2f\n", amount);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) 
                {
                    printf("Insufficient balance!\n");
                } 
                else 
                {
                    balance -= amount;
                    printf("Successfully withdrawn $%.2f\n", amount);
                }
                break;

            case 3:
                printf("Your current balance is: $%.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using our bank!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

