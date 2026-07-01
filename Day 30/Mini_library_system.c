#include <stdio.h>
#include <string.h>

#define MAX 100
int bookID[MAX];
char bookName[MAX][50];
char authorName[MAX][50];
int status[MAX];    
int totalBooks = 0;

void addBooks();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();
void deleteBook();
int checkDuplicateID(int);

int main()
{
    int choice;

    do
    {
        printf("\n MINI LIBRARY SYSTEM");
        printf("\n--------------------------------");

        printf("\n1. Add Books");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Delete Book");
        printf("\n7. Exit");

        printf("\n\nSelect Your Choice : ");
        if (scanf("%d", &choice) != 1) 
        {
            printf("\nInvalid Input Type!\n");
            while (getchar() != '\n');
            continue;
        }

        switch(choice)
        {
            case 1:
                addBooks();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                deleteBook();
                break;

            case 7:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    }
      while(choice!=7);

    return 0;
}

void addBooks()
{
    int n, i, tempID;

    printf("\nHow many books do you want to add? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        if (totalBooks >= MAX) 
        {
            printf("\nLibrary space full! Cannot add more books.\n");
            break;
        }

        printf("\nBook %d\n", totalBooks + 1);

        do
        {
            printf("Enter Book ID : ");
            scanf("%d", &tempID);

            if(checkDuplicateID(tempID))
            {
                printf("Book ID already exists.\n");
            }

        } while(checkDuplicateID(tempID));

        bookID[totalBooks] = tempID;

        printf("Enter Book Name : ");
        scanf(" %[^\n]", bookName[totalBooks]);

        printf("Enter Author Name : ");
        scanf(" %[^\n]", authorName[totalBooks]);

        status[totalBooks] = 0;
        totalBooks++;
    }

    printf("\nProcess completed. Total books in library: %d\n", totalBooks);
}

void displayBooks()
{
    int i;

    if(totalBooks == 0)
    {
        printf("\nNo Books Available.\n");
        return;
    }

    printf("\n--------------------------------------------------------------------------");
    printf("\nID\t%-25s%-25sStatus", "Book Name", "Author");
    printf("\n--------------------------------------------------------------------------");

    for(i = 0; i < totalBooks; i++)
    {
        printf("\n%d\t%-25s%-25s",
               bookID[i],
               bookName[i],
               authorName[i]);

        if(status[i] == 0)
            printf("Available");
        else
            printf("Issued");
    }

    printf("\n--------------------------------------------------------------------------\n");
}

void searchBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID : ");
    scanf("%d", &id);

    for(i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == id)
        {
            printf("\nBook Found");
            printf("\nBook ID     : %d", bookID[i]);
            printf("\nBook Name   : %s", bookName[i]);
            printf("\nAuthor Name : %s", authorName[i]);

            if(status[i] == 0)
                printf("\nStatus      : Available\n");
            else
                printf("\nStatus      : Issued\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found.\n");
}

void issueBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID : ");
    scanf("%d", &id);

    for(i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == id)
        {
            found = 1;

            if(status[i] == 1)
                printf("\nBook is Already Issued.\n");
            else
            {
                status[i] = 1;
                printf("\nBook Issued Successfully.\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found.\n");
}

void returnBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID : ");
    scanf("%d", &id);

    for(i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == id)
        {
            found = 1;

            if(status[i] == 0)
                printf("\nBook is Already Available.\n");
            else
            {
                status[i] = 0;
                printf("\nBook Returned Successfully.\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found.\n");
}

void deleteBook()
{
    int id, i, j, found = 0;

    printf("\nEnter Book ID : ");
    scanf("%d", &id);

    for(i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == id)
        {
            found = 1;

            for(j = i; j < totalBooks - 1; j++)
            {
                bookID[j] = bookID[j + 1];
                strcpy(bookName[j], bookName[j + 1]);
                strcpy(authorName[j], authorName[j + 1]);
                status[j] = status[j + 1];
            }

            totalBooks--;

            printf("\nBook Deleted Successfully.\n");
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found.\n");
}

int checkDuplicateID(int id)
{
    int i;

    for(i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == id)
            return 1;
    }

    return 0;
}

