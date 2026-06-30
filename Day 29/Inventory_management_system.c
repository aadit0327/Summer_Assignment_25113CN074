#include <stdio.h>
int main() 
{
    int ids[100];
    char names[100][30]; 
    int quantities[100];
    float prices[100];
    
    int item_count = 0;   
    int target_count = 0;
    int choice;
    char continue_choice; 

    while (1) 
    {
        printf("\n INVENTORY MANAGEMENT SYSTEM\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 3) 
        {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if (choice == 1) 
        {
            printf("\nEnter number of products you want to add : ");
            scanf("%d", &target_count);

            for (int i = 0; i < target_count; i++) 
            {
                if (item_count >= 100) 
                {
                    printf("\nSystem storage full! Cannot add more items.\n");
                    break;
                }

                printf("\nEntering details for Product %d:\n", i + 1);
                
                printf("Enter ID: ");
                scanf("%d", &ids[item_count]);
                
                printf("Enter Name: ");
                scanf("%s", names[item_count]);
                
                printf("Enter Quantity: ");
                scanf("%d", &quantities[item_count]);
                
                printf("Enter Price: ");
                scanf("%f", &prices[item_count]);

                item_count = item_count + 1; 
            }
            printf("\nAll %d items added successfully!\n", target_count);
        }
        if (choice == 2) 
        {
            if (item_count == 0) 
            {
                printf("\nNo items in inventory yet.\n");
            } 
            else 
            {
                printf("\nID\tName\tQuantity\tPrice\n");
                printf("----------------------------------------\n");
                
                for (int i = 0; i < item_count; i++) 
                {
                    printf("%d\t%s\t%d\t\t%.2f\n", ids[i], names[i], quantities[i], prices[i]);
                }
            }
            printf("\nDo you want to continue? (y/n): ");
            scanf(" %c", &continue_choice); 

            if (continue_choice == 'n' || continue_choice == 'N') 
            {
                printf("Exiting program. Goodbye!\n");
                break;
            }
        }
        if (choice != 1 && choice != 2 && choice != 3) 
        {
            printf("\nInvalid choice! Please choose 1, 2, or 3.\n");
            printf("Do you want to try again? (y/n): ");
            scanf(" %c", &continue_choice);
            if (continue_choice == 'n' || continue_choice == 'N') 
            {
                printf("Exiting program. Goodbye!\n");
                break;
            }
        }
    }
    return 0;
}

