#include <stdio.h>
#include <string.h>

#define MAX 100
int roll[MAX];
char name[MAX][50];
float marks[MAX];
int totalStudents = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void countStudents();
void clearRecords();
int checkDuplicateRoll(int);


int main()
{
    int choice;
    printf("\n       STUDENT RECORD SYSTEM");
    printf("\n-----------------------------------\n");

    do
    {
        printf(" Student Records Menu \n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Count Total Students\n");
        printf("7. Clear All Records\n");
        printf("8. Exit\n");

        printf("\nSelect Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                countStudents();
                break;

            case 7:
                clearRecords();
                break;

            case 8:
                printf("\nThank You for using Student Record System.\n");
                break;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }

    }
    while(choice!=8);

    return 0;
}
void addStudent()
{
    int n,i;
    char ch;

    printf("\nHow many students do you want to add? ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Student %d \n",totalStudents+1);

        do
        {
            printf("Enter Roll Number : ");
            scanf("%d",&roll[totalStudents]);

            if(checkDuplicateRoll(roll[totalStudents]))
                printf("Roll Number already exists! Enter another one.\n");

        }
        while(checkDuplicateRoll(roll[totalStudents]));

        printf("Enter Full Name : ");
        scanf(" %[^\n]",name[totalStudents]);

        printf("Enter Marks : ");
        scanf("%f",&marks[totalStudents]);

        totalStudents++;
    }

    printf("\nStudents Added Successfully.\n");

    printf("\nDo you want to display all student records now? (Y/N) : ");
    scanf(" %c",&ch);

    if(ch=='Y' || ch=='y')
    {
        displayStudents();
    }
}
void displayStudents()
{
    int i;
    if(totalStudents==0)
    {
        printf("\nNo Student Records Available.\n");
        return;
    }

    printf("\n=====================================================================\n");
    printf("Roll No.\t%-30sMarks\n","Name");
    printf("=====================================================================\n");

    for(i=0;i<totalStudents;i++)
    {
        printf("%d\t\t%-30s%.2f\n",
               roll[i],
               name[i],
               marks[i]);
    }

    printf("=====================================================================\n");
}
void searchStudent()
{
    int searchRoll;
    int i, found = 0;

    if(totalStudents == 0)
    {
        printf("\nNo Student Records Available.\n");
        return;
    }

    printf("\nEnter Roll Number to Search : ");
    scanf("%d", &searchRoll);

    for(i = 0; i < totalStudents; i++)
    {
        if(roll[i] == searchRoll)
        {
            printf("\n========== Student Found ==========\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent Record Not Found.\n");
    }
}
void updateStudent()
{
    int updateRoll;
    int i, found = 0;
    char choice;

    if(totalStudents == 0)
    {
        printf("\nNo Student Records Available.\n");
        return;
    }

    printf("\nEnter Roll Number to Update : ");
    scanf("%d", &updateRoll);

    for(i = 0; i < totalStudents; i++)
    {
        if(roll[i] == updateRoll)
        {
            found = 1;

            printf("\nCurrent Details");
            printf("\nRoll Number : %d", roll[i]);
            printf("\nName        : %s", name[i]);
            printf("\nMarks       : %.2f\n", marks[i]);

            printf("\nEnter New Full Name : ");
            scanf(" %[^\n]", name[i]);

            printf("Enter New Marks : ");
            scanf("%f", &marks[i]);

            printf("\nStudent Record Updated Successfully.\n");

            printf("\nDo you want to display the updated record? (Y/N) : ");
            scanf(" %c", &choice);

            if(choice == 'Y' || choice == 'y')
            {
                printf("\n========== Updated Record ==========\n");
                printf("Roll Number : %d\n", roll[i]);
                printf("Name        : %s\n", name[i]);
                printf("Marks       : %.2f\n", marks[i]);
            }

            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent Record Not Found.\n");
    }
}
void deleteStudent()
{
    int deleteRoll;
    int i, j, found = 0;
    char choice;

    if(totalStudents == 0)
    {
        printf("\nNo Student Records Available.\n");
        return;
    }

    printf("\nEnter Roll Number to Delete : ");
    scanf("%d", &deleteRoll);

    for(i = 0; i < totalStudents; i++)
    {
        if(roll[i] == deleteRoll)
        {
            found = 1;

            for(j = i; j < totalStudents - 1; j++)
            {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            totalStudents--;

            printf("\nStudent Record Deleted Successfully.\n");

            printf("\nDo you want to display all remaining records? (Y/N) : ");
            scanf(" %c", &choice);

            if(choice == 'Y' || choice == 'y')
            {
                displayStudents();
            }

            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent Record Not Found.\n");
    }
}
void countStudents()
{
    printf("\n================================");
    printf("\nTotal Students = %d", totalStudents);
    printf("\n================================\n");
}
void clearRecords()
{
    char choice;

    if(totalStudents == 0)
    {
        printf("\nNo Student Records Available.\n");
        return;
    }

    printf("\nAre you sure you want to delete all records? (Y/N) : ");
    scanf(" %c", &choice);

    if(choice == 'Y' || choice == 'y')
    {
        totalStudents = 0;
        printf("\nAll Student Records Deleted Successfully.\n");
    }
    else
    {
        printf("\nOperation Cancelled.\n");
        return;
    }

    printf("\nDo you want to display all records now? (Y/N) : ");
    scanf(" %c", &choice);

    if(choice == 'Y' || choice == 'y')
    {
        displayStudents();
    }
}
int checkDuplicateRoll(int currentRoll)
{
    int i;
    for(i = 0; i < totalStudents; i++)
    {
        if(roll[i] == currentRoll)
        {
            return 1; 
        }
    }
    return 0; 
}
