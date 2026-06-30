#include <stdio.h>
#include <string.h>

int main() {
    int i, choice;
    char str1[100], str2[100], result[200], repeat; 

    do 
    {
        printf(" String Operations Menu \n");
        printf("1. Find Length\n");
        printf("2. Join Two Strings\n");
        printf("3. Compare Two Strings\n");
        printf("4. Copy String\n");
        printf("5. Reverse String\n");
        printf("\nSelect your choice number : \n");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter any string: ");
                scanf("%s", str1);
                printf("Length of the string: %d\n\n", strlen(str1));
                break;

            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);

                strcpy(result, str1);
                strcat(result, str2);
                printf("Joined string: %s\n\n", result);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);

                if (strcmp(str1, str2) == 0) {
                    printf("Both strings are equal.\n\n");
                } else {
                    printf("Strings are different.\n\n");
                }
                break;

            case 4:
                printf("Enter source string: ");
                scanf("%s", str1);

                strcpy(str2, str1);
                printf("Copied string output: %s\n\n", str2);
                break;

            case 5:
                printf("Enter any string to reverse: ");
                scanf("%s", str1);

                int len = strlen(str1);
                printf("Reversed string: ");
                for (i = len - 1; i >= 0; i--) 
                {
                    printf("%c", str1[i]);
                }
                printf("\n\n");
                break;

            default:
                printf("Wrong choice!\n\n");
        }
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &repeat); 
        printf("\n");

    } 
    while (repeat == 'y' || repeat == 'Y');
    printf("Exiting... Goodbye!\n");
    return 0;
}

