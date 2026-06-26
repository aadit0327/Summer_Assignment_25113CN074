#include <stdio.h>
struct Student {
    int roll_no;
    char name[100];
    float marks;
};

int main() 
{
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter Roll Number for student %d : ", i + 1);
        scanf("%d", &s[i].roll_no);
        
        printf("Enter Name for student %d : ", i + 1);
        scanf(" %[^\n]", s[i].name);
        
        printf("Enter Marks for student %d : ", i + 1);
        scanf("%f", &s[i].marks);
    }

    printf("\n%-10s %-20s %-15s\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------------\n");
    for (i = 0; i < n; i++) 
    {
        printf("%-10d %-20s %-15.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    return 0;
}

