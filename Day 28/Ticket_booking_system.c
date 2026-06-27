#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seats[10] = {0}; 
    int choice, subChoice, seatNum;

    while (1) 
    {
        printf("\nSeat Reservation System\n");
        printf("1. View Seats & Manage Bookings\n");
        printf("2. Exit\n");
        printf("\nEnter your choice : ");

        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (choice == 2) 
        {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        if (choice == 1) 
        {
            while (1) 
            {
                printf("\n Current Seat Status \n");
                int bookedCount = 0;
                for (int i = 0; i < 10; i++) {
                    printf("Seat %2d: [%s]\n", i + 1, seats[i] ? "Booked" : "Empty");
                    if (seats[i] == 1) bookedCount++;
                }
                if (bookedCount == 10) 
                {
                    printf("\n--- System Full! ---\n");
                    printf("1. Cancel a Booking\n2. Return to Main Menu\n");
                } 
                else 
                {
                    printf("\n1. Book a Seat\n2. Cancel a Booking\n3. Return to Main Menu\n");
                }
                printf("\nAction Choice: ");

                if (scanf("%d", &subChoice) != 1) 
                {
                    printf("Invalid input! Please enter a number.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                if (bookedCount == 10) 
                {
                    if (subChoice == 1) subChoice = 2; 
                    else if (subChoice == 2) subChoice = 3; 
                    else subChoice = -1; 
                }
                if (subChoice == 3) 
                {
                    break; 
                }
                else if (subChoice == 1) 
                {
                    printf("Enter seat number to book (1-10): ");
                    scanf("%d", &seatNum);

                    if (seatNum < 1 || seatNum > 10) printf("Error: Seat %d does not exist.\n", seatNum);
                    else if (seats[seatNum - 1] == 0) 
                    {
                        seats[seatNum - 1] = 1;
                        printf("Success: Seat %d is now booked!\n", seatNum);
                    } 
                    else 
                    {
                      printf("Sorry: Seat %d is already taken.\n", seatNum);
                    }
                } 
                else if (subChoice == 2) 
                {
                    printf("Enter seat number to cancel (1-10): ");
                    scanf("%d", &seatNum);

                    if (seatNum < 1 || seatNum > 10) 
                    {
                      printf("Error: Invalid seat number.\n");
                    }
                    else if (seats[seatNum - 1] == 1) 
                    {
                        seats[seatNum - 1] = 0;
                        printf("Success: Booking for seat %d has been cancelled.\n", seatNum);
                    } 
                    else 
                    {
                      printf("Notice: Seat %d is already empty.\n", seatNum);
                    }
                } 
                else 
                {
                    printf("Invalid action choice! Please try again.\n");
                }
            }
        }
    }
    return 0;
}

