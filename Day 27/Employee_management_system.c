#include <stdio.h>
struct Employee 
{
    int emp_id;
    char name[50];
    char designation[30];
    float salary;
};

int main() 
{
    int i, n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter ID for employee %d: ", i + 1);
        scanf("%d", &e[i].emp_id);
        
        printf("Enter Name for employee %d: ", i + 1);
        scanf(" %[^\n]", e[i].name);
        
        printf("Enter Designation for employee %d: ", i + 1);
        scanf(" %[^\n]", e[i].designation);
        
        printf("Enter Salary for employee %d: ", i + 1);
        scanf("%f", &e[i].salary);
    }
    printf("\n%-10s %-20s %-20s %-15s\n", "Emp ID", "Name", "Designation", "Salary");
    printf("----------------------------------------------------------------------\n");
    for (i = 0; i < n; i++) 
    {
        printf("%-10d %-20s %-20s %-15.2f\n", e[i].emp_id, e[i].name, e[i].designation, e[i].salary);
    }
    return 0;
}
