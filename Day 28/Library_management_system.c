#include <stdio.h>
struct Library 
{
    char book_name[50], author[50];
    int pages;
    float price;
};

int main() 
{
    int i, n;
    printf("Number of books you want to enter : ");
    scanf("%d", &n);

    struct Library lib[n]; 
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter Details for Book %d\n", i + 1);
        printf("Enter Book Name: ");
        scanf(" %[^\n]", lib[i].book_name); 
        printf("Enter Author: ");
        scanf(" %[^\n]", lib[i].author);
        printf("Enter Pages: ");
        scanf("%d", &lib[i].pages);
        printf("Enter Price: ");
        scanf("%f", &lib[i].price);
    }

    printf("\n\n%-25s %-30s %-10s %-10s\n", "Book Name", "Author", "Pages", "Price");
    printf("--------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) 
    {
        printf("%-25s %-30s %-10d %-10.2f\n", 
               lib[i].book_name, lib[i].author, lib[i].pages, lib[i].price);
    }
    return 0;
}

