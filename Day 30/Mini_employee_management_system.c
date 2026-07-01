#include <stdio.h>
#include <string.h>

#define MAX 100

int empID[MAX];
char empName[MAX][50];
char department[MAX][30];
float salary[MAX];
int totalEmployees = 0;

void addEmployee();
void displayEmployee();
void searchEmployee();
void updateEmployee();
void deleteEmployee();
int checkDuplicateID(int id, int currentIndex); 

int main()
{
    int choice;

    do
    {
        printf("\n   EMPLOYEE MANAGEMENT SYSTEM");
        printf("\n--------------------------------");

        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\n\nSelect Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    }
    while(choice!=6);

    return 0;
}

void addEmployee()
{
    int n,i;

    printf("\nHow many employees do you want to add? ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(totalEmployees >= MAX)
        {
            printf("\nSystem database is full! Cannot add more employees.\n");
            break;
        }

        printf("\nEmployee %d\n",totalEmployees+1);

        int tempID;
        do
        {
            printf("Enter Employee ID : ");
            scanf("%d",&tempID);

            if(checkDuplicateID(tempID, totalEmployees))
            {
                printf("Employee ID already exists. Try again.\n");
            }
            else
            {
                empID[totalEmployees] = tempID;
                break; 
            }

        }
        while(1);

        printf("Enter Employee Name : ");
        scanf(" %[^\n]",empName[totalEmployees]);

        printf("Enter Department : ");
        scanf(" %[^\n]",department[totalEmployees]);

        printf("Enter Salary : ");
        scanf("%f",&salary[totalEmployees]);

        totalEmployees++;
    }

    printf("\nEmployees Added Successfully.\n");
}

void displayEmployee()
{
    int i;

    if(totalEmployees==0)
    {
        printf("\nNo Employee Records Found.\n");
        return;
    }

    printf("\n----------------------------------------------------------------------------");
    printf("\nID\tEmployee Name\t\tDepartment\t\tSalary");
    printf("\n----------------------------------------------------------------------------");

    for(i=0;i<totalEmployees;i++)
    {
        printf("\n%d\t%-25s%-23s%.2f",
               empID[i],
               empName[i],
               department[i],
               salary[i]);
    }

    printf("\n----------------------------------------------------------------------------\n");
}
void searchEmployee()
{
    int id, i, found = 0;

    printf("\nEnter Employee ID : ");
    scanf("%d", &id);

    for(i = 0; i < totalEmployees; i++)
    {
        if(empID[i] == id)
        {
            printf("\nEmployee Found");
            printf("\nEmployee ID   : %d", empID[i]);
            printf("\nEmployee Name : %s", empName[i]);
            printf("\nDepartment    : %s", department[i]);
            printf("\nSalary        : %.2f\n", salary[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nEmployee Not Found.\n");
}
void updateEmployee()
{
    int id, i, found = 0;

    printf("\nEnter Employee ID : ");
    scanf("%d", &id);

    for(i = 0; i < totalEmployees; i++)
    {
        if(empID[i] == id)
        {
            found = 1;

            printf("\nEnter New Employee Name : ");
            scanf(" %[^\n]", empName[i]);

            printf("Enter New Department : ");
            scanf(" %[^\n]", department[i]);

            printf("Enter New Salary : ");
            scanf("%f", &salary[i]);

            printf("\nEmployee Record Updated Successfully.\n");
            break;
        }
    }

    if(found == 0)
        printf("\nEmployee Not Found.\n");
}
void deleteEmployee()
{
    int id, i, j, found = 0;

    printf("\nEnter Employee ID : ");
    scanf("%d", &id);

    for(i = 0; i < totalEmployees; i++)
    {
        if(empID[i] == id)
        {
            found = 1;

            for(j = i; j < totalEmployees - 1; j++)
            {
                empID[j] = empID[j + 1];
                strcpy(empName[j], empName[j + 1]);
                strcpy(department[j], department[j + 1]);
                salary[j] = salary[j + 1];
            }

            totalEmployees--;

            printf("\nEmployee Deleted Successfully.\n");
            break;
        }
    }

    if(found == 0)
        printf("\nEmployee Not Found.\n");
}

int checkDuplicateID(int id, int limit)
{
    int i;
    for(i = 0; i < limit; i++)
    {
        if(empID[i] == id)
            return 1;
    }
    return 0;
}

