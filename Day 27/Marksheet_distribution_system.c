#include <stdio.h>
struct Student 
{
    int roll_no;
    char name[50], grade;
    float marks1, marks2, marks3, total, percentage;
};

int main() 
{
    int i, n;
    printf("    MARKSHEET DISTRIBUTION SYSTEM    \n");
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter Roll No for student %d: ", i + 1);
        scanf("%d", &s[i].roll_no);
        
        printf("Enter Name for student %d: ", i + 1);
        scanf(" %[^\n]", s[i].name);
        
        printf("Enter Marks for Subject 1, 2, and 3: ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);
        
        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = s[i].total / 3.0;
        
        if (s[i].percentage >= 85.0) 
        {
            s[i].grade = 'A';
        } 
        else if (s[i].percentage >= 60.0) 
        {
            s[i].grade = 'B';
        } 
        else if (s[i].percentage >= 40.0) 
        {
            s[i].grade = 'C';
        } 
        else 
        {
            s[i].grade = 'F';
        }
    }
    printf("\n%-10s %-20s %-8s %-8s %-8s %-8s %-12s %-5s\n", 
           "Roll No", "Name", "Sub 1", "Sub 2", "Sub 3", "Total", "Percentage", "Grade");
    printf("-------------------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++) 
    {
        printf("%-10d %-20s %-8.1f %-8.1f %-8.1f %-8.1f %-12.2f %-5c\n", 
               s[i].roll_no, s[i].name, s[i].marks1, s[i].marks2, s[i].marks3, s[i].total, s[i].percentage, s[i].grade);
    }
    return 0;
}

