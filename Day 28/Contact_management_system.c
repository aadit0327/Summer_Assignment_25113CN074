#include <stdio.h>
#include <stdlib>
struct Contact 
{
    char name[30], phone[10];
};

int main() 
{
    int totalLimit, count = 0, choice;
    printf("How many contacts do you want to add in total? ");
    scanf("%d", &totalLimit);
    struct Contact *list = malloc(totalLimit * sizeof(struct Contact));

    if (list == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    while (1) 
    {
        printf("\n1. Add Contact\n2. List Contacts\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            if (count >= totalLimit) 
            {
                printf("Error: Contact list is already full!\n");
            } 
            else 
            {
                
                while (count < totalLimit) 
                {
                    printf("\nEnter Name for contact %d: ", count + 1);
                    scanf("%s", list[count].name);
                    
                    printf("Enter Phone for contact %d: ", count + 1);
                    scanf("%s", list[count].phone);
                    
                    count++;
                }
                printf("\nAll %d contacts have been registered successfully!\n", totalLimit);
            }
        }
        else if (choice == 2) 
        {
            if (count == 0) 
            {
                printf("No contacts found.\n");
            } 
            else 
            {
                printf("\n--- Contact List ---\n");
                for (int i = 0; i < count; i++) 
                {
                    printf("%d. %s - %s\n", i + 1, list[i].name, list[i].phone);
                }
            }
        }
        else if (choice == 3) 
        {
            break;
        }
        else 
        {
            printf("Invalid choice. Try again.\n");
        }
    }
    free(list);
    return 0;
}

