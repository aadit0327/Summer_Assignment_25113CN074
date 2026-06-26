#include <stdio.h>
struct Employee 
{
    int emp_id;
    char name[50];
    char designation[30];
    float base_salary, allowance, tax, net_salary;
};

int main() 
{
    int i, n;
    printf("   SALARY MANAGEMENT SYSTEM    \n");
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
        
        printf("Enter Base Salary for employee %d: ", i + 1);
        scanf("%f", &e[i].base_salary);
        
        e[i].allowance = e[i].base_salary * 0.20;
        e[i].tax = e[i].base_salary * 0.10;
        e[i].net_salary = e[i].base_salary + e[i].allowance - e[i].tax;
    }
    printf("\n%-10s %-20s %-20s %-12s %-12s %-12s %-12s\n", 
           "Emp ID", "Name", "Designation", "Base Sal", "Allowance", "Tax", "Net Salary");
    printf("----------------------------------------------------------------------------------------------------\n");
    
    for (i = 0; i < n; i++) 
    {
        printf("%-10d %-20s %-20s %-12.2f %-12.2f %-12.2f %-12.2f\n", 
               e[i].emp_id, e[i].name, e[i].designation, e[i].base_salary, e[i].allowance, e[i].tax, e[i].net_salary);
    }
    return 0;
}

