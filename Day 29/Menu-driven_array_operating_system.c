#include <stdio.h>
#include <stdlib.h> 
int main() 
{
    int arr[100], n = 0, i, choice, pos, element, search, found, temp;
    char repeat;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    do 
    {
        printf("\n\nArray Operations Menu ");
        printf("\n1. Display Array");
        printf("\n2. Sum and Average of Elements");
        printf("\n3. Insert an Element at a Position");
        printf("\n4. Delete an Element from a Position");
        printf("\n5. Search an Element (Linear Search)");
        printf("\n6. Find Maximum and Minimum Elements");
        printf("\n7. Reverse the Array");
        printf("\n8. Exit");
        printf("\n\nSelect choice number: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                if (n == 0) 
                {
                    printf("\nArray is empty!");
                } 
                else 
                {
                    printf("Array elements : ");
                    for(i = 0; i < n; i++) 
                    {
                        printf("%d ", arr[i]);
                    }
                }
                break;

            case 2: 
            {
                int sum = 0;
                for(i = 0; i < n; i++) 
                {
                    sum += arr[i];
                }
                if (n == 0) 
                {
                    printf("Sum: 0\nAverage: 0.00");
                } 
                else 
                {
                    float avg = (float)sum / n;
                    printf("Sum: %d\n", sum);
                    printf("Average: %.2f", avg);
                }
                break;
            }

            case 3:
                if (n >= 100) 
                {
                    printf("\nArray Overflow! Cannot insert more elements.");
                } 
                else 
                {
                    printf("Enter the element to insert: ");
                    scanf("%d", &element);
                    printf("Enter position (1 to %d): ", n + 1);
                    scanf("%d", &pos);

                    if (pos < 1 || pos > n + 1) 
                    {
                        printf("Invalid position!");
                    }
                     else 
                     {
                        for (i = n - 1; i >= pos - 1; i--) 
                        {
                            arr[i + 1] = arr[i];
                        }
                        arr[pos - 1] = element;
                        n++; 
                        printf("\nElement inserted successfully!");
                    }
                }
                break;

            case 4:
                if (n == 0) 
                {
                    printf("Array Underflow! Nothing to delete.");
                } 
                else 
                {
                    printf("\nEnter position to delete (1 to %d): ", n);
                    scanf("%d", &pos);

                    if (pos < 1 || pos > n) 
                    {
                        printf("Invalid position!");
                    } 
                    else 
                    {
                        for (i = pos - 1; i < n - 1; i++) 
                        {
                            arr[i] = arr[i + 1];
                        }
                        n--; 
                        printf("Element deleted successfully!");
                    }
                }
                break;

            case 5:
                printf("\nEnter element to search: ");
                scanf("%d", &search); 
                found = 0;
                for (i = 0; i < n; i++) 
                {
                    if (arr[i] == search) 
                    {
                        printf("Element found at Position %d (Index %d)\n", i + 1, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) 
                {
                    printf("Element not found in the array.");
                }
                break;

            case 6: 
              {
                if (n == 0) 
                {
                    printf("Array is empty!");
                } 
                else 
                {
                    int max = arr[0];
                    int min = arr[0];
                    for (i = 1; i < n; i++) 
                    {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Maximum Element: %d\n", max);
                    printf("Minimum Element: %d", min);
                }
                break;
            }

            case 7:
                for (i = 0; i < n / 2; i++) 
                {
                    temp = arr[i];
                    arr[i] = arr[n - 1 - i];
                    arr[n - 1 - i] = temp;
                }
                printf("Array reversed successfully! Use Option 1 to view.");
                break;

            case 8:
                printf("Exiting program...");
                exit(0);

            default:
                printf("Invalid choice! Please try again.");
        }
        printf("\n\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &repeat); 
    } 
    while(repeat == 'y' || repeat == 'Y');
    printf("Exiting program. Thank you!");
    return 0;
}

